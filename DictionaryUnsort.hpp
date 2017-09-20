#pragma once
#include "KVpair.hpp"
#include "LinkedList.hpp"

template <class Key, class E>
class Dictionary{
  private:
    LinkedList< KVpair<Key,E> >* list;
    long size;

  public:
  Dictionary(){
    size = 0;
    list = new LinkedList< KVpair<Key,E> >;
  }

  ~Dictionary(){ size = 0; list->clear();}

  // Insert an element: append to list
  void insert(const Key&k, const E& e) {
    KVpair<Key,E> temp(k, e);
    list->append(temp);
    size++;
  }

  const E find(const Key&k){
    long i = 0;
    KVpair<Key,E> temp;
    for (i = 0; i < size; i++) {
      temp = list->get(i);
      // the access cannot be compared becuase of the design of the linkedlist
      if ( k ==  temp.getKey()) {
        return temp.getValue();
      }
    }
    cout << "THE KEY DOES NOT EXIST, SO RETURNING THE FIRST KEY VALUE : " ;
    temp = list->get(0);
    return temp.getValue(); // instead of NULL
  }

  const E remove(const Key& k) {
    long i = 0;
    KVpair<Key,E> temp;
    for (i = 0; i < size; i++) {
      temp = list->get(i);
      if ( k ==  temp.getKey()) {
        list->remove(i);
        cout << "Returning the value eliminated: " ;
        size--;
        return temp.getValue();
      }
    }
    cout << "THE KEY DOES NOT EXIST, SO RETURNING THE FIRST KEY VALUE : " ;
    temp = list->get(0);
    return temp.getValue(); // instead of NULL
  }


  long getSize(){ return size;}




};

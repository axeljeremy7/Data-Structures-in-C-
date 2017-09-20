
#pragma once
#include <stdexcept>
#include <iostream>
using namespace std;

template <class E>
class Arraylist  {
private:
  long size;
  long curr;
  E* list;

public:
  Arraylist() { // Constructor
    size = 100;
    curr = 0;
    list = new E[size];
  }

  Arraylist(long initCapacity) { // Constructor 2 with initial capacity
    size = initCapacity;
    curr = 0;
    list = new E[size];
  }

   ~Arraylist() { // Destructor
     delete [] list;
     size = curr = 0;
     list = nullptr;
   }

   void clear() {
     delete [] list;
     size = curr = 0;
     list = nullptr;
   }

   long length() const { return size; }

   bool isEmpty() const { return size == 0; }

   // insert or replace an element according to the index
   void insert( const E& elem, int index){
     if(index <0 || index >= size){
       // throw std::out_of_range ("Index out of bounds");
       cout << "Index: " << index << " is out of bounds. " <<'\n';

     }
     else if (index > curr) {
       cout << "Index: " << index << " is out of bounds " <<
       "of the current index when you are setting the element"
       << " but is inserted" <<'\n';
       list[index] = elem;
     }else {
       list[index] = elem;
     }

   }

   // return an element according to the index
   const E& get(int index) const {
      if(index < 0 || index >= size){
        // throw std::out_of_range ("Index out of bounds");
        cout << "Index: " << index << " is out of bounds. " <<'\n';
        cout << "Therefore, It's going to return the element of index 0." <<'\n';
        return list[0];
        // throw std::out_of_range ("Index out of bounds");
      }

      if (index > curr) {
        cout << "Index: " << index << " is out of bounds of the current or last index " <<'\n';
        cout << "Therefore, It may return an element that wasn't originally created or set, verify in which index you set the element " <<'\n';
        return list[index];
      }

      return list[index];
   }

   // add an element at the end of the list base on the current index
   void append(const E& elem) {
    list[curr++] = elem;
    //cout << "curr: " <<curr << '\n';
    if (curr+1 == size) {
        size = 7*size;
        E* list2;
        list2 = new E[curr+1];
        for (int i = 0; i <=curr; i++) {
          list2[i] = list[i];
        }
        delete [] list;
        list = new E[size];
        for (int i = 0; i <=curr; i++) {
          list[i] = list2[i];
        }
    }

   }

   const E remove(int index) const {
     if(index < 0 || index >= size){
       // throw std::out_of_range ("Index out of bounds");
       cout << "Index: " << index << " is out of bounds. " <<'\n';
       cout << "Therefore, It's going to return the element of index 0." <<'\n';
       return list[0];
       // throw std::out_of_range ("Index out of bounds");
     }

     E removed = list[index];
     E* temp;
     temp = new E[1];
     list[index] =  temp[0]; // it cannot be nullptr
     return removed;
  }




};


#pragma once
#include <stdexcept>
#include <iostream>
#include "Node.hpp"
using namespace std;


template <class E>
class LinkedList  {
private:
    long size;
    long curr;
    Node<E>* head;
    Node<E>* tail;
    Node<E>* current;


public:
  LinkedList() { // Constructor
    head = new Node<E>;
    tail = new Node<E>;
    tail->setPrev(head);
    head->setNext(tail);
    size = 0;
  }


   ~LinkedList() { // Destructor
    while(head!=NULL){
      current = head;
      head = head->getNext();
      delete current;
    }
     size = curr = 0;
   }

   void clear() {
    while(head!=NULL){
      current = head;
      head = head->getNext();
      delete current;
    }
     size = curr = 0;
   }

   long length() const { return size; }

   bool isEmpty() const { return size == 0; }

   // insert or replace an element according to the index
   void insert(const E& elem, int index){

   }

   // return an element according to the index
   const E& get(int index) const {
    if (index<0 || index>=size)
    {
      Node<E>* temp = new Node<E>;
      cout  <<"   OUT OF Boundaries.. "  <<'\n';
      return temp->getData();
    }

    if (index+1 == size)
    {
      return current->getData();
    }
    if (index == 0)
    {
      return head->getNext()->getData();
    }

    if (index<=size/2)
    {
     //cout  <<"   index<=size/2 ->  "<< size/2 <<'\n';
      Node<E>* temp = new Node<E>;
      temp = head;//->getNext();
      int i;
      for (i = 0; i <=index; ++i)
      {
        temp = temp->getNext();
      }
      return temp->getData();
    }else{
      Node<E>* temp = new Node<E>;
      temp = tail;//->getPrev();
      int i;
      for (i = index; i < size; ++i)
      {
        temp = temp->getPrev();
      }
      return temp->getData();
    }


   }

   void print(){
    Node<E>* temp = new Node<E>;
    temp = head->getNext();
    int c = 0;
    while(temp->getNext()!= NULL) // c < size
    {
      cout << c <<"-> "<<temp->getData() <<'\n';
      temp = temp->getNext();
      c++;
    }

   }

   // add an element at the end of the list base on the current index
   void append(const E& elem) {
    current = new Node<E>(elem, tail->getPrev(), tail);
    tail->getPrev()->setNext(current);
    tail->setPrev(current);
    size++;

   }

   Node<E>* getCurrentNode() const {
    return current;
   }

   // remove an element according to its position
   // return the data eliminated
   const E remove(int index)  {

    E datar;

    if (index+1 == size)
    {
      Node<E>* temp = current;
      current = current->getPrev();
      current->setNext(tail);
      tail->setPrev(current);
      datar = temp->getData();
      delete temp;
      size--;
      //return current->getData();
      return datar;
    }
    if (index == 0)
    {
      Node<E>* temp = head->getNext();
      head->setNext(head->getNext()->getNext());
      head->getNext()->setPrev(head);
      datar = temp->getData();
      delete temp;
      size--;
      //return head->getNext()->getData();
      return datar;
    }

    if (index<=size/2)
    {
     //cout  <<"   index<=size/2 ->  "<< size/2 <<'\n';
      Node<E>* temp = new Node<E>;
      temp = head;//->getNext();
      int i;
      for (i = 0; i <=index; ++i)
      {
        temp = temp->getNext();
      }

      datar = temp->getPrev()->getData();

      Node<E>* temp2 = new Node<E>;
      temp2 = temp;
      temp->getPrev()->setNext(temp->getNext());
      temp->getNext()->setPrev(temp->getPrev());

      delete temp2;
      size--;
      //return temp->getData();
      return datar;
    }else{
      Node<E>* temp = new Node<E>;
      temp = tail;//->getPrev();
      int i;
      for (i = index; i < size; ++i)
      {
        temp = temp->getPrev();
      }

      datar = temp->getPrev()->getData();

      Node<E>* temp2 = new Node<E>;
      temp2 = temp;
      temp->getPrev()->setNext(temp->getNext());
      temp->getNext()->setPrev(temp->getPrev());
      delete temp2;
      size--;
      //return temp->getData();
      return datar;
    }
   }




};

#include <stdio.h>
#include "LinkedList.hpp"

int main(int argc, char const *argv[]) {
  Node<int> node1(7,NULL,NULL);
  cout << "node1.getData() " << node1.getData() <<'\n';
  cout << "node1.getPrev() " << node1.getPrev() <<'\n';
  cout << "node1.getNext() " << node1.getNext() <<'\n';

/*
  node1.setNext(new Node<int> (11,NULL));
  cout << "node1.getNext() " << node1.getNext() <<'\n';
  cout << "node1.getNext()->getData() " << node1.getNext()->getData() <<'\n';
*/

  Node<int> node2(11,NULL);
  Node<int>* node0;
  node0 = new Node<int>(5);
  node1.setNext(&node2);
  node1.setPrev(node0);
  cout << "\nnode1.getNext() " << node1.getNext() << "   " << &node2 <<'\n';
  cout << "node1.getPrev() " << node1.getPrev() << "   " << node0  <<'\n';

  cout << "node1.getNext()->getData() " << node1.getNext()->getData() <<'\n';
  cout << "node1.getPrev()->getData() " << node1.getPrev()->getData() <<'\n';



  cout << "\nnode1.getNext()->getNext() " << node1.getNext()->getNext() <<'\n';
  cout << "\nnode1.getPrev()->getPrev() " << node1.getPrev()->getPrev() <<'\n';
  node2.setPrev(&node1);
  cout << "\nnode1.getNext()->getPrev()->getData() " << node1.getNext()->getPrev()->getData() <<"\n\n";

  //node1.getNext() = &node2;
  //node1.getNext()->getData() = 77;
  //cout << "node1.getNext()->getData() " << node1.getNext()->getData() <<'\n';

  LinkedList<int> l1;
  l1.append(17);
  l1.append(19);
  l1.append(23);
  l1.print();

  cout << "size: "<< l1.length() << '\n';
  cout << l1.getCurrentNode()->getData() << '\n';
  cout << l1.getCurrentNode()->getPrev()->getData() << '\n';
  cout << l1.getCurrentNode()->getPrev()->getPrev()->getData() << "\n\n";

    Node<int>* temp = l1.getCurrentNode();
  while(temp->getPrev()!= NULL){
    cout <<  temp->getData() << '\n';
    temp = temp->getPrev();
  }


  cout << "\n17, 19, 23   FIN 1\n"<<'\n';

  LinkedList<int> l2;
  int primes [] = {2,3,5,7,11,13,17,19,23,29,31};
  for (int i = 0; i < 11; ++i)
  {
      l2.append(primes[i]);
  }
  l2.print();
  cout << "\n\n";
  for (int i = 0; i < 11; ++i)
  {
      cout << i <<" -> "<<l2.get(i) <<'\n';
  }

  cout << "\n\n size is :: ->   " << l2.length() << '\n';


//cannot assign to non-static data member within const member function 'remove'
  cout << "remove 10 "<<l2.remove(10) << '\n';
  cout << "remove 0 "<<l2.remove(0) << '\n';
  cout << "remove 7 "<<l2.remove(7) << '\n';
  cout << "remove 3 "<<l2.remove(3) << '\n';

  cout << "\n\n size::: " << l2.length() << '\n';
  for (int i = 0; i < 10; ++i)
  {
      cout << i <<" -> "<<l2.get(i) <<'\n';
  }


  return 0;


}

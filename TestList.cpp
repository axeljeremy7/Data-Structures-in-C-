#include <stdio.h>
#include "Arraylist.hpp"


class Node{
public:
  int data;
  Node* node;
};

int main(int argc, char const *argv[]) {
  cout << "begin" << "\n";
  Arraylist<int> list(5);
  list.append(2);
  list.append(3);
  list.append(5);
  list.append(7);
  list.append(11);
  list.append(13);
  list.append(17);
  list.append(19);
  list.append(23);
  list.append(29);
  list.append(31);

  cout << "size => " << list.length() <<'\n';

  for (int i = 0; i < list.length(); i++) {
    cout << "index: "<< i << "  ->  "<< list.get(i) <<'\n';
  }

  //int p1 = 777;
  //list.get(3) = p1; // this happen if I avoid "const" keyword in E&

  //list.get(3) = p1; // just E // error: expression is not assignable

  //p1 = &list.get(3); // error: cannot take the address of an rvalue of type 'int'


  //cout << "value 7 -> " << p1 << " ... "<<  list.get(3) <<'\n';


/*
 // function "E get(int index) const"


  Arraylist<Node> list2(7);
  Node node1;
  Node node2;
  node2.data = 24324;
  node1.data = 1771;
  list2.append(node1);
  list2.append(node2);

  node1.node = &node2;
  cout << node1.node->data << " " <<  node2.data <<'\n';
  node1.node->data = 999;
  cout << node1.node->data << " " <<  node2.data <<'\n';
  cout << "node1.data=> " << node2.data << "  list2.get(1).data=> "<<  list2.get(1).data <<'\n';

  //list2.get(0).node->data  = 77; // Segmentation fault: 11

  //list2.get(0).node = &node2; //error: expression is not assignable
  //list2.get(0).node->data  = 77;
  cout << "node1.data=> " << node1.data << "  list2.get(0).data=> "<<  list2.get(0).data <<'\n';
  //list2.get(0).data  = 1772; // error: expression is not assignable
  //list2.get(0).data = &node1; // error: expression is not assignable
  //cout <<  &list2.get(0) << "  " << &node1 <<'\n'; // error: taking the address of a temporary object of type 'Node' [-Waddress-of-temporary]
 */

 ///*
  // function " const E get(int index) const"


   Arraylist<Node> list2(7);
   Node node1;
   Node node2;
   node2.data = 22;
   node1.data = 11;
   list2.append(node1);
   list2.append(node2);

   node1.node = &node2;
   cout << node1.node->data << " " <<  node2.data <<'\n';
   node1.node->data = 17;
   cout << node1.node->data << " " <<  node2.data <<'\n';
   cout << "node2.data=> " << node2.data << "  list2.get(1).data=> "<<  list2.get(1).data <<'\n';

   //list2.get(0).node->data  = 77; // Segmentation fault: 11

   //list2.get(0).node = &node2; //error: expression is not assignable

   cout << "node1.data=> " << node1.data << "  list2.get(0).data=> "<<  list2.get(0).data <<'\n';
   //list2.get(0).data  = 1772; // error: expression is not assignable
   //list2.get(0).data = &node1; // error: expression is not assignable
   //cout <<  &list2.get(0) << "  " << &node1 <<'\n'; // error: taking the address of a temporary object of type 'Node' [-Waddress-of-temporary]

   list2.append(node1);
   cout << "node1.node->data " << node1.node->data << "  list2.get(2).node->data=> "<<  list2.get(2).node->data <<'\n';
   node1.node->data = 177; // affect both , to avoid that my list class has to be more especific with the data type
   // I will create a new list class only for node objects and every time I add objects I create a new Node so the data of the pointers
   // does not modify both even if the node class has private members and public methods
   cout << "node1.node->data " << node1.node->data << "  list2.get(2).node->data=> "<<  list2.get(2).node->data <<'\n';
  //*/

  list2.get(7);


  cout << "\nList 1" ;
  cout << "\n\n value at 31=>" <<list.get(31)<<'\n';

  cout << "\n\n value at 7=> " << list.get(7) << "\n" ;
  int val1 = 1234567;
  list.insert(val1, 7);
  val1 = 987654321; // doesn't affect with or without const
  cout << "\n\n value at 7=> " << list.get(7) << "\n" ;
  cout << "\n\n" ;
  cout << "removed :  "<<list.remove(7) << '\n';
  cout <<" \nvalue at 7 is now " << list.get(7) << '\n';
  list.clear();
  cout << list.isEmpty() << " "<< list.length() <<'\n';

  //cout << list.get(0) <<'\n';

  return 0;
}

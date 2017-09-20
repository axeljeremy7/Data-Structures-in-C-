#include <stdio.h>
#include <iostream>
#include <iomanip>

void print(int **p, int rowSize, int columnSize);
using namespace std;


class Node {
private:
  double num;
public:
  void setNum(double x);
  void print() const;

};
void Node::setNum(double x){
  num = x;
}
void Node::print() const{
  cout << "num = " << num <<'\n';
}



int main(int argc, char const *argv[]) {
  cout << "\n\n\n\n";
  double num;
  double *ptr;
  cout << "\nAddress of num:" << &num <<'\n';
  cout << "Address of ptr:" << &ptr <<"\n\n";

  num = 7;
  cout << "Value of num:" << num <<'\n';
  cout << "Address of num:" << &num <<"\n\n";
  ptr = &num; // set to point a double object
  *ptr = 11;

  cout << "Value of num:" << num <<'\n';
  cout << "Value of *ptr:" << *ptr <<"\n\n";

  cout << "Address of num:" << &num <<'\n';
  cout << "Value of ptr:" << ptr <<"\n\n";
  cout << "Address of ptr:" << &ptr <<'\n';

  if (*ptr == num) {
    cout << "\nYES" <<'\n';
  }
  cout << "Address of &*ptr:" << &(*ptr) <<'\n';



  cout << "\n\n -> OPERATOR\n";

  Node node;
  Node *nodeptr;

  nodeptr = &node; // set to point Node object
  nodeptr->setNum(17); //(*nodeptr).setNum(17)
  nodeptr->print(); //(*nodeptr).print()

  int *p = nullptr;  // =0;  // ;
  cout << "Address of &ptr:" << &p <<'\n';
  cout << "Value of ptr:" << p <<'\n';
  //cout << "Value of *ptr:" << *p <<'\n'; // Segmentation fault:

  cout << "\n\n -> new OPERATOR and delete OPERATOR\n";

  int *a;
  // MEMORY LEAKs
  a = new int;
  *a = 31;
  cout << "Address of &a:" << &a <<'\n';
  cout << "Value of *a:" << *a <<'\n';
  cout << "Value of a:" << a <<'\n';
  a = new int;
  *a = 29;
  cout << "Address of &a:" << &a <<'\n';
  cout << "Value of *a:" << *a <<'\n';
  cout << "Value of a:" << a <<'\n';

  delete a;
  cout << "Address of &a:" << &a <<'\n';
  cout << "After deletion the value of *a:" << *a <<'\n';
  cout << "After deletion the value of a:" << a <<'\n';




  cout << "\n\n More Operations\n";

  int *n, *m;

  m=n;
  cout << "Address of &n:" << &n <<'\n';
  cout << "Value of n:" << n <<'\n';

  cout << "\nAddress of &m:" << &m <<'\n';
  cout << "Value of m: " << m <<'\n';

  //any changes apply both
  //*m = 77;

  //cout << "Value of *m:" << *m <<'\n';
  //cout << "Value of *n:" << *n <<'\n';


  //cout << "\nSize of m:" << sizeof(m) <<'\n';
  //cout << "Size of *m:" << sizeof(*m) <<'\n';
  //m=m+1;
  //cout << "\nSize of m:" << sizeof(m+1) <<'\n';
  //cout << "Size of *m:" << sizeof(*m) <<'\n';

  n = new int[7];

  cout << "\n" ;
  for (int i = 0; i < 7; i++) {
    n[i]=i;
    cout << "n[" << i <<"]="<< n[i] <<'\n';
  }


  cout << "\n\n TWO DIMENSIONAL ARRAY\n";
  int rows = 4;
  int columns = 6;

  int *board[rows];
  for (int i = 0; i < rows; i++) {
    board[i] = new int[columns];
  }



  int **board2;
  board2 = new int*[rows];

  for (int i = 0; i < rows; i++) {
    board2[i] = new int[columns];
  }

  cout << "\n" ;



  print(board2, rows, columns);
  //void print(board2, rows, columns);

  cout << "\n" ;
  return 0;
}

void print(int **p, int rowSize, int columnSize){

  for (int row = 0; row < rowSize; row++)
  {
    for (int col = 0; col < columnSize; col++) {
      p[row][col] = 7;
      cout << p[row][col]  << " ";
    }
    cout << "\n" ;
  }

}

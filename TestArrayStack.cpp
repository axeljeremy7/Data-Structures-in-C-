#include <stdio.h>


#include "ArrayStack.hpp"

int main(int argc, char const *argv[]) {
  AStack<int> stack(11);
  int list[11] = {2,3,5,7,11,13,17,19,23,29,31};
  cout << "The AStack ... " <<'\n';
  for (int i = 0; i < 11; i++) {
    stack.push(list[i]);
  }
  cout << stack.topValue() << '\n';
  for (int i = 0; i < 11; i++) {
    cout << stack.pop() << '\n';
    cout << "top value: " << stack.length() << '\n';
  }

   cout << stack.pop() << '\n';


  return 0;
}

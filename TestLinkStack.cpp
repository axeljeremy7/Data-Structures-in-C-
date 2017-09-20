#include <stdio.h>
#include <iostream>
using namespace std;
#include "LinkStack.hpp"

int main(int argc, char const *argv[]) {
  LStack<int> stack(11);
  int list[11] = {2,3,5,7,11,13,17,19,23,29,31};
  cout << "The LStack ... " <<'\n';
  for (int i = 0; i < 11; i++) {
    stack.push(list[i]);
    cout << "top value: " << stack.length() << '\n';
  }

  int t = 11;
  cout << " \n\ncheck:  "<<--t << "\n\n";

  for (int i = 0; i < 11; i++) {
    cout << stack.pop() << '\n';
    cout << "top value: " << stack.length() << '\n';
  }

  cout << stack.topValue() << '\n';


  return 0;
}

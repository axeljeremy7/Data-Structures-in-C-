#include <stdio.h>
#include <iostream>
using namespace std;
#include "LinkQueue.hpp"

int main(int argc, char const *argv[]) {
  LQueue<int> queue(11);
  int list[11] = {2,3,5,7,11,13,17,19,23,29,31};
  cout << "The LQueue ... " <<'\n';
  for (int i = 0; i < 11; i++) {
    queue.enqueue(list[i]);
    cout << "length---> " << queue.length() << '\n';
  }

  int t = 11;
  cout << " \n\ncheck:  "<<--t << "\n\n";

  for (int i = 0; i < 11; i++) {
    cout << queue.dequeue() << '\n';
    cout << "length: " << queue.length() << '\n';
  }

  cout << queue.frontValue() << '\n';

  return 0;
}

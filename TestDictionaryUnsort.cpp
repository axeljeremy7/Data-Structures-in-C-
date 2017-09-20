#include <stdio.h>
#include "DictionaryUnsort.hpp"
#include <stdexcept>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  string name = "Goku";
  cout <<  name <<'\n';

  Dictionary<int,string> dic1;
  dic1.insert(7,"Axel1");
  dic1.insert(71,"Axel2");
  dic1.insert(73,"Axel3");
  dic1.insert(75,"Axel4");
  dic1.insert(77,"Axel5");

  cout << dic1.getSize() <<'\n';

  cout << dic1.find(7)  <<'\n';
  cout << dic1.find(71) <<'\n';
  cout << dic1.find(72) <<'\n';
  cout << dic1.find(73) <<'\n';
  cout << dic1.find(75) <<'\n';
  cout << dic1.find(77) <<'\n';

  cout << dic1.remove(72) <<'\n';
  cout << dic1.remove(73) <<'\n';
  cout << dic1.remove(75) <<'\n';
  cout << dic1.remove(77) <<'\n';
  cout << dic1.remove(7)  <<'\n';
  cout << dic1.remove(71) <<'\n';
  cout << dic1.remove(72) <<'\n';

  cout << "FIN " <<'\n';
  return 0;
}

#include <iostream>
#include <cstdlib>
#include "list.h"

using namespace std;

int main(int argc, char** argv){
  
  list testList = list();

  testList.output(cout);

  testList.add(3, 0);
  
  testList.add(4, 1);
  testList.output(cout);
  
  testList.add(5, 2);
  testList.add(6, 3);
  testList.add(7, 4);
  testList.add(8, 5);
  testList.add(2, 0);

  testList.output(cout);

  
  testList.remove_at(0);

  testList.output(cout);

  cout << testList.get(1) << endl;
  cout << testList.size() << endl;

  cout << testList.find(5) << endl;
  cout << testList.find(125) << endl;

  testList.remove(7);
  testList.output(cout);

  testList.remove(9);
  testList.output(cout);

  return 0;
}

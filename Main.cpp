
#include <iostream>
#include <vector>

/* This two includes would cause an error if it wasn't for the
ifndef in the header file*/

#include "Library.hh"

// In all the program files of the project you must include the library.hh!

using namespace std;

int main () {

/* Here you do your main normally as you would in any other program,
The only diference is that the functions are in other file. */

  vector <int> ListOfNumbers;

  ListOfNumbers.push_back(1);
  ListOfNumbers.push_back(2);
  ListOfNumbers.push_back(3);

  myprint(ListOfNumbers);
  VectorMultiplication(ListOfNumbers);
  VectorAddition(ListOfNumbers);

  return 0;

}

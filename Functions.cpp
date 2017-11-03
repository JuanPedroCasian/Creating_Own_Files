/*
Functions.cpp
Nov 3, 2017
Juan Casian
*/

#include "Library.hh"
/* When you include your own library which is in the same folder you
add the Name of the file in "". */

#include <vector>

#include <iostream>


using namespace std;

/* In this program we are only putting the Functions
which we will need in the main program, so in this one
you do not add a main function.
*/

int VectorAddition (vector <int> Data){

/* To create a separate function you make it
exactly as you would in a normal program */

  int Total = 0;

  for (int i = 0; i < Data.size(); i++){
    Total = Total + Data[i];
    cout << "Addition Result: " << Total << endl;
  }

  return Total;

}

int VectorMultiplication (vector<int> Data){
  int Total = 1;

  for (int i = 0; i < Data.size(); i++){
    Total = Total + Data [i];
    cout << "Multiplication Result: " << Total << endl;
  }
  return Total;
}

void myprint (vector<int> Data){

  // You can create any type of funcition in this file.

  for (int i = 0; i < Data.size(); i++){
    cout << "Value Number " << i << "is" << Data[i] << endl;
  }
}

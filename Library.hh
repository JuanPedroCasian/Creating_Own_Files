/*
Library.hh
Nov 3, 2017
Juan Casian
*/

/* This is a header file. The purpose of a header file is to be
a reference file for any program using it. In here you don't have
to do the functions, you only need to show them in order for this
header file to look for them.
*/

#ifndef __Library_hh__


/* This is a really strange code because it means if not define then...
But the strange this is that it really mean if there is something which
is already define in any place then don't do anything. This is cool
becuase all the programs have the header file, so this same code is checking
all the programs and what they define so it wont be define 2 times. */

#define __Library_hh__

/* This means if it was not define then define it. In this codes you
can not use points and you need to use __ at the beginning and the
end of the file you want to include. */

/* The diference between define and include is that define will only tell
that something exists, but include is something that I need to use in
the program.*/

#include <vector>

using namespace std;

int VectorAddition (vector<int> Data);

int VectorMultiplication (vector<int> Data);

void myprint(vector<int> Data);

/* Here you add the functions you want to interpole between the files,
but without all the part of the function, you only put a ; at the end.*/

#endif

 /* This is the end of the if in the beginning, you put it at the end
 of the header because if there is somewhere in between the functions
 referenced in which there is an include then it will still run the
 ifndef */

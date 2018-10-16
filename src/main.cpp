/******************************************************************************
  Title          : main.cpp
  Author         : John Genere
  Created on     : October 15, 2018
  Description    : Displays random peculiar facts
  Purpose        : To exercise collaborative source code development
  Usage          : nuttyfact
  Build with     : g++ -Wall -g -o oddities  main.cpp
  Modifications  : Added a introduction line before all of the oddities
                   Added johncgenere_oddity
  Notes:
  The number N below is the number of people on each team.
  This program prints N peculiar facts, called "oddities" here.
  The main program calls N functions, each with the syntax defined
  by the output_function typedef defined below. Each function must be
  named
       username_oddity

  where username is the GitHub username of its author.
  For example,
      output_function  stewartweiss_oddity;

  Oddities are found in the file "oddities.txt" in the project source directory

******************************************************************************/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <sstream>

using namespace std;

/******************************************************************************/

// The syntax of the output function that must be used to print an oddity.
typedef ostream& (*output_function) (ostream & out);


/******************************************************************************

                        All Function Definitions

******************************************************************************/

ostream& lineBeforeOddity(ostream &out){
    out << "This is a collection of strange but true facts:" << endl << endl;
    return out;
}

ostream& johncgenere_oddity(ostream &out){
    out << "Why do we drive on parkways and park on driveways?" << endl;
    return out;
}

int main(int argc, char* argv[])
{
    lineBeforeOddity(cout);
    // Calls to output functions
    johncgenere_oddity(cout);

   return 0;
}

#include <iostream>
#include <string>
#include "HowtoPlay.h"
#include "Playing.h"
using namespace std;

int processMainMenu()
{
 int Userinput = 0; // User's input

  cout << "            \n                                   Get a Life...                                                   " << endl; // Title
  cout << "     MAIN MENU      \n [1] How to Play  \n [2] Play \n ";
  cin >> Userinput;
  switch (Userinput)
  {
  case 1:
    cout << "\033[2J\033[1;1H";	  
    How2play();
    break;

  case 2:
    cout << "\033[2J\033[1;1H";
    processPlaying();
  }
  return 0;
}


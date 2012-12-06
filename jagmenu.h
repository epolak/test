#pragma once
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <cstring>
#include <fstream>
#include <Windows.h>
using namespace std;

#define ROW 5
#define COL 12
#define MROW 11
#define MCOL 18
#define LINE 80
#define ONE 1
#define TWO 2
#define THREE 3
#define FOUR 4
#define FIVE 5

#ifdef WIN32
#define CLR system("cls")
#define PAS system("pause")
#else
#define CLR system("clear")
#define PAS cout << "Press any key to continue..."; cin.get()
#endif

enum REPORT{SALES, HISTO};
enum REGION{US, Canada, Mexico};

void jagmenu();
//#include "quarter.h"
//#include "quartermenu.h"
#include "regionmenu.h"
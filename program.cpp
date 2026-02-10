#include <iostream>
#include <fstream> // file stream for reading and writing 
#include <string> 
#include <map> //makes it so an element has a value and a key
#include <limits> // for bad inputs 


struct budgetdata{
    double monthlybudget = 0.0;
    std::map<std::string, double> categorylimits; //maps category name to category limit
};


static const char* kFilename ="budget.txt"; 
//static: limits visibility to this file
//const char* is a pointer to 


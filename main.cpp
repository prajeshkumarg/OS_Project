#include <iostream>
#include<fstream>
#include "filesys.h"
#include "file.h"
#include<string.h>
using namespace std;
int main(int argc, char* argv[])
{
    char name[80], content[200], name1[80], keyword[60], *c = NULL;
    cout<< " Virtual File Management System \n";
    cout<< "-----------------------------------------------------------------------------\n";
    int choice;
    filesys f1(argv[1]);  //object of filesys class,,used to access the functions
    return 0;
}

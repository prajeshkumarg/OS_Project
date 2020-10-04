#include "file.h"
#include<iostream>
using namespace std;
char* file::get_file_name()  //get function for file name
{
return name;
}
long int file::get_file_length() //get function for file length
{
return len;
}
int file::get_startpos() //get function for getting the first position of file
{
return startpos;
}


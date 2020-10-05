#ifndef fi
#define fi
//used for defining the parameters of the file 
class file{
public:
char name[64];
long int len;
int startpos;
char* get_file_name();
long int get_file_length();
int get_startpos();
};
#endif // fi

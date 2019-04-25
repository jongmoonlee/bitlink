
#include <stdio.h>
#include <bitlink.h> /* required */

 /* Library API | Types
    typedef bool     ( BS_Receive_t )         ( int, char *, int, int );
    Library API | Function Pointers */


bool bs_receive(int argc, char *argv, int argi, int argj) {
	
	return BS_Receive(argc,argv,argi,argj);
}

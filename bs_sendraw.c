
#include <stdio.h>
#include <bitlink.h> /* required */


 /* Library API | Types
    typedef void     ( BS_SendRaw_t )         ( int, char *, int );     
 Library API | Function Pointers */


void bs_sendraw(int argc, char *argv, int argi) {
	
	BS_SendRaw(argc,argv,argi);
}

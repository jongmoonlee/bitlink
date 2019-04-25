
#include <stdio.h>
#include <bitlink.h> /* required */

 /* Library API | Types
    typedef void     ( BS_Send_t )            ( int, char *, int );         
 Library API | Function Pointers */


void bs_send(int argc, char *argv, int argi) {
	BS_Send(argc,argv,argi);
}

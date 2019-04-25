
#include <stdio.h>
#include <bitlink.h> /* required */

 /* Library API | Types
    typedef int      ( BS_OpenLink_t )        ( char * );
    Library API | Function Pointers */


int bs_openlink(char *argv) {
		
	return BS_OpenLink(argv);
}

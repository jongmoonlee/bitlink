
#include <stdio.h>
#include <bitlink.h> /* required */

 /* Library API | Types
    typedef char *   ( BS_Name_t )            ( int, char * );
    Library API | Function Pointers */


char bs_name(int argc, char *argv) {
			
	return BS_Name(argc, argv);
}


#include <stdio.h>
#include <bitlink.h> /* required */

 /* Library API | Types
    typedef char *   ( BS_Version_t )         ( int );
 Library API | Function Pointers */


char bs_version(int argc) {
		
	return BS_Version(argc);
}

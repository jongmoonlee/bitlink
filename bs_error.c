
#include <stdio.h>
#include <bitlink.h> /* required */

 /* Library API | Types
    
    typedef int      ( BS_Error_t )           ( int ); 
   
 Library API | Function Pointers */


int bs_error(int argc) {
	
	return BS_Error(argc);
}

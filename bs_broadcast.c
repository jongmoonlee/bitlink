
#include <stdio.h>
#include <bitlink.h> /* required */


 /* Library API | Types
    
    typedef void     ( BS_Broadcast_t )       ( char * );     
    
 Library API | Function Pointers */


void bs_broadcast(char *argv) {
	BS_Broadcast(argv);
}

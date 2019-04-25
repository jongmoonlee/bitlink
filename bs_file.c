
#include <stdio.h>
#include <bitlink.h> /* required */


 /* Library API | Types
    typedef bool     ( BS_File_t )            ( char * );    
 Library API | Function Pointers */


bool bs_file(char *argv) {
	
	return BS_File(argv);
}


#include <stdio.h>
#include <bitlink.h> /* required */

#define MY_DEVICES 0 /* change this if you have more than one */
#define MY_PROBE_FILE "" /* default probe file if unspecified */
#define MY_SIZE 200 /* number of samples to capture */

 /* Library API | Types
    
    typedef void     ( BS_Broadcast_t )       ( char * ); 
    typedef void     ( BS_Close_t )           ( void );
    typedef int      ( BS_Count_t )           ( int );
    typedef bool     ( BS_Demo_t )            ( int );
    typedef int      ( BS_Error_t )           ( int ); 
    typedef bool     ( BS_File_t )            ( char * ); 
    typedef char *   ( BS_ID_t )              ( int );
    typedef void     ( BS_Init_t )            ( void );
    typedef double   ( BS_Intro_t )           ( double ); 
    typedef char *   ( BS_Name_t )            ( int, char * );
    typedef int      ( BS_Open_t )            ( int );
    typedef int      ( BS_OpenLink_t )        ( char * );
    typedef bool     ( BS_Receive_t )         ( int, char *, int, int );
    typedef void     ( BS_Reset_t )           ( int );
    typedef void     ( BS_Send_t )            ( int, char *, int ); 
    typedef void     ( BS_SendRaw_t )         ( int, char *, int ); 
    typedef int      ( BS_Speed_t)            ( int );
    typedef void     ( BS_StartTimer_t )      ( int ); 
    typedef void     ( BS_StopTimer_t )       ( int );
    typedef char *   ( BS_Version_t )         ( int );
    
 Library API | Function Pointers */


int main(int argc, char *argv[]) {
	printf("\n");
	printf("test");
	printf("\n");
	BS_Init();
	BS_Open(MY_DEVICES);
	printf("\n");
	printf("Id=");
	printf("%s\n",BS_ID(MY_DEVICES));
	printf("\n");
	printf("Version=");
	printf("%s\n",BS_Version(MY_DEVICES));
	printf("\n");
	
	
	BS_Send(MY_DEVICES,"[21]@[02]s[37]@[01]s[38]@[00]s[2e]@[4a]sn[00]s[14]@[01]sn[00]s[36]@[af]s[64]@[f7]sn[68]s[66]@[9a]sn[f4]s",0);
	BS_Send(MY_DEVICES,"U",0);
	BS_Send(MY_DEVICES,">",0);
	BS_Send(MY_DEVICES,"T",0);

	int i, n = MY_SIZE; char d[n]; /* let's get 5 samples */
        BS_Receive(MY_DEVICES,d,MY_SIZE,0.1);
            printf("Acquired:");
			printf("\n");
            printf("Succes? %d\n",BS_Receive(MY_DEVICES,d,MY_SIZE,0.1));
            for (i = 0; i < n; i++)
                printf(" %d", d[i]);
            printf("\n\n");    

	BS_Send(MY_DEVICES,"K!.",0);
	BS_Send(MY_DEVICES,">",0);  	
	BS_Close();
		
	return 0;
}

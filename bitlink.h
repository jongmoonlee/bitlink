/* bitlink.h -- BitScope Communications Library Version 1.1 FG14BLNK
 *
 * Copyright (C) 2018 BitScope Designs http://bitscope.com
 *
 * You may use this library software for any purpose, or distribute it
 * or derivative works in any form subject to the terms of the BitScope
 * Library Software Licence V1.1.
 */
#ifndef _BITLINK_H
#define _BITLINK_H

#if !defined(__cplusplus) 
#ifndef _bool_
#define _bool_
typedef unsigned int bool;
#endif
#ifndef TRUE
#define TRUE 1
#endif
#ifndef FALSE
#define FALSE 0
#endif
#endif

#ifdef __cplusplus
extern "C" {
#endif

 /* Library API | Types */
    
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
    
 /* Library API | Function Pointers */
    
	BS_Broadcast_t     BS_Broadcast;
	BS_Close_t         BS_Close;
	BS_Count_t         BS_Count;
	BS_Demo_t          BS_Demo;
	BS_Error_t         BS_Error;
	BS_File_t          BS_File;
	BS_ID_t            BS_ID;
	BS_Init_t          BS_Init;
	BS_Intro_t         BS_Intro;
	BS_Name_t          BS_Name;
	BS_Open_t          BS_Open;
	BS_OpenLink_t      BS_OpenLink;
	BS_Receive_t       BS_Receive;
	BS_Reset_t         BS_Reset;
	BS_Send_t          BS_Send;
	BS_SendRaw_t       BS_SendRaw;
	BS_Speed_t         BS_Speed;
	BS_StartTimer_t    BS_StartTimer;
	BS_StopTimer_t     BS_StopTimer;
	BS_Version_t       BS_Version;
        
#ifdef __cplusplus
}
#endif

#endif /* _BITLINK_H */

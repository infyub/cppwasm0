#ifndef __TYPES_H
#define __TYPES_H
#include<stdio.h>


#include<string>
#include<iostream>
#include<cstring>
#include<cstdlib>

#define ZERO NULL
#define CHAR char 
#define INT int
#define CONST const 
#define FLT float 
#define DBLE double 
#define ANY void *
#define STRINGS std::string

#define CHAR_PTR char * 
#define _SIZE_OF(x) sizeof(x) 

typedef struct Type Type ;
struct Type {

    CHAR_PTR dt_ ;
    STRINGS usy ;



};

//stypedef enum MyTYPE MyTYPE ;
enum MyType {
     cv_char =1 ,
     cv_float = 2 ,
    cv_string = 3 ,

};

INT getSizer(CONST ANY t);

#endif 
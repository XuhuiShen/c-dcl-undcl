#ifndef __UTILITY_H__
#define __UTILITY_H__

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXTOKEN  100
#define BUFSIZE 100

enum { NAME, PARENS, BRACKETS };
void dcl(void);
void dirdcl(void);
int gettoken(void);
extern char datatype[MAXTOKEN]; /* data type = char, int, etc. */
extern char token[MAXTOKEN];
extern char out[1000];
extern char name[MAXTOKEN];
extern int tokentype;

#endif // __UTILITY_H__

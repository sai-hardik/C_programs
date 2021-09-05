#include<stdio.h>
#pragma pack(1)		// directive for the compiler to pack the structure
/*
#pragma pack(n)
where n is the alignment in bytes. 
Valid alignment values being 1, 2, 4 and 8. 
We will deal with only value 1

Used to force structures to match the spec-defined data layout. 

Pragma is implementation specific directive 
i.e each pragma directive has different implementation rule and use . 

There are many type of pragma directive and varies 
from one compiler to another compiler .

If compiler does not recognize particular pragma, 
then it simply ignores that pragma statement 
without showing any error or warning message 
and execute the whole program 
assuming this pragma statement is not present. 
*/
//Size of Structures
#include <stdio.h>
 
// Alignment requirements
// (typical 32 bit machine)
 
// char         1 byte
// short int    2 bytes
// int          4 bytes
// double       8 bytes
 
// structure A
struct A
{
   char        c;
   short int   s;
};//4B
struct A2
{
   char        c;
   short int   s;//2B
   char d;
};//6B
 
// structure B
struct B
{
   short int   s;
   char        c;
   int         i;
};//8B
 
// structure C
struct C
{
   char        c;
   double      d;
   int         s;
};//24B
 
// structure D
struct D
{
   double      d;
   int         s;
   char        c;
};//16B

int main()
{
   printf("sizeof(A) = %lu\n", sizeof(struct A));
   printf("sizeof(A2) = %lu\n", sizeof(struct A2));
   printf("sizeof(B) = %lu\n", sizeof(struct B));
   printf("sizeof(C) = %lu\n", sizeof(struct C));
   printf("sizeof(D) = %lu\n", sizeof(struct D));
 
   return 0;
}

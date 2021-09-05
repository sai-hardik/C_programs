#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char mypath[10000];
	//printf("%s\n", getenv("PATH"));
	char *path = getenv("PATH");
	/*
printf("Before setting path is %s\n",path);              // the entire PATH
          setenv("PATH", ".", 1);
          printf("Before setting path is %s\n",path);             // new path, that is .
	*/
	/*
	// But we should never change the environment variables this way. 
	We need to concatenate the current directory path with existing PATH.
	path = getenv("PATH");
	printf("Before setting path is %s\n",path);              
	strcpy(mypath, path);
	strcat(mypath, ":.");	     // concatenating current directory to mypath
// all paths are separated with : in ubuntu
					// all paths are separated with ; in windows
	setenv("PATH", mypath, 1); // setting mypath to new mypath  
// last argument can be any non-zero value to overwrite
	path = getenv("PATH");
	printf("After setting path is %s\n",path); // the entire pvalue of PATH with ;. At the end
	*/
	/*
// Can we create new environment variable?
	setenv("HOME","Neeta",1);	  // HOME=Neeta
	path = getenv("HOME");
	printf("after setting %s",path);
	*/
	printf("execution is over");
	return 0;
}

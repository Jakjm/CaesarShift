#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "caesarShift.h"

/*Main method.*/
int main(int argc, char **argv){
	if(argc <= 1){
		fputs("Please provide a string to caesar shift.\n",stdout);
	}
	else{
		char *str = argv[1];
		/*Perform a caesarshift of the argument.*/
		int let;
		
		/*Go through each caesar shift variation of the string.*/
		printf("%s\n",str);
		for(int let = 1; let < 26;++let){
			/*Caesar shift the string by one character and print it.*/
			caesarShift(str,1);
			printf("%s\n",str);
		}
		return 0;
	}
}

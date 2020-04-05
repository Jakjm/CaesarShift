/*Peforms a caesarshift of an inputted string argument*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "caesarShift.h"

/*Caesar shifts the string by a given amount.
* 'str' is a valid string terminated by a null character, 
* and each character of the string is changed by this method (provided amount is nonzero)
* 'amount' must be within [0,25]
*/
void caesarShift(char *str,int amount){
	char *s = str;
	int c;
	while(*s != '\0'){
		c = *s;
		
		/*If the character is an upper case letter.*/
		if(c >= 'A' && c <= 'Z'){
			c = (c + amount);
			if(c > 'Z'){
				c -= 26; /*Wrap to a letter at the other end of the upper case alphabet*/
			}
			*s = c;
		}
		/*Otherwise, if the character is a lower case letter.*/
		else if(c >= 'a' && c <= 'z'){
			c = (c + amount);
			if(c > 'z'){
				c -= 26; /*Wrap to a letter at the other end of the lower case alphabet.*/
			}
			*s = c;
		}
		/*Go to the next character.*/
		++s;
	}
}

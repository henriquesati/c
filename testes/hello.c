#include <stdio.h>

int main (void){
   
    int *pointNumber; //creates a pointer//
    int number = 4;		// creates a variable
    pointNumber = &number;	//assigns the adress to the pointer
  
    char *pointerChar;	//creates a pointer
    pointerChar = "H";	//assigns the string literal adress to the pointer
  
  	printf("%i\n", *pointNumber); //uses deference operator to print the value in that adress
   	printf("%c\n", *pointerChar); //uses deference to do the same
}
;       
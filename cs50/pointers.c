
#include <stdio.h>

int main (void) {
    int n = 50; 
    int *p = &n; //pointers stores the adress of some value  (& indicates adress of a variable)
    int **p2 = &p;
    int ***p3 = &p2;
    printf("%p\n", p);  
    printf("%i\n", p2);    
    printf("%i\n", p3);
    printf("%i\n", *p);  
    printf("%i\n", **p2); 
    printf("%i\n", ***p3);
    // printf("%i\n", n);
    // printf("%i\n", *p); //it is possible to use the deference operator to go to that adress and
                        //catch the value
}

//deference operator are only usable with pointers

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
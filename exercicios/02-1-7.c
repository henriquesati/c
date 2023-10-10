#include <stdlib.h>
#include <stdio.h>

struct Dados{
    float x;
    char c;
};


int main(){
    struct Dados array[] = {{4.2, 'q'}, {9.4, 'r'}, {5.1, 'g'}};

    for (int i=0; i < 3; i++){
        printf("%f, %c\n", array[i].x, array[i].c);
    }

}
#include <stdio.h>
#include <stdlib.h>


    int user_acess(int size, int input){
        if(input >=0 && input > size-1) return 0;
        return 1;
    }

int main(){
    int array_size = 10;
    int array[array_size];
    int input, memory_check;

    scanf("%d", &input);
    memory_check = user_acess(array_size, input);

    if (memory_check == 1) printf("acess oK");
    else printf("acess to array denied! seg fault");
}   
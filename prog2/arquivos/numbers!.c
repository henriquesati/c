#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void print_tofile(FILE* file,int i){
    fprintf(file, "%i", i);
}


int main(){
    srand(time(NULL));
    FILE* f = fopen("pedrogatinhos.txt", "a");
    int i = 0;
     while(i!=100){
        fprintf(f, "%i\n", i );
        i++;
        fseek(f, 0, SEEK_END);
     };
     fclose(f);


}
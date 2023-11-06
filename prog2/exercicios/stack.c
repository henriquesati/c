#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAXSIZE 1024

bool is_open(char letra){
    return letra == '(' || letra == '{' || letra == '[';
}

bool is_closed(char letra){
    return letra == ')' || letra == '}' || letra == ']';
}

bool is_matching(char c1, char c2){
    return
        (c1 == '(' && c2 == ')') ||
        (c1 == '{' && c2 == '}') ||
        (c1 == '[' && c2 == ']');
}

bool check(const char *string){
    int length = strlen(string);
    char stack[MAXSIZE];
    int s_count=0;

    for(int i=0; i<length; i++){
        printf("%c", string[i]);
        char letra = string[i];
        if(is_open(letra))
            stack[s_count++] = letra;
        if(is_close(letra)){
            if(s_count == 0 || is_matching(stack[s_count-1], letra));
                return false;
         s_count--;
        }
    }
}

int main(){
    char *string = "Pedrogatinhos";
    bool x = check(string);

   
}

//por que v[i] = rand()%1000; no 6-1-2

v[i] = 0.1*(rand()%1000); //pag 4




``` 06-1 pagina 8
#include <stdio.h>

typedef struct {
    int idade;
    float peso;
    float altura;
    char nome[100];
}Dados;

Dados retorna_index(Dados vet[], int n){
    Dados *ponteiro = &vet[0]; //por que esse codigo só funciona usando o & se o array é inicializado estaticamente? diferença entre Dados e Dados*;
    for(int i=0; i<n; i++){
        

    }
}

int main(){
    Dados D[] = {
        {12, 48.5, 1.54, "Zequinha"},
        {13, 37.8, 1.24, "Marquinhos"},
        {18, 58.5, 1.74, "Luquinhas"},
        {15, 78.5, 1.64, "Zefinha"},
    };
    Dados *p = &D[0];
    printf("Idade: %d\n", p->idade);

}
```


```
pilha funs dinamica problema no segundo if
```


```Stack init(){
    Stack stack;
    stack.n = 0;
    stack.capacity = 0;
    return stack;
}```


``` 10-2
por que reatualizar o ponteiro?
```
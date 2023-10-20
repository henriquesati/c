#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[30];
    int serie;
    char turma;
    float nota;
}Aluno;

typedef struct{
    int espaço;
    int n_itens;
    Aluno *array;
}Vetor;

Vetor init_aluno(){
    Vetor vetor;
    vetor.array = malloc(sizeof(Aluno));
    vetor.espaço = 1;
    vetor.n_itens =0;
    return vetor;
}



void add_aluno(Vetor *vetor, Aluno input){

    if (vetor->espaço != vetor->n_itens){
        strcpy( vetor->array[0].nome, input.nome);
        vetor->array[0].nota = input.nota;
        vetor->array[0].turma = input.turma;
        vetor->array[0].serie = input.serie;
        vetor->n_itens +=1;
    }else{
        vetor->espaço +=1;
        vetor->n_itens +=1;
        vetor->array = realloc(vetor->array, sizeof(Aluno) + vetor->n_itens);
        vetor->array[vetor->n_itens-1].nota = input.nota;
        vetor->array[vetor->n_itens-1].turma = input.turma;
        vetor->array[vetor->n_itens-1].serie = input.serie;
        strcpy(vetor->array[vetor->n_itens-1].nome, input.nome);
    }

}
    void imprime_alunos(Vetor vetor) {
    printf("Lista de Alunos:\n");
    for (int i = 0; i < vetor.n_itens; i++) {
        printf("Nome: %s\n", vetor.array[i].nome);
        printf("Série: %d\n", vetor.array[i].serie);
        printf("Turma: %c\n", vetor.array[i].turma);
        printf("Nota: %.2f\n", vetor.array[i].nota);
        printf("-------------------------\n");
    }
}


int main(){
    Vetor alunos = init_aluno();

    Aluno x;
    while(scanf("%[^:]: %d %c %f", x.nome, &x.serie, &x.turma, &x.nota) == 4){
        add_aluno(&alunos, x);
    }
    printf("outscam");
    imprime_alunos(alunos);


}
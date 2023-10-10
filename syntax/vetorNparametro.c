void imprime_vetor(int N, int v[N]) {
    
}

int main() {
    int tamanho = 10;
    int *vetor = malloc(tamanho * sizeof(int));
    imprime_vetor(tamanho, vetor);
    free(vetor);
    return 0;
}
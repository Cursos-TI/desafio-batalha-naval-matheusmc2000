int main() {
    int tabuleiro[10][10];   // tabuleiro 10x10
    int i, j;
    int navio = 3;           // valor que representa o navio
    int agua = 0;            // valor que representa a água
    int tamanho_navio = 3;   // cada navio ocupa 3 posições

    // 1. Inicializa o tabuleiro com água (0)
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = agua;
        }
    }

    // 2. Coordenadas iniciais (definidas no código)
    int linhaH = 2, colunaH = 4; // navio horizontal
    int linhaV = 5, colunaV = 7; // navio vertical

    // 3. Posiciona o navio horizontal
    for (i = 0; i < tamanho_navio; i++) {
        tabuleiro[linhaH][colunaH + i] = navio;
    }

    // 4. Posiciona o navio vertical
    for (i = 0; i < tamanho_navio; i++) {
        tabuleiro[linhaV + i][colunaV] = navio;
    }

    // 5. Exibe o tabuleiro
    printf("\n=== TABULEIRO BATALHA NAVAL ===\n\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("\nLegenda: 0 = água | 3 = navio\n");

    return 0;
}

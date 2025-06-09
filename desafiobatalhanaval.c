#include <stdio.h>

#define TAM_TABULEIRO 10
#define TAM_HABILIDADE 5

// Função para inicializar o tabuleiro com 0 e alguns navios fixos (valor 3)
void inicializarTabuleiro(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO]) {
    for (int i = 0; i < TAM_TABULEIRO; i++) {
        for (int j = 0; j < TAM_TABULEIRO; j++) {
            tabuleiro[i][j] = 0;
        }
    }
    // Adicionando navios em posições fixas
    tabuleiro[2][2] = 3;
    tabuleiro[2][3] = 3;
    tabuleiro[2][4] = 3;
    tabuleiro[5][5] = 3;
    tabuleiro[6][5] = 3;
}

// Função para exibir o tabuleiro com legendas visuais
void exibirTabuleiro(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO]) {
    for (int i = 0; i < TAM_TABULEIRO; i++) {
        for (int j = 0; j < TAM_TABULEIRO; j++) {
            if (tabuleiro[i][j] == 0)
                printf("~ "); // Água
            else if (tabuleiro[i][j] == 3)
                printf("N "); // Navio
            else if (tabuleiro[i][j] == 5)
                printf("* "); // Área de habilidade
        }
        printf("\n");
    }
    printf("\n");
}

// Função para construir matriz de cone (expande para baixo)
void construirCone(int matriz[TAM_HABILIDADE][TAM_HABILIDADE]) {
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            // Cone cresce para baixo: linha maior -> mais colunas afetadas
            int meio = TAM_HABILIDADE / 2;
            if (j >= meio - i && j <= meio + i)
                matriz[i][j] = 1;
            else
                matriz[i][j] = 0;
        }
    }
}

// Função para construir matriz de cruz
void construirCruz(int matriz[TAM_HABILIDADE][TAM_HABILIDADE]) {
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            if (i == TAM_HABILIDADE / 2 || j == TAM_HABILIDADE / 2)
                matriz[i][j] = 1;
            else
                matriz[i][j] = 0;
        }
    }
}

// Função para construir matriz de octaedro (losango)
void construirOctaedro(int matriz[TAM_HABILIDADE][TAM_HABILIDADE]) {
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            int meio = TAM_HABILIDADE / 2;
            if (abs(i - meio) + abs(j - meio) <= meio)
                matriz[i][j] = 1;
            else
                matriz[i][j] = 0;
        }
    }
}

// Função para aplicar matriz de habilidade no tabuleiro
void aplicarHabilidade(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int matriz[TAM_HABILIDADE][TAM_HABILIDADE], int origemLinha, int origemColuna) {
    int offset = TAM_HABILIDADE / 2;

    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            int linhaTab = origemLinha - offset + i;
            int colTab = origemColuna - offset + j;

            // Verifica se está dentro dos limites do tabuleiro
            if (linhaTab >= 0 && linhaTab < TAM_TABULEIRO && colTab >= 0 && colTab < TAM_TABULEIRO) {
                if (matriz[i][j] == 1) {
                    // Aplica valor da habilidade sem sobrescrever navios
                    if (tabuleiro[linhaTab][colTab] == 0)
                        tabuleiro[linhaTab][colTab] = 5;
                }
            }
        }
    }
}

// ---------------------
// Função principal
// ---------------------
int main() {
    int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO];
    inicializarTabuleiro(tabuleiro);

    // Matrizes das habilidades
    int cone[TAM_HABILIDADE][TAM_HABILIDADE];
    int cruz[TAM_HABILIDADE][TAM_HABILIDADE];
    int octaedro[TAM_HABILIDADE][TAM_HABILIDADE];

    // Criar as matrizes
    construirCone(cone);
    construirCruz(cruz);
    construirOctaedro(octaedro);

    // Aplicar habilidades em posições fixas
    aplicarHabilidade(tabuleiro, cone, 2, 2);      // Cone no topo esquerdo
    aplicarHabilidade(tabuleiro, cruz, 5, 5);      // Cruz no centro
    aplicarHabilidade(tabuleiro, octaedro, 7, 7);  // Octaedro no canto inferior direito

    // Exibir tabuleiro com áreas de habilidades
    printf("=== Tabuleiro com Áreas de Habilidade ===\n");
    exibirTabuleiro(tabuleiro);

    return 0;
}

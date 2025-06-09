#include <stdio.h>

// Número de casas para movimento
const int casasTorre = 3;
const int casasBispo = 3;
const int casasRainha = 2;
const int maxMovimentosCavalo = 3;

// ----------------------------
// Funções Recursivas
// ----------------------------

// Torre: Movimentos verticais e horizontais
void moverTorreCima(int n) {
    if (n == 0) return;
    printf("Cima\n");
    moverTorreCima(n - 1);
}

void moverTorreBaixo(int n) {
    if (n == 0) return;
    printf("Baixo\n");
    moverTorreBaixo(n - 1);
}

void moverTorreEsquerda(int n) {
    if (n == 0) return;
    printf("Esquerda\n");
    moverTorreEsquerda(n - 1);
}

void moverTorreDireita(int n) {
    if (n == 0) return;
    printf("Direita\n");
    moverTorreDireita(n - 1);
}

// Bispo com recursividade: movimentos diagonais
void moverBispoDiagonalDireitaCima(int n) {
    if (n == 0) return;
    printf("Diagonal Direita-Cima\n");
    moverBispoDiagonalDireitaCima(n - 1);
}

void moverBispoDiagonalEsquerdaBaixo(int n) {
    if (n == 0) return;
    printf("Diagonal Esquerda-Baixo\n");
    moverBispoDiagonalEsquerdaBaixo(n - 1);
}

// Rainha: combinação dos movimentos da torre e bispo
void moverRainha(int n) {
    if (n == 0) return;
    printf("Cima\n");
    printf("Diagonal Direita-Cima\n");
    moverRainha(n - 1);
}

// ----------------------------
// Funções com Loops
// ----------------------------

// Cavalo: movimento em L (duas casas para cima e uma para direita)
void moverCavalo() {
    printf("\nMovimentos do Cavalo:\n");
    for (int i = 0; i < maxMovimentosCavalo; i++) {
        for (int j = 0; j < maxMovimentosCavalo; j++) {
            if (i == j) continue;
            if (i + j > maxMovimentosCavalo) break;
            printf("Cavalo move: 2 Cima, 1 Direita\n");
        }
    }
}

// Bispo com loops aninhados (extra: além da versão recursiva)
void moverBispoLoops() {
    printf("\nMovimentos do Bispo (com loops aninhados):\n");
    for (int v = 0; v < casasBispo; v++) {
        for (int h = 0; h < casasBispo; h++) {
            if (v == h) {
                printf("Diagonal Direita-Cima\n");
            }
        }
    }
}

// ----------------------------
// Função principal
// ----------------------------
int main() {
    // Torre
    printf("Movimentos da Torre:\n");
    moverTorreCima(casasTorre);
    moverTorreBaixo(casasTorre);
    moverTorreEsquerda(casasTorre);
    moverTorreDireita(casasTorre);

    printf("\n");

    // Bispo (recursivo)
    printf("Movimentos do Bispo (com recursividade):\n");
    moverBispoDiagonalDireitaCima(casasBispo);
    moverBispoDiagonalEsquerdaBaixo(casasBispo);

    moverBispoLoops(); // Loops aninhados

    // Rainha
    printf("\nMovimentos da Rainha:\n");
    moverRainha(casasRainha);

    // Cavalo
    moverCavalo();

    return 0;
}

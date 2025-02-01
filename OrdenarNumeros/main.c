#include <stdio.h>

struct edad {
    int valor;
};

int main() {
    struct edad edades[5];
    printf("Ingrese sus numeros:");
    for (int i=0;i<5;i++) scanf("%d", &edades[i].valor);

    ordenar(5, edades);

    for (int i=0;i<5;i++) printf("%d,", edades[i].valor);
    return 0;
}

void ordenar(int n, struct edad e[]) {

    for (int i=0;i<n-1;i++)
        for (int j = i + 1; j < n; j++)
            if (e[i].valor > e[j].valor) {
                int temp = e[i].valor;
                e[i].valor = e[j].valor;
                e[j].valor = temp;
            }
}

#include <stdio.h>

long long puissance_lineaire_iterative(long long a, int n){
    long long resultat = 1;
    int i = 0;

    while(i < n){
        resultat = resultat * a;
        i++;
    }
    return resultat;
}

int main(){
    long long res = puissance_lineaire_iterative(2, 3);

    printf("Résultat: %lld\n", res);

    return 0;
}
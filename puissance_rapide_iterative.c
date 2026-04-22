#include <stdio.h>

long long puissance_rapide_iterative(long long a, int n){
    long long result = 1;

    while(n > 0){
        if(n % 2 == 1){
            result = result * a;
        }

        a = a * a;
        n = n / 2;
    }

    return result;
}

int main(){
    printf("%lld\n", puissance_rapide_iterative(2, 10));
    return 0;
}
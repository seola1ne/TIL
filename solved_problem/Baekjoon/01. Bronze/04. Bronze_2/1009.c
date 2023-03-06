#include <stdio.h>

void cal() {

    int t;
    scanf("%d", &t);

    
    while(t--) {
        long a, b;
        scanf("%ld %ld", &a, &b);

        long result = a;

        for(long i=2; i<=b; ++i) 
            result = (result * a) % 10;

        if(result == 0)
            result = 10;

        printf("%ld\n", result);
    }
}

int main() {
    cal();
    return 0;
}
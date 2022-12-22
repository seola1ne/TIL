#include <stdio.h>
#include <stdlib.h>

long long int n;

int f(long long int k) // f(1234)
{
    if(k == 0) return 0;
    return k%10 + f(k/10); // f(1234) -> 4 + f(123) -> 3 + f(12) -> 2 + f(1) -> 1 + f(0)
}

int main()
{
    scanf("%lld", &n);
    printf("%d\n", f(n));
    return 0;
}

#include <stdio.h>

/*
  n = 0 1 2 3 4 ...
  f(n) = 1 2 4 7 11 ...

f(5) = f(4) + 5
f(4) = f(3) + 4
f(3) = f(2) + 3

 점화식 : f(n) = f(n-1) + n
*/

int i, n, DT[10000001] = {1, 2, 4, 7, 11, };
// DT -> 1 2 4 7 11 ...

int main()
{
    scanf("%d", &n);
    for(i = 4; i <= n; i++){
        DT[i] = (DT[i-1] + i) % 137;
        // DT[4] = DT[3] + 4  . . .
    }
    printf("%d", DT[n]);
	return 0;
}

/*
#include <stdio.h>
#define MAX_SIZE 10000001
#define MOD 137

int i, n, DT[MAX_SIZE] = {1, 2, };

int main()
{
    scanf("%d", &n);
    for(i=2; i<=n; i++){
        DT[i] = (DT[i-1] + i) % MOD;
    }
    printf("%d", DT[n]);
	return 0;
}
*/
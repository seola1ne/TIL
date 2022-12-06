#include <stdio.h>

int arr[15][15];

int main()
{
    int n, r, i, j;
    scanf("%d %d", &n, &r);
    for(i=0; i<=n; i++){
        for(j=0; j<=r; j++){
            if(i == 0) arr[i][j] = 0;
            else if(i == j || j == 0) arr[i][j] = 1;
            else arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
        }
    }
    printf("%d", arr[n][r]);
	return 0;
}
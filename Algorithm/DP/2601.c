#include <stdio.h>

int i, n, DT[44] = {0, 1, 1,};

int main()
{
    scanf("%d", &n);
    for(i = 3; i <= n; i++){
        DT[i] = DT[i-1] + DT[i-2]; // 1차원 다이나믹프로그래밍
    }
    // 메모이제이션도 동적계획법(다이나믹프로그래밍)에 포함됨
    printf("%d", DT[n]);
	return 0;
}

// 상향식 재귀 함수
#include <stdio.h>
#include <stdlib.h>

int n;

void f(int k) 
{
    if(k==n) return;
    f(k+1);
    printf("*");
}

int main()
{
    scanf("%d", &n);
    f(0);
    printf("\n");
	return 0;
}
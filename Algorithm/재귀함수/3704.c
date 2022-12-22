#include <stdio.h>

int arr[100001] = {0, 1, 2, 4, 7}; // n이 증가할 때마다 영일이의 다리로 계단을 오를 수 있는 경우의 수

int f(int k){
    if(arr[k]) return arr[k];
    return arr[k] = (f(k-1)+f(k-2)+f(k-3)) % 1000;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", f(n));
	return 0;
}
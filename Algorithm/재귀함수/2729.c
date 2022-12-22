// 정답 코드 아님!!!

#include <stdio.h>

int arr[100001] = {0, 1, 2, 4, 7}; // n이 증가할 때마다 영일이의 다리로 계단을 오를 수 있는 경우의 수

int f(int k, int flag){
  if(flag == 1){ // 계단을 세 칸 올랐다면 flag = 1
    if(arr[k]) return arr[k]; 
    return arr[k] = (f(k-1, 0) + f(k-2, 0)) % 1000007;
  }
  if(arr[k]) return arr[k];
  return arr[k] = (f(k-1, 0)+f(k-2, 0)+f(k-3, 1)) % 1000007;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", f(n, 0));
	return 0;
}
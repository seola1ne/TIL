#include <stdio.h>

long long int f(int k){
    if(k <= 2) return 1;
    return f(k-1) + f(k-2);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%lld", f(n));   
    return 0;
}

// 해당 프로그램의 재귀함수의 단점
// 동일한 계산을 반복하기 때문에 때문에 효율성이 떨어진다.

// 이를 해결하기 위한 방법
// 1. memoization(재귀) : 이전에 계산한 값을 메모리(배열)에 저장한다.
// 2. Dynamic programming(반복문)


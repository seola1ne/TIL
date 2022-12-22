#include <stdio.h>

int memo[201] = {0, 1, 1, 2, 3, };
// 전역 변수로 선언했기 때문에 n 이상 인덱스의 값은 0! Null이 XX
long long int f(int k){
    if(memo[k]) return memo[k]; // 계산한 값 memo[k]가 있으면 memo[k] return
    return memo[k] = f(k - 1) + f(k - 2);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%lld", f(n)%10009);   
    return 0;
}

//                              f(7)
//     memo[7]의 값 return=f(6)  +   f(5)
//   memo[6]의 값 return=f(5)    +    f(4)  
// memo[5]의 값 return=f(4)      +      f(3)
// : re 3
// 최대 장점 : 반복되는 계산이 Xx

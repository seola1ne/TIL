#include <stdio.h>
#include <stdlib.h>

char str[30];
int n;

int f(int k){ // call by value, 값이 전달된다 // ink k는 인자, argument, 파라미터
    if(k == n) return 0;
    return f(k+1)+(str[k]-'0');
    // f(0), k = 0, f(1) 호출
    // -> f(1), k = 1, f(2) 호출
    // -> f(2), k = 2, f(3) 호출
    // -> f(3), k = 3, f(4) 호출
    // -> f(4), k = 4, f(5) 호출
    // -> f(5), k = 5, k == n 이므로 return 0; 호출한 곳으로 되돌아감
}
int main(){
    scanf("%s", str);
    n = strlen(str);
    printf("%d\n", f(0));
    return 0;
}

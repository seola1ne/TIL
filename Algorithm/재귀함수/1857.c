// 3C2 => 2C1 + 2C2;
// 3개 중에 두 개를 선택하는 경우 = 두 개 중 하나를 선택하는 경우(= 첫 번째 선택된 경우) + 두 개 중 두 개 모두 선택하는 경우(= 첫 번째 선택 안 된 경우)
// 첫 번째 선택된 경우 => + 나머지 두 개 중 하나를 선택하는 경우임
// 첫 번째 선택 안 된 경우 => 나머지 두 개 중 두 개를 선택하는 경우


// 3C4 => X
// 점화식 : f(n, r) = f(n-1, r-1) + f(n-1, r)
// 탈출 조건 
// 3C1 => 3개
// r이 1이면 n개가 선택된다
// 3C0 => 1개, 2C0 => 1개, nC0 => 1개 (r == 0) return 0;
// 3C3 => 1개, 2C2 => 1개, nCn => 1개 (n == r) return 1;
// n < r이면 0개

#include <stdio.h>

int f(int n, int r){
    if(n < r) return 0;
    // 3개 중에서 4개 이상을 선택하는 경우
    else if(n == r || r == 0) return 1; 
    // 3개 중에서 3개를 선택하거나, 3개 중 0개를 선택하는 경우
    else if(r == 1) return n;
    // 3개 중에서 1개를 선택하는 경우
    return f(n-1, r) + f(n-1, r-1); 
}

int main(){
    int n, r;
    scanf("%d %d", &n, &r);
    printf("%d", f(n, r));
}


// int f(int n, int r){
//     if(n == r) return 1;
//     else (r == 1) return n;
//     else return f(n-1, r-1) + f(n-1, r);
// }
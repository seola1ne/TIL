#include <stdio.h>

int n, v, cnt=0;

int find_V(int v, int a[]) {
    for(int i=0; i<n; i++) {
        if(a[i] == v) cnt++;
    }
    return cnt;
}

void input_arr(int n, int a[]) {
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
}

int main() {
    int a[105];

    scanf("%d", &n); // 정수의 개수 입력받기   
    input_arr(n, a); // n만큼 배열에 정수 입력받기
    scanf("%d", &v); // 찾을 정수 입력받기

    printf("%d", find_V(v, a));
    return 0;
}
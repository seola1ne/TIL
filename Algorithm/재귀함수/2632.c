#include <stdio.h>

int f(int k){
    if(k<=2) return k;
    return f(k-1)+f(k-2);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", f(n));
}

// 시험 문제에 나올 수도 !!!!!


#include <stdio.h>

int arr[20] = {0, 1, 2, 3};

int f(int k){
    if(arr[k]) return arr[k];
    arr[k] = f(k-1)+f(k-2);
    return arr[k];
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", f(n));
	return 0;
}
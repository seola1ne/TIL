#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char str[30];

int f(int k) // f(1234)
{
    if(k < 0) return 0; // f(-1) 이라면 return 0
    return f(k-1)+(str[k]-'0'); // f(1234)+
}

int main()
{
    int n;
    scanf("%s", str);
    n = strlen(str); // 문자열의 길이
    printf("%d\n", f(n-1));
    return 0;
}

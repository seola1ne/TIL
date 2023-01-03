#include <stdio.h>

int n, r, nPr=1;

void get_nPr(int n, int r) {
    for(int i=0; i!=r; i++)
        nPr *= (n-i);
    printf("%d\n", nPr);
}

void get_alpha(int n, int r) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i+65 != j+65)
            printf("%C%C\n", i+65, j+65);
        }
    }
}

int main()
{
    scanf("%d %d", &n, &r);
    get_nPr(n, r);
    get_alpha(n, r);
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int findColor();

int main() {
    int i, j, value;
    long long int res = 0;

    for(i = 0; i < 3; i++) {
        value = findColor();
        if(i == 0) 
            res += value * 10;
        else if(i == 1)
            res += value;
        else if(i == 2) {
            for(j = 0; j < value; j++) {
                res *= 10;
            }
        }
    }

    printf("%lld", res);

    return 0;
}

int findColor() {
    char input[10];

    scanf("%s", input);

    if(strcmp(input, "black") == 0) return 0;
    else if(strcmp(input, "brown") == 0) return 1;
    else if(strcmp(input, "red") == 0) return 2;
    else if(strcmp(input, "orange") == 0) return 3;
    else if(strcmp(input, "yellow") == 0) return 4;
    else if(strcmp(input, "green") == 0) return 5;
    else if(strcmp(input, "blue") == 0) return 6;
    else if(strcmp(input, "violet") == 0) return 7;
    else if(strcmp(input, "grey") == 0) return 8;
    else if(strcmp(input, "white") == 0) return 9;
}
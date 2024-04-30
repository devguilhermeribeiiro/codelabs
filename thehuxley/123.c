#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a == c && b == c)
    {
        printf("1");
    } else if (a == b && b != c)
    {
        printf("3");
    } else {
        printf("2");
    }
	return 0;
}
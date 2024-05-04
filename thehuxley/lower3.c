#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int a, b, c;
	scanf("%d\n%d\n%d", &a ,&b, &c);
	
	int lower = a;
	
	if(b < a){
	    lower = b;
	}else if (c < b) {
	    lower = c;
	  
	}
	
	printf("%d", lower);
	
	return 0;
}
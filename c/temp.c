#include <stdio.h>

int main() {
    float f, c;
    
    printf("Type a value in Fahreinheit: ");
    scanf("%f", &f);

    c = (f - 32) * 5 / 9;

    printf("%.2f f = %.2f c", f, c); 
   
	return 0;
}

#include <stdio.h>

int main() {
    int num1, num2, num3;
    
    printf("Digite três números: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    if (num1 == num2 && num2 == num3) {
        printf("Os números são todos iguais.\n");
    } else {
        int max = num1;
        
        if (num2 > max) {
            max = num2;
        }
        if (num3 > max) {
            max = num3;
        }
        
        printf("O maior número é: %d\n", max);
    }
    
    return 0;
}

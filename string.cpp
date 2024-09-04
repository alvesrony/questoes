#include <stdio.h>

int main() {
    char str[100];
    int count_lower = 0;
    int count_upper = 0;
    
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a') {
            count_lower++;
        }
        else if (str[i] == 'A') {
            count_upper++;
        }
    }
    
    int total_count = count_lower + count_upper;
    
    if (total_count > 0) {
        printf("A letra 'a' minuscula aparece %d vezes na string.\n", count_lower);
        printf("A letra 'A' maiuscula aparece %d vezes na string.\n", count_upper);
        printf("No total, a letra 'a' aparece %d vezes na string.\n", total_count);
    } else {
        printf("A letra 'a' nao aparece na string.\n");
    }
    
    return 0;
}


#include <stdio.h>
#include <string.h>

int main() {
    char inputString[100];   
    char reverseString[100]; 
    printf("Nhap mot chuoi: ");
    fgets(inputString, sizeof(inputString), stdin);

    int length = strlen(inputString) - 1;
    char *ptrInput = inputString + length - 1; 
    char *ptrReverse = reverseString;       

    while (ptrInput >= inputString) {
        *ptrReverse = *ptrInput; 
        ptrInput--;
        ptrReverse++;
    }
    *ptrReverse = '\0'; 
    printf("Chuoi dao nguoc: %s\n", reverseString);
    return 0;
}

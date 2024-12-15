#include <stdio.h>
void doiCho(int *so1, int *so2){
    int temp = *so1;
    *so1 = *so2;
    *so2 = temp;
}
int main(){
    int so1 = 10; int so2 = 20;
    doiCho(&so1, &so2);
    printf("so1 = %d\n", so1);
    printf("so2 = %d", so2);
    return 0;
}

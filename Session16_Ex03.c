#include <stdio.h>

void tinhtong(int so1, int so2, int *ketQua){
    *ketQua = so1 + so2;
}

int main(){
    int so1 = 10, so2 = 20;
    int ketQua;
    tinhtong(so1, so2, &ketQua);
    printf("ket qua tong 2 so la: %d", ketQua);
    return 0;
}
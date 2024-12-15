#include <stdio.h>

int main(){ 
    int so = 10;
    int *ptr = &so;
    printf("dia chi cua so la: %lu\n", (unsigned long)&so);
    printf("dia chi cua so la: %lu\n", ptr);
    printf("gia tri cua so la: %d\n", so);
    printf("gia tri cua so la: %d\n", *ptr);
    return 0;
}
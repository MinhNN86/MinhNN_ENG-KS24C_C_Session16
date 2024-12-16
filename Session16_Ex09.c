#include <stdio.h>

void themPhanTu(int *mang, int *phanTuMang, int gtriMoi, int vtriThem) {
    for (int i = *phanTuMang; i > vtriThem; i--) {
        *(mang + i) = *(mang + i - 1);
    }
    *(mang + vtriThem) = gtriMoi;
    (*phanTuMang)++; 
}

int main() {
    int mang[10] = {1, 2, 3, 4, 5}; 
    int phanTuMang = 5;            
    int vtriThem, gtriMoi;
    printf("Nhap vi tri muon them: ");
    scanf("%d", &vtriThem);
    if (vtriThem < 0 || vtriThem > phanTuMang) {
        printf("Vi tri khong hop le\n");
        return 1;
    }
    printf("Nhap gia tri muon them: ");
    scanf("%d", &gtriMoi);
    themPhanTu(mang, &phanTuMang, gtriMoi, vtriThem);
    printf("Mang moi la: ");
    for (int i = 0; i < phanTuMang; i++) {
        printf("%d ", *(mang + i));
    }
    printf("\n");

    return 0;
}

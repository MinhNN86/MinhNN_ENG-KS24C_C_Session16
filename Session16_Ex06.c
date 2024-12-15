#include <stdio.h>
void timKiemPhanTu(int *mang, int phanTuTimKiem){
    int check = 0;
    printf("vi tri phan tu %d trong mang la: ", phanTuTimKiem);
    for(int i = 0; i < 5; i++){
        if(*(mang + i) == phanTuTimKiem){
            printf("%d", i);
            check = 1;
        }
    }
    if(check == 0){
        printf("\nphan tu %d khong co trong mang", phanTuTimKiem);
    }
}
int main(){
    int mang[]= {1,2,3,4,5};
    int phanTuTimKiem;
    printf("nhap phan tu can tim kiem: ");
    scanf("%d", &phanTuTimKiem);
    timKiemPhanTu(mang, phanTuTimKiem);
    return 0;
}
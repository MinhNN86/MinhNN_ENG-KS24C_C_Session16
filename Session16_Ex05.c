#include <stdio.h>
void suaMang(int *mang, int gtriMoi, int viTriCapNhat){
    if(viTriCapNhat < 0 || viTriCapNhat >= 5){
        printf("vi tri cap nhat khong hop le");
        return;
    }
    mang[viTriCapNhat] = gtriMoi;
}

void inMang(int *mang, int soPhanTu){
    for(int i = 0; i < soPhanTu; i++){
        printf("mang[%d]= %d\n", i, *(mang + i));
    }
}
int main(){
    int mang[]= {1,2,3,4,5};
    int viTriCapNhat;
    int gtriMoi;
    printf("nhap vi tri can doi gia tri: ");
    scanf("%d", &viTriCapNhat);
    if(viTriCapNhat < 0 || viTriCapNhat >= 5){
        printf("vi tri cap nhat khong hop le");
        return 1;
    }
    printf("gia tri can cap nhat: ");
    scanf("%d", &gtriMoi);
    suaMang(mang, gtriMoi, viTriCapNhat);
    inMang(mang, 5);
    return 0;
}
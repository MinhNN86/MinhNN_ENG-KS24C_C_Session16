#include <stdio.h>
void inMang(int *mang, int soPhanTu){
    for(int i = 0; i < soPhanTu; i++){
        printf("mang[%d]= %d\n", i, *(mang + i));
    }
}
int main(){
    int mang[5]= {1,2,3,4,5};
    int soPhanTu = sizeof(mang)/sizeof(int);
    inMang(mang, soPhanTu);
    return 0;
}
#include <stdio.h>
int main(){
    int tong = 0;
    for(int i=1;i<=100;i+=2){
        tong +=i;
    }
    printf("Tong cua cac so le tu 1 den 100 la: %d ",tong);
}


#include <stdio.h>
#include <stdlib.h>

int main(){
    int *a=(int*)malloc(10*sizeof(int));
    printf("Nhap vao mang: \n");
    for(int i=0; i<10 ; i++){
        scanf("%d", a+i);
    }
    printf("Mang vua nhap la: \n");
    for(int i=0; i<10 ; i++){
        printf("%d", *(a+i));
    }
    return 0;
}

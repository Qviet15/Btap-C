#include <stdio.h>
void  sapxep(int a[], int n){
    for(int i = 0; i < n ; i++){
        int min_index = i;
        for(int j = i+1; j < n ; j++ ){
            if(a[j]<a[min_index]){min_index = j;
            }
        }
    if(min_index != i){
        int temp = a[i];
        a[i]=a[min_index];
        a[min_index]=temp;
    }
    }

}
int main(){
    int n;
    printf("Nhap vao so gia tri cua mang: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sapxep(a , n);
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}

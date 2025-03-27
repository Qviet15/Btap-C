#include <stdio.h>
void sodep(int n){
    if(n>0){
    int sum = 0;
    for(int i=1;i<=n;i++){
        if(n%i==0) sum +=i;
    }
        if(sum / n == 2){
        printf("Day la so dep! ");
        }
        else printf("Day ko phai so dep!!");
    }
    else printf("Day ko phai so dep!!");
}
int main(){
    int n;
        printf("Nhap vao so nguyen duong n: ");
        scanf("%d", &n);
        sodep(n);
    return 0;
}

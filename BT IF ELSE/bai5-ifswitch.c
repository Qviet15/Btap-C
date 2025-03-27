#include<stdio.h>
#include<math.h>

int main(){
	float a,b,c;
	float x;
	scanf("%f" , &a);
	scanf("%f", &b);
	scanf("%f",&c);
	float delta = b*b-4*a*c;
	if(a==0){
		if(b==0){
			if(c==0){
				printf("Pt co vo so nghiem!");
			}
			else{
				printf("Pt vo nghiem!");
			}
		}
		else printf("phuong trinh co nghiem la: %f", -c/b);

	}
	else{
		if(delta==0){
			printf("Pt co nghiem kep: %f", -b/2*a);

		}
		else if(delta>0){
			printf("Pt co 2 nghiem phan biet: %f %f", ((-b+sqrt(delta))/2*a) , ((-b-sqrt(delta))/2*a));
		}
		else{
			printf("Pt vo nghiem!");
		}
	}
	return 0;
}

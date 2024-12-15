#include<stdio.h>

int main(){
	int a=10;
	int *p;
	p=&a;
	printf("%d \n",&a);
	printf("%d \n",a);
	//cach 2	
	printf("%d",*p);
	printf("%d",p);
	
}

#include<stdio.h>
void addArr(int *aPtr,int value,int index,int *size);
int main(){
	int arr[]={4,2,6,7,8};
	int size = 5;
	int index,value;
	for(int i =0;i<size;i++){
		printf("%d ",arr[i]);
	}		
	printf("\nmoi ban nhap vi tri can them : ");
	scanf("%d",&index);
	printf("moi ban nhap  gia tri can them : ");
	scanf("%d",&value);
 	addArr(arr, value, index,&size);
	for(int i =0;i<size;i++){
		printf("%d ",arr[i]);
	}
return 0;
}
void addArr(int *aPtr,int value,int index,int *size){

	for(int i =*size;i>=index;i--){
		*(aPtr+i)=*(aPtr+i-1);		
	}
	*(aPtr + index-1)= value;
	(*size)++;
}

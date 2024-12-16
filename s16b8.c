#include<stdio.h>

void reverseString( char *aPtr,int size);
int main(){
	char chuoi[100];
	printf("Moi ban nhap chuoi ki tu : ");
	fgets(chuoi,100,stdin);
	int size = strlen(chuoi);
	reverseString(chuoi,size);
	printf("%s ",chuoi);	
}
reverseString( char *aPtr,int size){
	int j =size -1;
	for(int i =0;i<size/2;i++){
			int temp = *(aPtr + i);
			*(aPtr + i)=*(aPtr + j);
			*(aPtr + j)=temp;
			j--;	
	}

}

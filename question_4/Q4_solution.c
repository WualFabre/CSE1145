#include <stdio.h>

int main(){
int x;

scanf("%d",&x);

int i , buffer;


for(i=x-1;i>=1;i--){
	
	
	if (x%i==0){
		
		buffer=i;
		printf("%d ", buffer);
		
	}
	
	
}
}


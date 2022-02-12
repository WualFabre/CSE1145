#include<stdio.h>
int main(void)
{
    int number;
    int first_letter;
    int second_letter;
    
     scanf("%d",&number);
   
    
     if (number>=1 && number<=26){
     	
     	number=number+64;
     	
     	printf("%c",number);
	 }
   else if (number>26 && number<702){
   
   	
   	first_letter=number/26;
   	second_letter=number%26;
   	
   	first_letter=first_letter+64;
   	second_letter=second_letter+64;
   	
   	printf("%c%c",first_letter,second_letter);
   	
   }
   else{
   	
   	printf("ZZ");
   }
    return 0;
}

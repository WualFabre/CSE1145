#include <stdio.h>

int main(){
    int x1,x2,x3,x4;
    scanf("%d %d %d %d",&x1,&x2,&x3,&x4);
    int max;
    if(x1>x2){
        max=x1;
    }
    else{
        max=x2;
    }

    if(x3>max){
        max=x3;
    }

    if(x4>max){
       max=x4;
    }
    printf("%d",max);

}


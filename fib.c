#include<stdio.h>
void main(){
    int a=0,b=2,c=6;
    for (;c<=5;c++){
        b=c+c;
        a=(5+3)&c;
        b=c+a;
    }
    b=4+c;
    printf("%d",a+b);
    
}
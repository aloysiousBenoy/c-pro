#include<stdio.h>
#include<math.h>

void hai();

void hello(){
    printf("hello\n");
    hai();
}    
void hai(){
    printf("hai\n");
}
int main(){
    hello();
   

    return 0;
}




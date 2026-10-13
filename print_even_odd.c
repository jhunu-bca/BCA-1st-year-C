#include<stdio.h>
int main(){
    int i;
    printf("Odd and Even numbers from 1 to 100: \n");
//Printing odd and even numbers from 1 to 100
    for(i=1;i<=100;i++){
        if(i%2==0){
            printf("%d is Even\n",i);
        }
        else{
            printf("%d is Odd\n",i);
        }
    }
    return 0;
}
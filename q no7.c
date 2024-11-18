/*Q.7 Develop a program that prints the given Custom alphabetic pattern using a nested for loop.*/


#include<stdio.h>
int main(){
    int i,j,k;
    for(i=1;i<=5;i++){
        if(i==1||i==3){
            printf("* * * * *\n");
        }
        else if( i==2){
            printf("*       *\n");
        }
        else{
            printf("*\n");
            printf("*\n");
        }
    }
}

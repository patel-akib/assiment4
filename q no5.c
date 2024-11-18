/*Q.5 Develop a program that prints the given Full Pyramid pattern using a nested for loop.*/

#include<stdio.h>
int main(){
    int i,j,k,p;
    int num=4;
    for(i=5;i>=1;i--){
        for(k=5;k>=5;k--){
            printf(" ");
        }
        for(j=i;j<=5;j++){
            printf("%d",j);
        }
        for(p=i;p<5;p++){
            printf("%d",num--);
        }
        printf("\n");
        num=4;
    }
}



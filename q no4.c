/*Q.4 Develop a program that prints the given Inverted Left half triangle pattern using a nested for
loop.
1 0 1 0 1
  1 0 1 0
    1 0 1
      1 0
        1*/
        
        
        #include<stdio.h>
        int main(){
            int i,j,k;
            for(i=5;i>=1;i--){
                for(k=1;k<=5-i;k++){
                    printf(" ");
                }
                for(j=1;j<=i;j++){
                    if(j%2==0){
                        printf("0");
                    }
                    else{
                        printf("l");
                    }
                }
                printf("\n");
            }
        }

#include<stdio.h>
int main(){
    int arr[2][2][2][2];
    for(int i=0 ;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                for(int l=0;l<2;l++){
                    printf("Enter element[%d][%d][%d][%d]:",i,j,k,l);
                    scanf("%d",&arr[i][j][k][l]);
                }
            }
        }
    }


    printf("The elements are:- \n");

    for(int i=0 ;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                for(int l=0;l<2;l++){
                    printf("%d\t",arr[i][j][k][l]);
                }
                printf("\n");
            }
            printf("\n");
        }
    }

}

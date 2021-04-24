#include <math.h>
#include <stdio.h>
#include <limits.h>

void getclosetosum(int arr1[],int arr2[],int * first_number, int * two_number,int target,int array_size);
int main(void){
    int target;
    int first_number,two_number;
    int     array_size=6;
    int arr1[6]={-1,3,8,2,9,5};
    int arr2[6]={4,1,2,10,5,20};
    printf(" give a target");
    scanf("%d",&target);


    getclosetosum(arr1,arr2,&first_number,&two_number,target,6);




}




void getclosetosum(int arr1[],int arr2[],int *first_number,int *two_number,int target,int array_size){
    int i,j,current_sum;

    int max_diff=INT_MAX;
    array_size=6;
    for(i=0;i<array_size;i++){
        for(j=0;j<array_size;j++){
            current_sum=arr1[i]+arr2[j];
            if(abs(target-current_sum)<max_diff){
                max_diff=abs(target-current_sum);
                *first_number=arr1[i];
                *two_number=arr2[j];
            }

        }

    }
    printf("(%d,%d)",*first_number,*two_number);
}

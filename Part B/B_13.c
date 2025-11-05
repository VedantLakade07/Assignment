#include <stdio.h>

int equal(int a,int b){
    if(a==b){
    return 1;
    }else{return 0;}
}

int main(){

        int arr1[]={45,25,98,67,95,14,26,35,52};
        int arr2[]={45,25,98,67,95,14,26,35,52};
        int c=0;
        int n=sizeof(arr1)/sizeof(arr1[0]);
        if(sizeof(arr1)==sizeof(arr2)){
            for(int i=0;i<n;i++){
                c+=equal(arr1[i],arr2[i]);

            }
            if(c==n){
                printf("Equal");
            }else{
                printf("Not Equal");
        
        }
        }else{
            printf("Not equal");
        }
        

        return 0;
}
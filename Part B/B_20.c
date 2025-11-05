#include <stdio.h>


int isequal(int a,int b){
    if (a==b){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int arr[]={2,3,3,5,3,7,3,3,4,5,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(isequal(arr[i],arr[j])){
            count++;
            }
        }
        if(count>n/2){
            printf("%d ",arr[i]);
            return 0;
        }
    }
    printf("No Majority Element");
    return 0;
}


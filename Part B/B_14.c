#include <stdio.h>

int product(int a,int b){
    return a*b;
}

int main(){
    int arr1[]={1,2,3,4,5};
    int arr2[]={6,7,8,9,10};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int sl=0;
    for(int i=0;i<n;i++){
        sl+=product(arr1[i],arr2[i]);
    }
    printf("%d",sl);
    return 0;
}
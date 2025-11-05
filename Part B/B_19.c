/* rotate right by one*/

#include <stdio.h>

int rotateRight(int prev, int next) {
    return next;
}

int main() {
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int temp =arr[n-1];
    for(int i=0;i<n;i++){
        if(i==0){printf("%d ",temp);
        }else{
        printf("%d ",rotateRight(arr[i],arr[i-1]));
        }

    return 0;
}}

#include <stdio.h> 
int ispalindrome(int n){
    int r=0,num=n;
    while(n>0){
        int digit=n%10;
        r=r*10+digit;
        n=n/10;
    }
    if(r==num){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int arr[]={115,129,484,565,787,895,999,343,669,121};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(ispalindrome(arr[i])){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}
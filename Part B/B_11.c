
#include <stdio.h>

int smaller(int a,int b){
if(a<b){
        return a;
    }else{
        return b;
    }
}

int main(){
    int arr[]={34,12,5,67,23,89,1,45,90,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    int s[n];
    for(int i=0;i<n;i++){
        s[i]=arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(smaller(s[j],s[i])==s[j]){
                int temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",s[i]);
    }
    return 0;
}
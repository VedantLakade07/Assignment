#include<stdio.h>


int large(int a,int b){
if(a>b){
        return a;
    }else{
        return b;
    }
}

int main(){
    int arr[]={52,47,85,96,54,98,63,74,76,42,91,84};
    int n=sizeof(arr)/sizeof(arr[0]);
    int l=arr[0];
    int sl;
    
    for(int i=0;i<n;i++){
        l=large(arr[i],l);

    }
    sl=arr[0];
    if(arr[0]==l){
        sl=arr[1];
    }

    
    for(int i=0;i<n;i++){
        if (arr[i]!=l){
        sl=large(arr[i],sl);
        }

    }
    printf("%d",sl);

}

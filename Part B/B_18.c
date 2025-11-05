#include <stdio.h>

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
    for(int i=0;i<n;i++){
        int il=0;
        for(int j=i+1;j<n;j++){
            if(large(arr[j],arr[i])==arr[j]){
                il=1;
                break;
            }
        }
        if(il==0){ printf("%d ",arr[i]);}
    }

return 0;
}

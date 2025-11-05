
#include <stdio.h>
int replace(int x){
    if(x<0){
        return 0;
    }else{
        return x;
    }
}

int main(){
    int arr[]={4,-5,3,-81,6,8,-59,54,-28,74,-85,12,68};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        printf("%d ",replace(arr[i]));
    }
    return 0;
}
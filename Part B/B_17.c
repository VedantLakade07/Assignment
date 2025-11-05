#include <stdio.h>
#include <math.h>

float square(float x){
    return x*x;
}

int main(){
    int arr[]={52,41,85,96,78,34,98,54,45,19,76,42,91};
    int n=sizeof(arr)/sizeof(arr[0]);
    float mean=0;
    for(int i=0;i<n;i++){
        mean+=arr[i];
    }
    mean=mean/n;
    float sd=0;
    for(int i=0;i<n;i++){
        sd+=square(arr[i]-mean);
    }
    sd=sd/n;
    
    sd=sqrt(sd);
    printf("%f",sd);
    return 0;
}

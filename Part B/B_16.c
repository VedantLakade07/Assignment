#include <stdio.h>


int compare(int a, int b) {
	if(a==b) {
        return 1;
    } else {
        return 0;
    }
}
int main(){
    int a1[]={45,78,99,78,45,48};
    int n=sizeof(a1)/sizeof(a1[0]);

    for(int i=0;i<n;i++){
        if(compare(a1[i],a1[n-1-i])==0){
            printf("Not Symmetric");
            return 0;
        }
    }
    printf("Symmetric");
    return 0;
}
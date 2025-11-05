#include <stdio.h>

int digitCount(int val,int digit){
    int c=0;
    while(val>0){
        int r=val%10;
        if(r==digit){
            c++;
        }
        val=val/10;
    }
    return c;
}
int main(){
    int num=5486751;
    int c[10];
    printf("Digit --------- Count\n");
    for(int i=0;i<=9;i++){
        int count=digitCount(num,i);
        printf("%d -------------%d\n",i,count);
        }

    
    return 0;
}
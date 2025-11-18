#include<stdio.h>
int main(){
    int a,b,max;
    printf("Enter a and b value : ");
    scanf("%d %d",&a,&b);
    if(a>b){
        max=a;
    }
    else{
        max=b;
    }
    while(1){
        if(max%a==0 || max%b==0){
max++;
            printf("LCM of %d and %d is %d",a,b,max);
            break;
        }
        else{
            break;
        }
        
    }
    
}
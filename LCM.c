#include<stdio.h>
int lcm_n(int,int,int);
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
    int c=lcm_n(max,a,b);
    printf("%d %d LCM is %d",a,b,c);
return 0;
}
int lcm_n(int max,int a,int b){
    if(max%a==0&&max%b==0){
       
return max;
    }
else{
    max++;
return lcm_n(max,a,b);
    }
}


   

#include<stdio.h>
int prime(int n);
int megaprime(int n);
int prime(int n){
    int c=1;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            c=0;
            break;
        }
    }if(c==0){
        return 0;
    }
    return 1;
}
int megaprime( int n){
    int temp;
    while(n!=0){
        temp=n%10;
        n=n/10;

        if(prime(temp)==0 || temp==1){
            return 0;
            break;
        }
    }
     return 1;
        
}
int main(){
    int num;
   // printf("enter the number to check whether it is a mega prime or not:");
    scanf("%d",&num);
    if(prime(num)&& megaprime(num)){
       printf("Mega Prime");
      
    }else{
    printf("Not Mega Prime");
    }
    return 0;
}
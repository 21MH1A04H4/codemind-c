#include<stdio.h>
int main(){
    int a,i,pro=1;
    scanf("%d",&a);
    for(i=2;i<a;i++){
        if(a%i==0){
        pro=pro*i;
        }
        }
    if(pro==a){
    	for(i=2;i<a;i++){
        if(a%i==0){
        printf("%d ",i);
        }
        }
	}
	else{
		printf("-1 ");
	}
        
  return 0;  
}
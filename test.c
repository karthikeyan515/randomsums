#include<stdio.h>
int power(int a,int b){
    int res=1;
    while(b>0){
        if(b&1)res*=a;
        a*=a;;
        b>>=1;
    }
    return res;
}
int main(){
    printf("%d",power(2,30) );
}
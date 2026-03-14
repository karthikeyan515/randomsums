#include<stdio.h>
int div(int a,int b){
    int div=b,temp=1,q=0;
    while(a>div){
        div<<=1;
        temp<<=1;
    }
    while(a>=b){
        if(a>=div){
            a-=div;
            q+=temp;
        }
        div>>=1;
        temp>>=1;
    }
    return q;

}


int main(){
    printf("%d",div(1236,24));
}

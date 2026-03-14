
#include<stdio.h>
int add(int a,int b){
    int carry =0;
    while(b!=0){
        carry=a&b;
        a^=b;
        b=carry<<1;
    }
    return a;
}

int div(int a,int b){
    int div=b,temp=1,q=0;
    while(a>div){
        div<<=1;
        temp<<=1;
    }
    while(a>=b){
        if(a>=div){
            a=add(a,-div);
            q=add(q,temp);
        }
        div>>=1;
        temp>>=1;
    }
    return q;

}


int main(){
    printf("%d",div(1236,24));
}


#include<stdio.h>


int main(){
int res[2]={0};
int a[5]={4,4,8,1,10};
int h[100]={0};
int target =18;
for(int i=0;i<5;i++){
    if(target<a[i]) continue;
    if(h[target-a[i]]){
        res[0]=target-a[i];
        res[1]=a[i];
        break;
    }
    else{
        h[a[i]]=1;
    }
}
printf("%d %d",res[0],res[1]);
}
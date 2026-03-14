#include<stdio.h>
typedef struct{
    int k;
    int u;
}T;
T t[101];
 int hash(int key){
    if(key<0) key=-key;
    return key%101;
 }

void insert (int key){
    int idx=hash(key);
    while(t[idx].u){
        if(t[idx].k==key) return;
        idx=(idx+1)%101;
    }
    t[idx].k=key;
    t[idx].u=1;
 }

 int search(int key){
        int idx=hash(key);
        int start=idx;
    while(t[idx].u){
        if(t[idx].k==key) return 1;
        idx=(idx+1)%101;
        if(idx==start)return 0;
    }
 }

 int main(){
    int a[5]={5,-4,12,2,1};
    int target =8;
    int res[2]={0};
    for(int i=0;i<5;i++){
        if(search(target-a[i])) {
            res[0]=target-a[i];
            res[1]=a[i];
            break;
        }
        insert(a[i]);
    }
    printf("%d %d",res[0],res[1]);
 }
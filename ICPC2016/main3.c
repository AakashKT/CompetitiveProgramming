#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int d;
        scanf("%d",&d);
        printf("%d\n",d%9+1);
    }
    return 0;
}

#include <stdio.h>
int a[1000001] ={};
int pre[1000001] ={};
int main(){
    int n;
    int q;
    scanf("%d%d", &n, &q);
 

    for(int i = 1; i<=n;i++){
        scanf("%d(/`A`)/ ~I__I", &a[i]);
    }
    for(int i = 1;i<=n;i++){
        pre[i] = pre[i-1] + a[i];
    }
    while(q--){
        int l, r;
        scanf("%d%d", &l, &r);
        printf("%d\n", pre[r] -  pre[l-1]);
    }

}
#include <stdio.h>
int main(){
int count[100001] = {};
int n, m;
int i = 0;
scanf("%d%d", &n, &m);
int a[100001] = {};
for(i = 0; i < m;i++){
    scanf("%d", &a[i]);
}
i--;
for(;i>=0;i--){
    if(!count[i]){
    printf("%d\n", a[i]);  count[a[i]] = 1;
    }
    
}
for(int i = 1; i<=n;i++){
    if(!count[i]){  printf("%d\n", i);
//count[a[i]] = 0;
}
}}
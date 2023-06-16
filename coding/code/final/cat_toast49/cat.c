#include <stdio.h>
int x[1005];
int y[1005];
int walk[1005] = {};
    int n, r;
int check(int i, int now){
    if(((x[now] - x[i])*(x[now] - x[i])) + ((y[now] - y[i])*(y[now] - y[i])) <= r*r) return 1;
    else return 0;
}
int count = 0; //check each group have how many people
void dfs(int now){ 
    if(walk[now] == 0) count++;
    walk[now] = 1;
   
    for(int i = 0;i<n;i++){
        if(walk[i]) continue;
        if(check(i, now) == 0) continue;
         dfs(i);
    }

}


int  main(){
    scanf("%d%d", &n, &r);
    for(int i = 0; i < n; i++){
        scanf("%d%d", &x[i], &y[i]);
    }
int ans1 = 0;
int ans2 = 0;
    for(int i = 0; i<n;i++){
        dfs(i); 
        if(count >= 2)ans1++;
        else ans2+= count;
        count = 0;

    }
    printf("%d %d\n", ans2, ans1);

}
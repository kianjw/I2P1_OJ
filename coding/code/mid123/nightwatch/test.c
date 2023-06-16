#include <stdio.h>
#define max(x,y) ((x) > (y) ? (x) : (y))
#define min(x,y) ((x) < (y) ? (x) :(y))
int main (){
     int t;
    scanf("%d", &t);
    while(t--){
        int n, m, k;  int ans = 0;
        int at_least;
        int a[5000];
        scanf("%d%d%d", &n, &m, &k);
        for(int i = 0; i<n;i++) scanf("%d", &a[i]);
        k = min(k,m-1);
        for(int i = 0; i<= k;i++){  
            at_least = 0x3f3f3f3f;
            for(int j = 0; j<= m-1-k; j++){
                at_least = min(max(a[i+j], a[i+j+(n-m)]), at_least);
            }
            ans = max(ans, at_least);
        }
    printf("%d\n", ans);
    }
}
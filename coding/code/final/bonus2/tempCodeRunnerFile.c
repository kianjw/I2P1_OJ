#include <stdio.h>
#define max(x,y) ((x) > (y) ? (x) : (y))
int  n, m;
long long int a[200005];
int cmp ( const void*a, const void*b){
    int aa = *(int*)a;
    int bb = *(int*)b;
    return bb - aa;
}
long long int f(int mid){ long long int mm = 0;
    for(int i = 0; i<n;i++){
        mm +=  max(a[i] - i/mid, 0);
    }
    return mm;
}

long long int binary(int l, int r){ long long int result = -1;
    while(l<r){
        int mid = (l+r)/2;
        if(f(mid) > m) {
            r = mid;
            result = mid;
        }
        else l = mid +1;
    }
    return result;
    

}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &n,&m);
        for(int i = 0; i<n; i++){
            scanf("%lld", &a[i]);
        }
qsort(a, n, sizeof(a[0]), cmp);
   long long int ans =    binary(1, n +1);
    if(ans == -1 ) printf("-1\n");
    else printf("%lld\n", ans);
    }
}
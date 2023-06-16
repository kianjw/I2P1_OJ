#include <stdio.h>
#define max(x,y) ((x) > (y) ? (x) : (y))
int  n, m;
int a[200005];

int f(int mid){ int mm = 0;
    for(int i = 0; i<n;i++){
        mm +=  max(a[i] - i/mid, 0);
    }
    return mm;
}

int binary(int l, int r){ int result = -1;
    while(l<r){
        int mid = (l+r)/2;
        if(f(mid) >= m) {
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
            scanf("%d", &a[i]);
        }

    int ans =    binary(1, n +1);

     printf("%d\n", ans);
    }
}
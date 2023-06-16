    #include <stdio.h>
    #include <stdlib.h>
    int l, r;
    int m;
    int n;
    int a[100001] = {};
    int cmp( const void* a, const void* b){
        int *aa = (int*)a;
        int *bb = (int*)b;
        return (*aa) - (*bb);
    }
    int lb(int x){ l = 0; r = n;
        while(l<r){ m = (l+r)/2;
            if(a[m] >= x) r = m;
            else l = m +1;
        }
        return l;
    }
    int ub(int x){ l = 0; r = n;
        while(l<r){
            m = (l+r)/2;
            if(a[m] > x) r = m;
            else l = m +1;
        }
        return r;
    }

    int main(){
        scanf("%d", &n);
        for(int i = 0; i< n;i++) scanf("%d", &a[i]);
        int q; scanf("%d", &q);
        qsort(a,n,sizeof(a[0]),cmp);
        while (q--){
            int x;
            scanf("%d", &x);
            printf("%d\n", ub(x) - lb(x));
        }
    }
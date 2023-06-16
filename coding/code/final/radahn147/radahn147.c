#include <stdio.h>
#include <stdlib.h>

typedef struct _segment{
    double l, r;
} segment;
segment s[1000005];

int cmp(const void*a, const void*b){
    segment aa = *(segment*)a;
    segment bb = *(segment*)b;
    if(aa.l > bb.l) return 1;
    if(aa.l < bb.l) return -1;
    if(aa.r > bb.r) return 1;
    if(aa.r < bb.r) return -1;
    return 0;
}


int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, q;
        scanf("%d%d", &n, &q);
        for(int i = 0; i<q;i++){
            scanf("%lf%lf", &s[i].l, &s[i].r );
        }
        qsort(s,q,sizeof(s[0]), cmp);
double total;
double  R= s[0].r;
double  L = s[0].l;
total = R - L;
        for(int i =  1; i<q; i++){
            if(s[i].l <= R && s[i].r>=R ){
                total += s[i].r - R;
                R  = s[i].r;
                L = s[i].l;
            }
            else if( s[i].l > R){
                total += s[i].r - s[i].l;
                R = s[i].r;
                L = s[i].l;
            }

            }
        //printf("%lf\n", total);
        
            printf("%lf\n", 1-total/n);
        }
    }

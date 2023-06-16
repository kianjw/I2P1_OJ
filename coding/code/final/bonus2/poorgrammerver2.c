#include <stdio.h>
      int n, m;
      int a[10000001] = {};
#define max(x, y) ((x) > (y) ? (x) : (y))

   int cmp( const void* a, const void* b){
        int *aa = (int*)a;
        int *bb = (int*)b;
        return (*bb) - (*aa);
   }
long long  int f( long long int mid)
{
   long long int mm = 0;
    for (int i = 0; i < n; i++)
        mm += max(a[i] - i / mid, 0);
        //printf("%d", mm);
    return mm ;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
  

        scanf("%d%d", &n, &m);
        for (int i = 0; i < n; i++) 
            scanf("%d", &a[i]);

 qsort(a,n,sizeof(a[0]),cmp);
       long long int low = 1; // minimum possible value of r
       long long int high = n + 1; // maximum possible value of r
       long long  int result = -1; // stores the final result

        while (low < high)
        {
            int mid = (high+low) / 2;

            if (f(mid)>m)
            {
                // If mm is greater than or equal to m for the given value of r,
                // we update the result and search in the lower half.
                result = mid;
                high = mid  ;
            }
            else
            {
                // If mm is less than m for the given value of r,
                // we search in the upper half.
                low = mid + 1;
            }
        }

        if (result != -1)
            printf("%lld\n", result);
        else
        printf("-1\n");
    }
    return 0;
}
 
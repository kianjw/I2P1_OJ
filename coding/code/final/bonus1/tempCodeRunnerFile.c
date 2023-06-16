#include <stdio.h>
#include <string.h>
#define min(x, y) ((x) < (y) ? (x) : (y))
#define max(x, y) ((x) > (y) ? (x) : (y))

int n, q;
int wall[5005];
int guard[5005][2];

int take_one(int ind) {
    int temp[5005];
    for (int i = 1; i <= n; i++) {
        temp[i] = wall[i];
    }
    for (int i = guard[ind][0]; i <= guard[ind][1]; i++) {
        temp[i]--;
    }
    int full = 0;
    for (int i = 1; i <= n; i++) {
        if (temp[i] > 0) {
            full++;
        }
    }
    int prefix[5005];
    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1] + ((temp[i] == 1) ? 1 : 0);
    }
    int minus = 0x3f3f3f3f;
    for (int i = 0; i < q; i++) {
        if (i != ind) {
            minus = min(minus, prefix[guard[i][1]] - prefix[guard[i][0] - 1]);
        }
    }  //minus  =  most people guard the section
    return full - minus;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d", &n, &q);
        

        int ans = 0;


        for (int i = 0; i < q; i++) { scanf("%d%d", &guard[i][0], &guard[i][1]);
            for (int j = guard[i][0]; j <= guard[i][1]; j++) {
                wall[j]++;
            }
        }

        for (int i = 0; i < q; i++) {
            ans = max(ans, take_one(i));
        }
 memset(wall, 0, sizeof(wall));
        printf("%d\n", ans);
    }
    return 0;
}

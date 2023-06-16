#include <stdio.h>
#include <string.h>
    char a[1005], b[1005];

// Function to compare two substrings according to Johnny's rule
int compare( int al, int ar,  int bl, int br) {
    if ((ar - al + 1) % 2 == 1) {
        // If length is odd, directly compare the substrings
        for (int i = al; i <= ar; i++) {
            if (a[i] != b[bl + i - al]) {
                return 0; // Not equivalent
            }
        }
        return 1; // Equivalent
    } else {
        // If length is even, divide the substrings and check for 2 cases
        int am = (al + ar) / 2;
        int bm = (bl + br) / 2;
        int s1 = compare(al, am, bl, bm);
        int s2 = compare( am + 1, ar, bm + 1, br);
        int s3 = compare( al, am, bm + 1, br);
        int s4 = compare( am + 1, ar,  bl, bm);
        if ((s1 && s2) || (s3 && s4)) {
            return 1; // Equivalent
        } else {
            return 0; // Not equivalent
        }
    }
}

int main() { int t; scanf("%d", &t); while(t--){
    scanf("%s", a);
    scanf("%s", b);
    int  ar = strlen(a) - 1,  br = strlen(b) - 1;
 
    if (compare(0, ar, 0, br) ) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }}
    return 0;
}
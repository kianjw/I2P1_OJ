#include <stdio.h>
int n;
int col[14], d1[27], d2[28];

int getans(int row){
    if (row == n) return 1;
    int res = 0;
    //printf("%d", res);
    for(int i = 0; i < n; i++){
        if(col[i]) continue;
        if(d1[row+i]) continue;
        if(d2[row-i+14]) continue;
        col[i] = 1;
        d1[row+i] = 1;
        d2[row-i+14] = 1;
        res += getans(row+1);
        col[i] = 0;
        d1[row+i] = 0;
        d2[row-i+14] = 0;
       // printf("%d", res);

    }
    //printf("%d", res);
    return res;
}

int main(){
    scanf("%d", &n);
    printf("%d\n", getans(0));
    return 0;}
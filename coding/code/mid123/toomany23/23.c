#include <stdio.h>
int main () {
    int n;
    int a[200001];
    int b[200001];
    int notexist[200001]={};
    int index = 0;
    scanf("%d", &n);
    for (int i = 0; i<n;i++) scanf("%d", &a[i]);
    for(int i = 0; i<n;i++) scanf("%d", &b[i]);
    for(int i = 0; i<  n; i++){
        int count = 0;
        while(notexist[b[i]] == 0) {
            count++;
            notexist[a[index]] = 1;
            if(a[index++] == b[i]){
                break;
            }
        }
        printf("%d ", count);
    }
}
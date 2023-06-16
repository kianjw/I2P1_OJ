#include <stdio.h>
#include <string.h>
#define mod 1000000007
typedef struct _matrix{
    long long int mat[3][3];
} matrix;
     long long int x;
matrix initial = {{{0, 1, 0}, {0, 0, 1},{1, 2, 1}}}; 

matrix matrix_mul(matrix l , matrix r){
    matrix res;
    memset(res.mat, 0, sizeof(res.mat));
    for(int i = 0; i<3;i++){
        for(int j = 0; j<3;j++){
            for(int k = 0; k< 3;k++){
                res.mat[i][k] += (l.mat[i][j] * r.mat[j][k]) %mod;
                res.mat[i][k] %= mod;
            }
        }
    }
    return res;
}

matrix fps(matrix initial, long long int y){
    if(y == 1) return initial;
    else{
        matrix temp = fps(initial,y/2);
        if(y%2==1) return matrix_mul(matrix_mul(temp, temp), initial);
        else return matrix_mul(temp,temp);
    }
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
   
        scanf("%lld", &x);
        if(x<=3) {
            if(x==1) printf("1\n");
            else if (x==2) printf("12\n");
            else printf("13\n");
            continue;
        }
      matrix temp =   fps(initial, x-3);  
      //printf("%lld", temp.mat[2][0]);   
        long long int ans = (temp.mat[2][0]*1 + temp.mat[2][1]*12 + temp.mat[2][2]*13)%mod;
        printf("%lld\n", ans);
    }
}
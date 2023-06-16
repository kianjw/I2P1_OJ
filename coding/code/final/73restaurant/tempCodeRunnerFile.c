#include <stdio.h>
#define m 1000000009
typedef struct _point{
    mat[2][2];
}point;

point initial = {{{0,1}, {1,0}}};

point mul(point l, point r){ point res;
    memset(res.mat, 0, sizeof(res.mat));
    for(int i = 0; i < 2;i++){
        for(int j = 0; j<2; j++){
            for(int k = 0; k < 2;k++){
                res.mat[i][k] += (l.mat[i][j] * mat[j][k])%m;
                res.mat[i][k] %= m;
            }
        }
 
    } return res; 
}

point fps(point x, long long int y){
    if(y==1) return initial;
    else{
        point temp = fps(x, y/2);
        if(y%2  == 1) return mul(mul(temp,temp), x);
        else return mul(temp,temp);

    }
}

int main(){
long long int t;
while(scanf("%d", &t) != EOF){
    if(t<=2){
        printf("1\n");
        continue;
    }
    else{ 

point temp =    fps(initial , t-3);
long long int ans  = temp[1][0] + temp[1][1];
printf("%lld\n", ans);

}}
}
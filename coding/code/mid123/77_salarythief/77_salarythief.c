#include <stdio.h>
#include <string.h>
char ans[600];
int tmp[5000005]={0};
long long int x;
long long int up = 1000000007;
long long int newlength;
int flag = 1;
long long int count(long long int now,long long int length)
{
  newlength = length + (tmp[now]-1)*(length-(now+1));
  if (length <= 1000000 && flag==1)
  {
    for(int i=length;i<newlength;i++)
      tmp[i] = tmp[i-length+now+1];
  }
  
  if(newlength < 0) newlength+= up;
  if(newlength > up){
    newlength = newlength%up;
    flag = 0;
  }
  //printf("%lld", newlength);
  if (now==x)
  
  return length;
  else
    //printf("%d %lld %d\n",now,length,tmp[now]);
    return count(now+1,newlength);
}
int main()
{
  int t;
  scanf("%d", &t);
  while(t--)
  { flag = 1;
    scanf("%lld", &x);
    scanf("%s", ans);
    long long int slen = strlen(ans);
    for(int i=0;i<slen;i++)
      tmp[i] = ((int)ans[i] - 48);
    printf("%lld\n",count(0,slen));
  }
}
#include <iostream> // 输入输出流
#include <cstring> // 字符串操作
#include <algorithm> // STL 中的算法库
#include <cstdio> 
using namespace std;
#define ll long long
#define P pair<ll,ll>
#define fi first
#define se second
inline ll read() //快速读入
{
ll w=1,c,ret;
while((c=getchar())> '9'||c< '0')
w=(c=='-'?-1:1); ret=c-'0';
while((c=getchar())>='0'&&c<='9')
ret=ret+c-'0';
return ret;
}
ll n,k,dp[5010][2],a[5010],c[5010],h[5010]; //dp[i][0/1]表示前i个程序运行完后，第二个CPU上是/不是运行最后一个程序时的最小时间，a表示运行顺序，c和h表示运行时间和最热时间
int main()
{
int T=read(); //多组数据
while(T--)
{
n=read(),k=read(); //读入
for(int i=1;i<=n;i++)
a[i]=read();
for(int i=1;i<=k;i++)
c[i]=read();
for(int i=1;i<=k;i++)
h[i]=read();
dp[1][0]=c[a[1]],dp[1][1]=c[a[1]]; //初始化
for(int i=2;i<=n;i++)
{
dp[i][0]=min(dp[i-1][0]+c[a[i]],dp[i-1][1]+c[a[i]]); //如果第一个CPU上不是运行最后一个程序，那么两个CPU上都可以运行该程序
if(a[i]==a[i-1]) dp[i][1]=min(dp[i-1][0]+h[a[i]],dp[i-1][1]); //如果第二个CPU上是运行最后一个程序，那么就只能等待，因此第一个CPU上应该运行最热的程序
else dp[i][1]=min(dp[i-1][0]+h[a[i]],dp[i-1][1]+c[a[i]]); //否则，两个CPU都可以运行该程序
}
printf("%lld\n",min(dp[n][0],dp[n][1])); //输出结果
}
return 0;
}




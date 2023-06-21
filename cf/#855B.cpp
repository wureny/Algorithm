#include<iostream>
#include<cstring>
using namespace std;
typedef long long ll;
const int N=100;
void solution(ll n, ll k);
int main()
{
    ios::sync_with_stdio(false);
    ll time;
    cin>>time;
    while(time--)
    {
        ll n;
        ll k;
        cin>>n>>k;
        solution(n,k);
    }
}
bool isLower(char ch)
{
	return ch >= 'a' && ch <= 'z';
}
 
// 判断字符是否为大写字母
bool isUpper(char ch)
{
	return ch >= 'A' && ch <= 'Z';
}
void solution(ll n, ll k)
{
    string ans;
    ll tmp[100]={0};
    ll res=0;
    for (ll i=0;i<n;i++)
    {
        char s;
        cin>>s;
        if(i==0) {tmp[s-'A']+=1; continue;}
        if (isUpper(s))
        {
            if(tmp[s-'A'+32]!=0)
            {
                res+=1;
                tmp[s-'A'+32]-=1;
                continue;
            }
            tmp[s-'A']+=1;
            continue;
        }
        if(isLower(s))
        {
            if(tmp[s-'A'-32]!=0)
            {
                res+=1;
                tmp[s-'A'-32]-=1;
                continue;
            }
            tmp[s-'A']+=1;
            continue;
        }
    }
    ll st=0;
    if(k!=0)
    {
    for (ll i=0;i<26;i++)
    {
        if(k==0)
        break;
        if(tmp[i+32]!=0)
        tmp[i]=tmp[i+32];
        if(tmp[i]==1)
        {
            st=1;
            continue;
        }
        if(tmp[i]%2==0)
        {
            while (tmp[i]!=0 && k!=0)
            {
                k--;
                res+=1;
                tmp[i]=tmp[i]-2;
            }
            continue;
        }
        if (tmp[i]%2!=0)
        {
            while(tmp[i]>2 && k!=0)
            {
                k--;
                res+=1;
                tmp[i]=tmp[i]-2;
            }
            st=1;
        }
    }
    cout<<res<<endl;
    }
    else if(k==0)
    {
        cout<<res<<endl;
    }

}
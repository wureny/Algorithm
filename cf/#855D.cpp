#include<iostream>
#include<cstring>
using namespace std;
typedef long long ll;
const int N=100010;
string arr;
int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
        int s;
        cin>>s;
        int sum=s-1;
        int res=0;
        cin>>arr;
        for (int i=0;i<s-2;i++)
        {
            if (arr[i]==arr[i+2])
            res+=1;
        }
        //ll sum=s-1;
        //ll res=0;
      /*  for (ll i=1;i<s-1;i++)
        {
            if (arr[i]==arr[i+2]) res+=1;
        }*/
        sum-=res;
        cout<<sum<<endl;
    }
}
#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
using namespace std;
const int N=-1e9-1;
int main()
{
    int cou;
    int len;
    cin>>cou;
    for (int i=0;i<cou;i++)
    {
       int ans=N;
       cin>>len;
       int a[len];
       int ass=N;
       for (int i=0;i<len;i++)
       {
        cin>>a[i];
        if (a[i]<0) ans=a[i];
        if (a[i]>ass) ass=a[i];
       }
       if (ans<0 && ans!=N)
       {
        cout<<ans<<endl;
        continue;
       }
       else{
        cout<<ass<<endl;
        continue;
       }

    }
}
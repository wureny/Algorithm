/**
大致思路：当最大值在1和2之间时，由于任何大于2的数所在数组必定包含1，2，也就必定包含这个最大值，所以满足条件的数组只会有【1】，【1，2，。。。，最大值】
    **/
#include<iostream>
#include<vector>
using namespace std;
const int N=2e5;
int a[N];
int main()
{
    int cnt;
    cin>>cnt;
    while(cnt--)
    {
        int size;
        int x,y,z;
        cin>>size;
        for (int i=0;i<size;i++)
        {
            cin>>a[i];
            if (a[i]==size)
            {
                z=i;
            }  
            if (a[i]==1)
            {
                x=i;
            }
            if (a[i]==2)
            {
                y=i;
            }
        }
        if ((x>z && y<z) || (y>z && x<z))
        {
            cout<<x+1<<" "<<y+1<<endl;
            continue;
        }
        else if (z<min(x,y))
        {
            cout<<z+1<<" "<<min(x,y)+1<<endl;
            continue;
        }
        else if (z>max(x,y))
        {
            cout<<z+1<<" "<<max(x,y)+1<<endl;
            continue;
        }
    }
}

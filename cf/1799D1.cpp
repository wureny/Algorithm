#include<iostream>
using namespace std;
int mintime(int* a,int* cold, int* hot)
{

}
int main()
{
    int count;
    cin>>count;
    int n,k;
    while(count--)
    {
        cin>>n>>k;
        int a[n];
        for (int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int cold[k];
        for (int i=0;i<k;i++)
        {
            cin>>cold[i];
        }
        int hot[k];
        for (int i=0;i<k;i++)
        {
            cin>>hot[i];
        }
        cout<<mintime(a,cold,hot)<<endl;
    }
}
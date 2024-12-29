#include<iostream>
using namespace std;
int main()
{
    int j;
    for(int i=0;i<4;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<4-i;k++)
        {
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
}
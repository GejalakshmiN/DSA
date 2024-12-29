#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=i;j<4;j++)
        {
            cout<<i+1;
        }
        cout<<endl;
    }

}
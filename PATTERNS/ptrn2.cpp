#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<7;i++)
    {
        char ch='A';
        for(int j=0;j<7;j++)
        {
            cout<<ch<<" ";
            ch+=1;
        }
        cout<<endl;
    }
}
/*#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j>0;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
}*/
#include<iostream>
using namespace std;
int main()
{
    int num=1;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<num;
            num++;
        }
        cout<<endl;
    }
}
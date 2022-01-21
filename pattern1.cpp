#include<iostream>
using namespace std;
int main()
{
    int l, b;
    cout<<"Enter the length : ";
    cin>> l;
    cout<<"Enter the breadth : ";
    cin>> b;
    for(int a=1; a<=l; a++)
    {
        for(int c=1; c<=b; c++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;

}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int z=n/2;

    
    for(int i=z;i>=1;i--)
    {   int p=z-i;
         while(p--)
        {
            cout<<" ";

        }
        cout<<"\\";
        for(int j=(i*2)-1;j>=1;j--)
        {
            cout<<" ";
        }
        cout<<"/";
        cout<<endl;

    }

    int v=z;
    while(v--)
        {
            cout<<" ";

        }
        
    cout<<"X"<<endl;
            
        
    for(int i=1;i<=z;i++)
    {   int p=z-i;
        while(p--)
        {
            cout<<" ";

        }
        cout<<"/";
        for(int j=(i*2)-1;j>=1;j--)
        {
            cout<<" ";
        }
        cout<<"\\";
        cout<<endl;

    }

    return 0;
}
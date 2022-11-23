#include<iostream>
using namespace std;

int main()
{

        int t; cin>>t;
        while(t--)
        {
            // \\IO
            int n; cin>>n;
            int a[n], b[n];

            for(int i=0; i<n; i++) cin>>a[i];
            for(int i=0; i<n; i++) cin>>b[i];

            // \\Logic

            for(int i=0; i<n; i++)
            {
                if(a[i]<b[i])
                {
                    swap(a[i], b[i]);
                }
            }

            int Ma = a[0];
            for(int i=1; i<n; i++)
            {
                if(a[i]>Ma)
                Ma = a[i];
            }

            int Mb = b[0];
            for(int i=1; i<n; i++)
            {
                if(b[i]>Mb)
                    Mb = b[i];
            }

            cout<<Ma*Mb<<"\n";
        }

        return 0;

    }    

#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t; cin>>t;
   while(t--)
   {
        string s;
        cin>>s;

        int len=s.size();
        if(len%2!=0)
            cout<<"NO"<<endl;
        else{
            int i=0;
            int j=s.size()/2;
            bool flag = true;

            while(i<=j && j<=s.size()-1)
            {
                if(s[i]!=s[j])
                {
                    flag = false; break;
                }
                i++; j++;
            }
            if(flag==true) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}

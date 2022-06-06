#include<bits/stdc++.h>
using namespace std;

int main() {
     int t;
     cin>>t;
     while(t--)
     {
          string s,p;
          cin>>s>>p;
          for(int i=0;i<s.length();i++)
          {
               if(s[i]==p[i])
               {
                    cout<<"G";
               }
               else
               {
                    cout<<"B";
               }
          }
        cout<<"\n"; 
     }
	// your code goes here
	return 0;
}

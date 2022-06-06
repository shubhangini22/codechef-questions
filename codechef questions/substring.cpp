#include <bits/stdc++.h>
using namespace std;

int main() {
     int t;
     cin>>t;
     while(t--)
     {
          string s;
          cin>>s;
          char a,b;
          int n=s.length(),sum=0;
          vector<int> res;
          for(int i=0;i<n;i++)
          {
          a=s[0];
          b=s[n-1];
          }
          for(int i=0;i<n;i++)
          {
               
              if(s[i]!=a && s[i]!=b)
              {
                 sum++;
               }
              else
              {
                   res.push_back(sum);
                   sum=0;
              }
          }
          sort(res.begin(),res.end());
          int m=res[res.size()-1];
          if(m>0)
          {
               cout<<m<<"\n";
          }
          else
          {
               cout<<-1<<"\n";
          }
          
     }
	// your code goes here
	return 0;
}

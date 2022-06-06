#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
     int t;
     cin>>t;
     while(t--)
     {
         ll n,x;
         cin>>n>>x;
         int a=0,b=0,c=0;
         if(x%3==0)
         {
              a=x/3;
              
         }
         else if(x%3==1)
         {
              a=a+(x/3)+1;
              b=b+2;
         }
         else if(x%3==2)
         {
              a=a+(x/3)+1;
              b++;
         }
         if(a+b<=n)
         {
              cout<<"yes\n";
              cout<<a<<" "<<b<<" "<<n-(a+b)<<"\n";
         }
         else
         {
              cout<<"no\n";
         }
         
         
     }
	// your code goes here
	return 0;
}

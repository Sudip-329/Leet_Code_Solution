#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n;
cin>>n;
string s;
cin>>s;
int f=0,l=0;
for(int i=0; i<n; i++)
{
    if(s[i]=='B')
    {
        f = i;
        break;
    }
}
for(int i=n; i>=0; i--)
{
    if(s[i]=='B')
    {
        l = i;
        break;
    }
}
cout<<(l-f+1)<<endl;
}
}
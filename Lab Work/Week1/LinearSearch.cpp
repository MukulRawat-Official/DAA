/*
           ---------------------- LINEAR SEARCH --------------------
           T(n) = O(n)
*/

#include <iostream> 
using namespace std; 
int main()
{

int t,num; cin>>t; while(t--)
{
int n,c=0; cin>>n; int a[n];
for(int i=0;i<n;i++) cin>>a[i];
cin>>num;
for(int i=0;i<n;i++)
{
if(a[i]==num)
{
cout<<"Present "<<i+1<<endl; c=1;
break;
}
}
if(c==0)
cout<<"Not Present"<<endl;
}
}

/*OUTPUT:

1
8
34 35 65 31 25 89 64 30
89
Present 6
*/

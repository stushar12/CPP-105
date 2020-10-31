#include<iostream>
using namespace std;
int main()
 {
int p;
cin>>p;
while(p--)
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int res=arr[0],res1=0,res2=0;
        for(int i=1;i<n;i++)
        {
          res=res^arr[i];
        }


int s=res & ~(res-1);

for(int i=0;i<n;i++)
{
    if((arr[i]&s)!=0)
    res1=res1^arr[i];
    else
    res2=res2^arr[i];
}
cout<<res1<<" "<<res2<<endl;
}
}
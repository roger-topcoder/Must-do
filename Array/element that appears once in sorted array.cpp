/* Harshit Anand
    IIIT Allahabad*/
#include <bits/stdc++.h>
using namespace std;
#define  ll long long
#define fast_io ios::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    if(fopen("input.txt", "r"))
    {
        freopen("input.txt", "r", stdin);
        freopen("output1.txt","w",stdout);
    }
   int t; cin >> t;
   while(t--){
      int n;
      cin >> n;
      int a[n+1];
      for(int i=0;i<n;i++)
      {
        cin >> a[i];
      }
      int ans=0;
      for(int i=0;i<n;i++)
      {
        ans=ans^a[i];
      }
      cout << ans<< endl;
   }   
   return 0; 
}
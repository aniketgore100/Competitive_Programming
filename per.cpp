#include <bits/stdc++.h>
using namespace std;
#define endl ("\n")
#define pi (3.141592653589)
#define mod (100000007)
#define ll long long 
#define pb push_back
#define mp make_pair
#define ff first
#define ss second 
#define loop(i,n) for(int i=0; i<n; i++)
#define loop1(i,n) for(int i=1; i<=n; i++)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
       int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
   	cin>>a[i];
   } 
   int k;
   cin>>k;
   int b[k];
   map<int,int>m;
    for(int i=0;i<k;i++){
   	cin>>b[i];
   	m[b[i]]++;
   }
    for(int i=0;i<n;i++){
   	m[a[i]]++;
   	if(m[a[i]]==1)cout<<a[i]<<" ";
   } 
   cout<<endl;
   
    }
   
   return 0;
}

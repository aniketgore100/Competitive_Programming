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

void run(int arr[], int l, int r){
    while(l<=r){
        if(arr[l] < 0 && arr[r] < 0)
          l++;

        else if(arr[l] > 0 && arr[r] < 0){
            int temp = arr[l];
            arr[l] = arr[r];
            arr[r] = temp;
            l++; 
            r--; 
        }

        else if(arr[l] > 0 && arr[r] > 0)
            r--;
        

        else{
            l++;
            r--;
        }
    }
}

void display(int arr[], int n){
     loop(i, n){
       cout<<arr[i]<<" ";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

      int n;
      cin>>n;
      int arr[n];
      loop(i, n){
          cin>>arr[i];
      }

      run(arr, 0, n-1);
      display(arr, n);
   
   return 0;
}

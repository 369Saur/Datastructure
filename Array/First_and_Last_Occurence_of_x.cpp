//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    vector<int> ans;
    int s=0,e=n-1,mid;
        mid=s+(e-s)/2;
      
        while(s<=e){
            if(arr[mid]==x){
                ans.push_back(mid);
                e=mid-1;
            }
            else if(x>arr[mid]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        s=0;
        e=n-1;
        while(s<=e){
            if(arr[mid]==x){
                ans.push_back(mid);
                s=mid+1;
            }
            else if(x>arr[mid]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        if(ans.size()==0){
            return {-1,-1};
        }
        sort(ans.begin(),ans.end());
        return {ans[0],ans[ans.size()-1]};
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends

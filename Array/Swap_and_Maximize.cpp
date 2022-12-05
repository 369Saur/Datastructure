//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
long long int maxSum(int arr[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;++i)
			cin>>arr[i];
		cout<<maxSum(arr,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends


long long int maxSum(int arr[], int n)
{
    sort(arr,arr+n);
    vector<int> ans;
    for(int i=0,j=n-1;i<=j;i++,j--){
        ans.push_back(arr[i]);
        ans.push_back(arr[j]);
    }
    long long int sum = 0;
    for(int i=0;i<ans.size()-1;i++){
        sum+=abs(ans[i]-ans[i+1]);
    }
    sum+=abs(ans[0]-ans[n-1]);
    return sum;
    
}

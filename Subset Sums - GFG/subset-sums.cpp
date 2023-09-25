//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void static subsetSumsHelper(int ind, vector<int> &arr, int N, vector<int> &sumSet, int sum){
        if(ind==N){
            sumSet.push_back(sum);
            return;
        }
        subsetSumsHelper(ind+1, arr, N, sumSet, sum+arr[ind]);
        
        subsetSumsHelper(ind+1, arr, N, sumSet, sum);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> sumSet;
        subsetSumsHelper(0, arr, N, sumSet, 0);
        sort(sumSet.begin(), sumSet.end());
    
        return sumSet;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
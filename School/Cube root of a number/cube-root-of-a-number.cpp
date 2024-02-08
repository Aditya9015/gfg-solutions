//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int cubeRoot(int N) {int start=1, end=N, mid, ans;

        if(N<2)
        return N;
        
        if (N>1 && N<8)
        return 1;

        while (start<=end)
        {
            mid=start+(end-start)/2;

            if(mid*mid==N/mid)
            { 
                ans=mid;
                break;
            }

            else if(mid*mid<N/mid)
            {
                start=mid+1;
                ans=mid;
            }

            else 
            end=mid-1;

        }

        return ans;
    }
        // code here
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.cubeRoot(N) << endl;
    }
    return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string s, int n)
    {
        
         vector<int>upper(26,0);
        vector<int>lower(26,0);

        for(int i=0;i<s.size();i++)
        {
            if(s[i]-'A'<=26)
            {
                upper[s[i]-'A']++;
                s[i]='#';
            }
            
            else if(s[i]-'a'<=26)
            {
                lower[s[i]-'a']++;
                s[i]='*';

            }

        }
        string ans1,ans2;

        for(int i=0;i<26;i++)
        {
            char C='A'+i;
            while(upper[i])
           {
             ans1+=C;
            upper[i]--;
           }
        }

         for(int i=0;i<26;i++)
        {
            char c='a'+i;
            while(lower[i])
           {
             ans2+=c;
            lower[i]--;
           }
        }
        int j=0,k=0;

        for(int i=0;i<s.size();i++)
        {
    
            if(s[i]=='#')
            {
                s[i]=ans1[j];
                j++;
                
            }
            
            else if(s[i]=='*')
            {
                s[i]=ans2[k];
                k++;
                
            }
            
        }

        return s;

        
    
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends
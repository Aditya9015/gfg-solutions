//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    
        // Your code here
        
        
        void rotateclockwise(string &s)
        {
            char c=s[s.size()-1];
            char d=s[s.size()-2];
            int index=s.size()-3;
            
            while(index>=0)
           { 
               s[index+2]=s[index];
               
               index--;
           };
            
            s[0]=d;
            s[1]=c;
        }
        
        void rotateanticlockwise(string &s)
        {
            char c=s[0];
            char d=s[1];
            int index=2;
            
            while(index<s.size())
            {
                s[index-2]=s[index];
               
                index++;
            };
            
            s[s.size()-1]=d;
            s[s.size()-2]=c;
        }
        
    bool isRotated(string str1, string str2)
    
    {
        
        if(str1.size()!=str2.size())
        return 0;
        
        
        string clockwise,anticlockwise;
        
        clockwise=str1;
        rotateclockwise(clockwise);
        
        
        if(clockwise==str2)
        return 1;
        
        anticlockwise=str1;
        rotateanticlockwise(anticlockwise);
      
        
        if(anticlockwise==str2)
        return 1;
       
        return 0;
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends
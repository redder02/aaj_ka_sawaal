//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	string removeVowels(string s) 
	{
	    // Your code goes here
	    string s2 = "";
	    for(int i=0;i<s.length();i++)
	    {
	        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
	        {
	            
	        }
	        else
	        {
	            s2.push_back(s[i]);
	        }
	    }
	    return s2;
	}
};


   	

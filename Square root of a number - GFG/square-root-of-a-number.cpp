//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        long long left = 1;
        long long right = x/2;
        long long ans;
        
        if(x==1){
            return 1;
        }
        
        while(left<=right){
            long long mid = left+(right-left)/2;
            long long sqr = mid*mid;
            
            if(sqr>x){
                right = mid-1;
            }
            else if(sqr<x){
                ans = mid;
                left = mid+1;
            }
            else{
                return mid;
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends
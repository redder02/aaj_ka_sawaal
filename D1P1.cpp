//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> minAnd2ndMin(int a[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) 
            cin >> a[i];

        vector<int> ans = minAnd2ndMin(a, n);
        if (ans[0] == -1)
            cout << -1 << endl;
        else 
            cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<int> minAnd2ndMin(int a[], int n) {
    int si = sizeof(a)/4;
    vector<int> v ;
    if(n == 1 || n ==0)
    {
        v.push_back(-1);
        return v;
    }
    int k =0;
    sort(a,a+n);
    v.push_back(a[0]);
    //v.push_back(a[1]);
    for(int i =0;i<n;i++)
    {
        if(a[i]!= a[0])
        {
            v.push_back(a[i]);
            break;
        }
        if(a[i]==a[0])
            k++;
    }
    if(k == n)
    {   v[0] =-1;
        return v;
    }
    /*int smallest = INT_MAX;
    int ssm=INT_MAX-1;
    for(int i =0;i<n;i++)
    {
        if(a[i]<smallest)
        {
            //ssm = smallest;
            smallest = a[i];
            
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>smallest)
            ssm = a[i];
    }
    v.push_back(smallest);
    v.push_back(ssm);*/
    return v;
}

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    int x=0;
    int t=0;
    
    for(int i=0;i<n-1;i++)
        {
        for(int j=i+1;j<n;j++)
        {x=a[i]+a[j];
        if(x%k==0)
            t++;
        }}
    cout<<t;
        return 0;
}


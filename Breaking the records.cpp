#include <bits/stdc++.h>

using namespace std;



int main() {
    int max=0;
    int n;
    cin >> n;
    vector<int> s(n);
    cin>>s[0];
    int min=max=s[0];
    int p=0;
    int q=0;
    for(int s_i = 1; s_i < n; s_i++){
       cin >> s[s_i];
        if(s[s_i]>max)
            {
            max=s[s_i];
            p++;
        }
        if(s[s_i]<min)
            {
            min=s[s_i];
            q++;
        }
    }
   
    cout<<p<<" "<<q;
    return 0;
}


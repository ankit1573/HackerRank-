#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int c[5]={0};
    vector<int> types(n);
    for(int types_i = 0; types_i < n; types_i++){
       cin >> types[types_i];
        if(types[types_i]==1)c[0]++;
        if(types[types_i]==2)c[1]++;
        if(types[types_i]==3)c[2]++;
        if(types[types_i]==4)c[3]++;
        if(types[types_i]==5)c[4]++;
    }
    int max;
    max=c[0];
    for(int i=1;i<=4;i++)
        {
        if(c[i]>max)
            max=c[i];
    }
    if(max==c[0]){cout<<1;return 0;}
    if(max==c[1]){cout<<2;return 0;}
    if(max==c[2]){cout<<3;return 0;}
    if(max==c[3]){cout<<4;return 0;}
    if(max==c[4]){cout<<5;return 0;}

    
    return 0;
}

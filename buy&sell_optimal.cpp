#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin>>n;

    int a[n];
    int m = 0;

    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>m){
            m = a[i];
        }
    }

    int minval = m;
    int maxprofit =0;

    for(int i=0;i<n;i++){
        minval = min(minval, a[i]);
        maxprofit = max(maxprofit, a[i] - minval);
    }
    cout<<"Maxprofit is "<<maxprofit<<endl;
}

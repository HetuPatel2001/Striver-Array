#include <iostream>
using namespace std;
int main() {
    int n,a[100];
    int cursum = 0, maxsum = 0;

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        cursum += a[i];

        if (cursum < 0){
            cursum = 0;
        }
        maxsum = max(cursum,maxsum);
    }

    cout<<"The maximum subarray sum is "<<maxsum<<endl;

}

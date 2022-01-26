#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

    int a[n][n];

    for(int line=0;line<n;line++){
        for(int j=0;j<=line;j++){
            if(j == 0 || line == j){
                a[line][j] = 1;
            }
            else{
                a[line][j] = a[line-1][j-1] + a[line-1][j];
            }
            cout<<a[line][j]<<" ";
        }
        cout<<endl;
    }

}

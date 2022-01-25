#include <iostream>
using namespace std;
int main() {
    int r,c;
    cin>>r>>c;
    int a[r][c];
    int col0 = 1;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<r;i++){
        if(a[i][0] == 0){
            col0 = 0;
        }
        for(int j=1;j<c;j++){
            if(a[i][j] == 0){
                a[i][0] = 0;
                a[0][j] = 0;
            }
        }
    }

    for(int i=r-1;i>=0;i--){
        for(int j=c-1;j>=1;j--){
            if(a[i][0] == 0 || a[0][j] == 0){
                a[i][j] = 0;
            }
        }
        if(col0 == 0){
            a[i][0] = 0;
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }    
}

#include <iostream>
using namespace std;
int main() {
    int r,c;
    cin>>r>>c;
    int a[r][c];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j] == 0){

                int ind = i -1;
                while(ind >= 0){
                    if(a[ind][j] != 0){
                        a[ind][j] = -1;
                    }
                    ind--;
                }

                ind = i +1;
                while(ind < r){
                    if(a[ind][j] != 0){
                        a[ind][j] = -1;
                    }
                    ind++;
                }

                ind = j -1;
                while(ind >= 0){
                    if(a[i][ind] != 0){
                        a[i][ind] = -1;
                    }
                    ind--;
                }

                ind = j +1;
                while(ind < c){
                    if(a[i][ind] != 0){
                        a[i][ind] = -1;
                    }
                    ind++;
                }
            }
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j] <= 0){
                a[i][j] = 0;
            }
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

}

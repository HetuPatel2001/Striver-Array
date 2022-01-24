#include <iostream>
using namespace std;

int main()
{
  int a[100],i,j,k,n;
  int maxsum = 0,cursum = 0;
  int left=-1,right=-1;
  cin>>n;

  for(i=0;i<n;i++){
    cin>>a[i];
  }

  for(i=0;i<n;i++){
    for(j=i;j<n;j++){
      cursum = 0;
      for(k=i;k<=j;k++){
        cursum += a[k];
      }
      if(cursum>maxsum){
        maxsum = cursum;
        left = i;
        right = j;
      }
    }
  }

  cout<<"The maximum subarray sum is "<<maxsum<<endl;
  for(k=left;k<=right;k++){
    cout<<a[k]<<",";
  }

  return 0;
}

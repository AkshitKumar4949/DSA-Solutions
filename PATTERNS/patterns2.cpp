#include <bits/stdc++.h>
using namespace std;
void hollowDiamond(int a){
  for(int i=0;i<a;i++){
    for(int i=0;i<a-1;i++){
      cout<<" ";
    }
  }
}
int main(){
  int testCases;
  cin>>testCases;
  for(int i=0;i<testCases;i++){
    int input;
    cin>>input;
    hollowDiamond(input);
  }
}
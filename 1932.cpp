#include<iostream>
using namespace std;
int Max(int a, int b){
  if (a>b) return a;
  else return b;
}
int main(){
  int line_num, max=0;
  int val[501][501];
  cin >> line_num;
  for (int i = 0 ; i < line_num ; i++ ){
    for (int j = 0 ; j <= i ; j++ ){
      cin >> val[i][j] ;
      if ( j == 0 ) val[i][j] += val[i-1][j];
      else if ( j == i ) val[i][j] += val[i-1][j-1];
      else val[i][j] += Max( val[i-1][j-1], val[i-1][j] ) ;
      if (max < val[i][j]) max=val[i][j];
    }
  }
  cout<<max<<endl;
}

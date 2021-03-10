#include <iostream>

using namespace std;

int aprt[15][15]={0}; // 문제에서 아파트의 범위를 14x14로 제한했음
// 모든 호에 사는 사람을 구해놓고 입력 받음
int main()
{
  for(int j=0;j<15;j++) // 0층에 있는 사람 구함
  {
    aprt[0][j]=j+1;
  }
  for(int a=1;a<15;a++) // 1층부터 14층까지
  {
    for(int b=0;b<15;b++) // 0호부터 14호까지
    {
      for(int c=0;c<=b;c++) // 어느 호에 몇 명이 사는지 계산
      {
        aprt[a][b]+=aprt[a-1][c];
      }
    }
  }
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    int k,n;
    cin >> k;
    cin >> n;  
    cout << aprt[k][n-1]<<"\n"; // 출력
  }
}

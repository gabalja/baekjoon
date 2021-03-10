#include <iostream>

using namespace std;

int main()
{
  int x;  // 입력
  cin>>x;
  int count=0;  // 지그재그의 순서
  while(x>0)  // x = 떨어져 있는 거리
  {
    count++;
    x-=count;
  }
  if(count%2==0)  // 짝수면 분자가 증가
  {
    cout << count+x << "/" << 1-x;
  }
  else  // 홀수면 분모가 증가
  {
    cout << 1-x << "/" << count +x;
  }
}

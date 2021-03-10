#include <iostream>

using namespace std;

int main()
{
  int n;  // 입력
  cin >> n; 
  int result=0; // 출력
  int round=0;  // 바퀴 수
  int maxroom=1;  // round 바퀴에서의 숫자가 가장 큰 방
  while(1)
  {
    maxroom += 6*round;  // round마다 maxroom 구하기
    if(maxroom>=n)  // n이 maxroom이하일 때 해당 round를 구한다
    {
      result=round+1; // 끝 방도 세줘야 하므로 +1
      break;
    }
    round++;
  }
  cout << result;
}

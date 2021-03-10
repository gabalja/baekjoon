#include <iostream>

using namespace std;

int main()
{
  int input[3]; // 입력
  for(int i=0;i<3;i++)
  {
    cin >> input[i];
  }
  int day=(input[2]-input[0])/(input[0]-input[1]);  // 마지막 날 전까지 소요되는 날들
  if(((input[2]-input[0])%(input[0]-input[1]))) // day가 정수가 아니라면 하루 더 써야 함
  {
    day+=1;
  }
  cout << day +1; // 마지막 날 더하기
}

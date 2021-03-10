#include <iostream>

using namespace std;

int main()
{
  int nums[3];	// 입력받는 비용
  for(int i=0;i<3;i++)	// 입력
  {
    cin >> nums[i];	
  }
  if(nums[1]>=nums[2])	// 가변 비용>=판매 비용, 즉 손익분기점이 존재하지 않을 때
  {
    cout << -1;
  }
  else
  {
    cout << (nums[0]/(nums[2]-nums[1]))+1;	// 손익분기점=고정비용/(판매비용-가변비용) 
    						// 이익이 발생하려면 +1을 해줘야 함
  }
}

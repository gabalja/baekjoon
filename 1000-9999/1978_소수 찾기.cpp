#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int t;
  scanf("%d",&t);
  int innum[101]; // 입력
  for(int i=0;i<t;i++)
  {
    cin >> innum[i];
  }
  // nums의 n번째 요소가 0이면 n은 소수가 아님
  int nums[1001]; // 소수를 구하기 위한 것
  for(int j=2;j<1001;j++)
  {
    nums[j]=j;
  }
  nums[0]=0;
  for(int k=2;k<1001;k++)
  {
    if(nums[k]==0) continue;  // 소수가 아니면 넘어감
    for(int l=2*k;l<1001;l+=k)  // k의 배수는 소수가 아니다
    {
      nums[l]=0;
    }
  }
  int count=0;  // 소수 개수
  for(int h=0;h<t;h++)
  {
    if(nums[innum[h]]!=0) count+=1;
  }
  printf("%d",count);
}

#include <iostream>

using namespace std;

const int range=1000001;

int main()
{
  int m,n;
  scanf("%d %d",&m,&n);
  int nums[range]={0,};
  for(int j=2;j<range;j++)
  {
    nums[j]=j;
  }
  for(int k=2;k<range;k++)  // 에라토스테네스의 체
  {
    if(nums[k]==0) continue;
    for(int l=2*k;l<range;l+=k)
    {
      nums[l]=0;
    }
  }
  for(int h=m;h<=n;h++) // 출력
  {
    if(nums[h]!=0)
    {
      printf("%d\n",nums[h]);
    }
  }
}

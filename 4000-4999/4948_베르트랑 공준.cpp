#include <iostream>

using namespace std;

const int range=123457; // 문제 범위

int main()
{
  int nums[2*range]={0,};
  for(int j=2;j<2*range;j++)
  {
    nums[j]=j;
  }
  for(int k=2;k<2*range;k++)  // 에라토스테네스의 체
  {
    if(nums[k]==0) continue;
    for(int l=2*k;l<2*range;l+=k)
    {
      nums[l]=0;
    }
  }
  while(1)
  {
    int n;
    scanf("%d",&n);
    if(n==0) break;
    int count =0;
    for(int h=n+1;h<=2*n;h++)
    {
      if(nums[h]!=0)
      {
        count+=1;
      }
    }
    printf("%d\n",count);
  }
}

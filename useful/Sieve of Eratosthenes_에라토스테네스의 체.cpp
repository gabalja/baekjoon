// 에라토스테네스의 체 

#include <iostream>
#define maxNum 10000 

int nums[maxNum]={0,};
for(int k=2;k<maxNum;k++)
{
  if(nums[k]==0) continue;
  for(int n=2*k;n<maxNum;n+=k)
  {
    nums[n]=0;
  }
}

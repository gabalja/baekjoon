#include <iostream>
#include <cmath>

using namespace std;

long solve(long a,long b)
{
  long dis=b-a; // 지점이 중요한 게 아니라 지점 간 거리만 있으면 됨
  long long j=1;
  while(j*j<=dis) // 제곱수
  {
    j++;
  }
  j--;
  long long rem=dis-j*j;  // 임시 변수
  rem=(long long)ceil((double)rem/(double)j);
  return 2*j-1+rem; // 최종 출력
}

int main()
{
  int t;
  scanf("%d",&t);
  for(int i=0;i<t;i++)
  {
    long x,y;
    scanf("%ld %ld",&x,&y);
    printf("%ld\n",solve(x,y));
  }
}

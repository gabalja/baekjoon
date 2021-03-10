#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
  int t1,t2,t3;
  while(1)
  {
    scanf("%d %d %d",&t1,&t2,&t3);
    if(t1==0&&t2==0&&t3==0) break; // 마지막줄
    if(t1*t1==t2*t2+t3*t3) // 직각삼각형일 경우
    {
      printf("right\n");
    }
    else if (t2*t2==t1*t1+t3*t3) // 직각삼각형일 경우
    {
      printf("right\n");
    }
    else if (t3*t3==t2*t2+t1*t1) // 직각삼각형일 경우
    {
      printf("right\n");
    }
    else
    {
      printf("wrong\n");
    }
  }
}

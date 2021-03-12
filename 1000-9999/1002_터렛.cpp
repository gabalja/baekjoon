#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
  int t;
  scanf("%d",&t);
  while(t!=0)
  {
    int count=0;
    int x1,y1,r1,x2,y2,r2;
    scanf("%d %d %d %d %d %d",&x1,&y1,&r1,&x2,&y2,&r2);
    double dis=sqrt(pow(x1-x2,2)+pow((y1-y2),2));	// 조규현과 백승환 사이의 거리
    int rsum=r1+r2;	// 류재명과의 거리 합
    int rsub=(r1>r2)?r1-r2:r2-r1;	// 류재명과의 거리 차
    if(dis!=0)	// 
    {
      if(rsum==dis)
      {
        count++;
      }
      else if (rsub==dis)
      {
        count++;
      }
      else if (rsum<dis)
      {
        count+=0;
      }
      else if (dis<rsub)
      {
        count+=0;
      }
      else
      {
        count+=2;
      }
    }
    else
    {
      if(r1==r2)	// 가능한 위치가 무한대면
      {
        printf("-1\n");
        t--;
        continue;
      }
    }
    printf("%d\n",count);
    t--;
  }
}

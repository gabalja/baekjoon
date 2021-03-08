#include <iostream>

using namespace std;

int main()
{
  int x,y,w,h;
  scanf("%d %d %d %d",&x,&y,&w,&h); // 입력
  int l1,l2;
  l1=w-x; 
  l2=h-y;  
  int dis1=(l1>x)?x:l1; // 0부터 x까지의 거리와 x부터 w 까지의 거리 중 짧은 값 찾기
  int dis2=(l2>y)?y:l2; // 0부터 y까지의 거리와 y부터 h 까지의 거리 중 짧은 값 찾기
  int dis3=(dis1>dis2)?dis2:dis1; // 위에서 구한 두 값 중 짧은 값 찾기
  printf("%d",dis3);
}

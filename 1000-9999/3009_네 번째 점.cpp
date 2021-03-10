#include <iostream>

using namespace std;

int main()
{
  int x[3]; // x 좌표
  int y[3]; // y 좌표
  int rex,rey;
  for(int i=0;i<3;i++)
  {
    scanf("%d %d",&x[i],&y[i]);
  }
  // x 좌표를 경우를 나누어 구함
  if(x[0]==x[1])
  {
    rex=x[2];
  }
  else if (x[0]==x[2])
  {
    rex=x[1];
  }
  else
  {
    rex=x[0];
  }
  // y 좌표를 경우를 나누어 구함
  if(y[0]==y[1])
  {
    rey=y[2];
  }
  else if (y[0]==y[2])
  {
    rey=y[1];
  }
  else
  {
    rey=y[0];
  }
  printf("%d %d",rex,rey);
}

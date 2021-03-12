#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

const double pi = 3.1415926535897;

int main()
{
  int r;
  double eure;	// 유클리드
  double tare;	// 택시
  scanf("%d",&r);
  eure=pi*r*r;
  tare=double(r*r*2);	// 택시 기하학에서의 원은 유클리드에서의 원과 다름
  printf("%lf\n",eure);
  printf("%lf\n",tare);
}

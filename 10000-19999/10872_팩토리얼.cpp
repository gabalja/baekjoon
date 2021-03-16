#include <iostream>

using namespace std;

int sol(int a)
{
  if(a==1||a==0) return 1; // 0!의 값은 1
  return a*sol(a-1);
}

int main()
{
  int n;
  scanf("%d",&n);
  printf("%d",sol(n));
}

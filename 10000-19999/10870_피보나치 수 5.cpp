#include <iostream>

using namespace std;

int sol(int a)
{
  if(a==0) return 0;
  if(a==1) return 1;
  return sol(a-1)+sol(a-2);
}

int main()
{
  int n;
  scanf("%d",&n);
  printf("%d",sol(n));
}

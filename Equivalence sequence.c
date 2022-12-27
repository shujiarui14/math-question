#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
  int a,b,c;
  int n;
  int chose;
  int s;
  printf(" which the frist few\n");
  scanf("%d",&n);
  printf("please input the prime minster and the official\n");
  scanf("%d%d",&a,&b);
  c=a+(n-1)*b;
  printf("%d\n",c);
  printf("do you stil want work out s? (1/0)>:\n");
  printf("tips:the 1 represent ture ,the 0 represent false\n");
  scanf("%d\n",&chose);
  if(chose ==1)
  {
    int t;
    t=n*(n-1)*b;
    s =n*a+t/2;
    printf("%d\n",s);
    return s;
  }
  else
  {
    printf("ok\n");
  }
  return 0;

}
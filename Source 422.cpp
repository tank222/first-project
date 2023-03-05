#include<stdio.h>

int main()
{
  int n;
  int mas[100];
  printf("Kol elementov\n");
  scanf("%i",&n);
  for (int i=0;i<n;i++)
    {
  scanf("%i",&mas[i]);
      }
  for (int i=0;i<3;i++)
    {
    printf("%4i",mas[i]);
      }
  
}
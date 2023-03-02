#include<stdio.h>

int main()
{
  int a = 10;
  while(a!=7)
    {
    scanf("%i",&a);
    if(a%2==0)
    {
      printf("Ваше число,число делится на 2\n");
    }
    if(a%3==0)
    {
      printf("Ваше число делится на 3\n");
        
    }
    if(a>7)
    {
      printf("Загаданное число меньше.Пробуй еще.\n");
    }
      
    if(a==7)
    {
      printf("Вы угадали\n");
      break;
    }
    else
    {
      printf("Загаданное число больше. Пробуй еще.\n");
     }
      
      }
}
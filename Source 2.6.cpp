#include <iostream>

using namespace std;
int main()
{
  int d,m,y;
  printf("d=");
  scanf("%i",&d);
    printf("m=");
  scanf("%i",&m);
    printf("y=");
  scanf("%i",&y);
  
  while (y>12) y -=12;
    switch(y)
    {
    case 0:cout<<"Год обезьяны по восточному календарю.";break;
    case 1:cout<<"Год курицы по восточному календарю."; break;
    case 2: cout<<"Год собаки по восточному календарю." ; break;
    case 3: cout<<"Год свиньи по восточному календарю."; break;
    case 4: cout<<"Год крысы по восточному календарю."; break;
    case 5: cout<<"Год быка по восточному календарю."; break;
    case 6: cout<<"Год тигра по восточному календарю."; break;
    case 7: cout<<"Год кошки по восточному календарю."; break;
    case 8: cout<<"Год дракона по восточному календарю.";break;
    case 9: cout<<"Год змеи по восточному календарю."; break;
    case 10: cout<<"Год лошади по восточному календарю.";break;
    case 11: cout<<"Год козы по восточному календарю."; break;
    }
    
  if (y % 4 == 0)
    { if (y % 100 == 0) 
      { if (y % 400 == 0) cout << y << "Год високосный"; 
        else cout << y << " Год не високосный.";
      } 
      else cout << y << " Год високосный."; 
    } 
  else cout << y << " Год не високосный.";
  
  if ( (m == 3 && d >= 21) ||  (m == 4 && d <= 20) )
  {
		printf("Овен");	// Овен
  }
	else
	 if ( (m == 4 && d >= 21) ||  (m == 5 && d <= 20) )
   {
     printf("Телец");	// Телец
   }
	else
	if ( (m == 5 && d >= 21) ||  (m == 6 && d <= 21) )
   {
    printf("Близнецы");	// Близнецы
    }
	else
	if ( (m == 6 && d >= 22) || (m == 7 && d <= 22) )
  {
    printf("Рак");	// Рак
    }
	else
	if ( (m == 7 && d >= 23) ||  (m == 8 && d <= 23) )
  {
    printf("Лев");	// Лев
    }
	else
	if ( (m == 8 && d >= 24) ||  (m == 9 && d <= 23) )
  {
    printf("Дева");	// Дева
    }
	else
	if ( (m == 9 && d >= 24) ||  (m == 10 && d<= 22) )
  {
    printf("Весы");	// Весы
    }
	else
	if ( (m == 10 && d >= 23) ||  (m == 11 && d <= 21) )
    {
  printf("Скорпион");	// Скорпион
    }
	else
	if ( (m == 11 && d >= 23) ||  (m == 12 && d <= 21) )
  {
    printf("Стрелец");	// Стрелец
    }
	else
	if ( (m== 12 && d >= 22) ||  (m == 1 && d <= 20) )
  {
    printf("Козерог");	// Козерог
    }
	else
	if ( (m == 1 && d >= 21) ||  (m == 2 && d <= 19) )
  {
    printf("Водолей");	// Водолей
    }
	else
	if ( (m == 2 && d >= 20) || (m == 3 && d <= 20) )
  {
    printf("Рыбы");	// Рыбы
    }
    


  
}
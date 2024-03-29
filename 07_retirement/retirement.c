#include<stdio.h>
#include<stdlib.h>

struct _retire_info {
  int months;
  double contribution, rate_of_return;

};

typedef struct _retire_info retire_info;

double calculation(int startAge, double balance, retire_info info){

  int month, year;
  year = startAge / 12;
  month = startAge % 12;

  for(int i = info.months; i > 0; --i){
    printf("Age %3d month %2d you have $%.2lf\n", year, month, balance);
    balance = (1.0 + info.rate_of_return) * balance + info.contribution;
    if(++month == 12){
      ++year;
      month = 0;
    }
  }
    return balance;
}


void retirement (int startAge,    //in months
		 double initial, //initial savings in dollars
		 retire_info working, //info about working
		 retire_info retired) //info about being retired
{

  //working
  initial = calculation(startAge, initial, working);

  // retired
  calculation(startAge + working.months, initial, retired);
}


int main (void){
  
  retire_info working = {489, 1000, 0.045/12};
  retire_info retired = {384, -4000, 0.01/12};
  retirement(327, 21345, working, retired);

  return EXIT_SUCCESS;
}


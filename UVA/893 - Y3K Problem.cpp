#include<bits/stdc++.h>,
#include<ctype.h>
#include<string.h>


#define     sf      scanf
#define     pf      printf
#define     pb      push_back
#define     mp      make_pair
#define     DOS     10000000000
#define     nl      "\n"

using namespace std;


int getLeapYear(int year){
  if ( year%400 == 0)return 1;
  else if ( year%100 == 0)return 0;
  else if ( year%4 == 0 )return 1;
  return 0;
}
int getDaysInYear(int y){
    if(getLeapYear(y)){
        return 366;
    }return 365;
}
int getDaysInMonth(int m , int y){
    if(m == 11 || m == 4 || m == 6 || m == 9)
        return 30;
    if(m == 2 )
        return 28 + getLeapYear(y);
    return 31;
}


int main(){
    int togo, day , month , year;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);


    while(sf("%d%d%d%d",&togo,&day,&month,&year) && togo != 0 && year != 0 ){

         day+=togo;

         for(int i = 1 ; i < month ; i++){
            day+=getDaysInMonth(i,year);
         }
        month = 1;
         while(day > getDaysInYear(year)){
                day -= getDaysInYear(year);
                    year++;
        }

        while(day>getDaysInMonth(month,year)){
                day -= getDaysInMonth(month,year);
                month++;
                if(month>12){
                    year++;
                    month = 1;
                }
        }

        cout << day << " " << month << " " << year << nl;
    }
return 0;
}

















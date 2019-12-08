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
int getDaysInMonth(int m , int y){
    if(m == 11 || m == 4 || m == 6 || m == 9)
        return 30;
    if(m == 2 )
        return 28 + getLeapYear(y);
    return 31;
}
void printSign(int day , int months){
    string sign ;
     if ((day>=21 && months==1)  || (day<=19 && months==2)) sign = "aquarius";
     if ((day>=20 && months==2)  || (day<=20 && months==3))  sign = "pisces";
     if ((day>=21 && months==3)  || (day<=20 && months==4))  sign = "aries";
     if ((day>=21 && months==4)  || (day<=21 && months==5))  sign = "taurus";
     if ((day>=22 && months==5)  || (day<=21 && months==6))  sign = "gemini";
     if ((day>=22 && months==6)  || (day<=22 && months==7))  sign = "cancer";
     if ((day>=23 && months==7)  || (day<=21 && months==8))  sign = "leo";
     if ((day>=22 && months==8)  || (day<=23 && months==9))  sign = "virgo";
     if ((day>=24 && months==9)  || (day<=23 && months==10))  sign = "libra";
     if ((day>=24 && months==10) || (day<=22 && months==11))  sign = "scorpio";
     if ((day>=23 && months==11) || (day<=22 && months==12))  sign = "sagittarius";
     if ((day>=23 && months==12) || (day<=20 && months==1))   sign = "capricorn";
    cout << sign << nl ;
}

int main(){
    int t , kase = 1;
    sf("%d",&t);
    int day , month , year;

    while(t--){
        sf("%2d%2d%4d",&month,&day,&year);
        day+=(40*7);
        while(day>getDaysInMonth(month,year)){
                day -= getDaysInMonth(month,year);
                month++;
                if(month>12){
                    year++;
                    month = 1;
                }
        }
        pf("%d %02d/%02d/%d ",kase++,month,day,year);
        printSign(day,month);
    }
return 0;
}

















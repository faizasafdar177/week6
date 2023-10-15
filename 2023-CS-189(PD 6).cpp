Task1:
#include<iostream>
using namespace std;
string decideActivity(string tem,string humi);
main()
{string tem;
string humi;
cout<<"Enter temperature (warm or cold): ";
cin>>tem;
cout<<"Enter humidity (dry or humid): ";
cin>>humi;
string activity=decideActivity(tem,humi);
cout<<"Recommended activity: "<<activity;
}
string decideActivity(string tem,string humi)
{if(tem=="warm" && humi=="dry")
{string activity="Play tennis";
return activity;}
if(tem=="cold" && humi=="dry")
{string activity="Play basketball";
return activity;}
if(tem=="warm" && humi=="humid")
{string activity="Swim";
return activity;}
if(tem=="cold" && humi=="humid")
{string activity="Watch Tv";
return activity;}
}
task 2:
#include<iostream>
using namespace std;
float calculateAverage(float marksEnglish, float marksMaths, float
marksChemistry, float marksSocialScience, float marksBiology);
string calculateGrade(float average);
main(){
float marksEnglish,marksMaths, 
marksChemistry,marksSocialScience,marksBiology;
string name;
cout<<"Enter student name: ";
cin>>name;
cout<<"Enter marks for English: ";
cin>>marksEnglish;
cout<<"Enter marks for Maths: ";
cin>>marksMaths;
cout<<"Enter marks for Chemistry: ";
cin>>marksChemistry;
cout<<"Enter marks for Social Science: ";
cin>>marksSocialScience;
cout<<"Enter marks for Biology: ";
cin>>marksBiology;
float average = calculateAverage(marksEnglish, marksMaths,
marksChemistry, marksSocialScience, marksBiology);
calculateGrade(average);
}
float calculateAverage(float marksEnglish, float marksMaths, float
marksChemistry, float marksSocialScience, float marksBiology)
{string name;
cout<<"Student Name: ";
cin>>name;
float average=((marksEnglish+marksMaths+
marksChemistry+marksSocialScience+marksBiology)/500)*100;
cout<<"Percentage: "<<average<<"%";
return average;
}
string calculateGrade(float average)
{
if(average>=90)
{cout<<"Grade: A+";
}
else if(average>=80 && average<90)
{cout<<"Grade: A";
}
else if(average>=70 && average<80)
{cout<<"Grade: B+";
}
else if(average>=60 && average<70)
{cout<<"Grade: B";
}
else if(average>=50 && average<60)
{cout<<"Grade: C";
}
else if(average>=40 && average<50)
{cout<<"Grade: D";
}
else
{cout<<"Grade: F";
}
}
task3:
#include<iostream>
using namespace std;
string findZodiacSign(int day, string month);
main()
{
int day;
string month;
cout<<"Enter the day of birth: ";
cin>>day;
cout<<"Enter the month of birth(e.g.,January,February): ";
cin>>month;
string sign=findZodiacSign(day,month);
cout<<"Zodiac Sign: "<<sign;
}

string findZodiacSign(int day, string month)
{string sign;
if(month=="March" && day>=21 || month=="April" && day<=19)
{sign="Aries";
return sign;}
if(month=="April" && day>=20 || month=="May" && day<=20)
{sign="Taurus";
return sign;}
if(month=="May" && day>=21 || month=="June" && day<=20)
{sign="Germini";
return sign;}
if(month=="June" && day>=21 || month=="July" && day<=22)
{sign="Cancer";
return sign;}
if(month=="July" && day>=23 || month=="August" && day<=22)
{sign="Leo";
return sign;}
if(month=="August" && day>=23 || month=="September" && day<=22)
{sign="Virgo";
return sign;}
if(month=="September" && day>=23 || month=="October" && day<=22)
{sign="Libra";
return sign;}
if(month=="October" && day>=23 || month=="November" && day<=21)
{sign="Scorpio";
return sign;}
if(month=="November" && day>=22 || month=="December" && day<=21)
{sign="Sagittarius";
return sign;}
if(month=="December" && day>=22 || month=="January" && day<=19)
{sign="Capricorn";
return sign;}
if(month=="January" && day>=20 || month=="February" && day<=18)
{sign="Aquarius";
return sign;}
}

Task4:#include<iostream>
using namespace std;
float cellularCompany(char type,char time,int minutes);
string serviceType(char Type);
int main()
{
char type;
char time;
int minutes;
cout<<"Enter the service code(R/r for regular,P/p for premium): ";
cin>>type;
if(type!='r'&&type!='R'&&type!='p'&&type!='P')
{cout<<"error"<< endl;}
if(type=='P'||type=='p')
{
cout<<"Enter the time of the call(D/d for day,N/n for night): ";
cin>>time;
cout<<"Enter the number of minutes used: ";
cin>>minutes;
cout<<"Service Type: "<<serviceType(type)<<endl;

cout<<"Total Minutes Used: "<<minutes<< " minutes"<<endl;
cout<<"Amount Due: "<<"$"<<cellularCompany(type,time,minutes) <<endl;
}
 if(type == 'r' ||type =='R'){ 
cout<<"Enter the number of minutes used: ";
cin>>minutes;
cout<<"Service Type: "<<serviceType(type)<<endl;
cout<<"Total Minutes Used: " <<minutes<< " minutes"<<endl;
cout<<"Amount Due: "<<"$"<<cellularCompany(type,time,minutes)<<endl;
}}
float cellularCompany(char type ,char time, int minutes){
float due;
float mins = minutes - 50;
if((type == 'r'||type =='R') && minutes <= 50){
due = 10;
return due;}
if((type == 'r'||type =='R') && minutes > 50){
due = 10 + (mins * 0.20);
return due;}
if((type == 'p'||'P') && minutes <= 75 && (time =='d'||time =='D')){
due = 25.00 ;
return due;}
if((type == 'p'||'P') && minutes <= 100 && (time =='n'||time =='N')){
due = 25.00 ;
return due;}
if((type == 'p'||'P') && minutes > 75 && (time =='d'||time =='D')){
due = 25.00 + (mins * 0.10) ;
return due;}
if((type == 'p'||'P') && minutes > 100 && (time =='n'||time =='N')){
due = 25.00 + (mins * 0.05) ;
return due;}
}

string serviceType(char type){
if(type=='R' || type=='r')
{return "Regular";
}

if(type=='P' || type=='p')
{return "Premium";
}
}
Task 5:
#include<iostream>
using namespace std;
float calculateFruitPrice(string fruit,string day,double quantity)
{float price;
if(day=="Monday"||day=="Tuesday"||day=="Wednesday"||day=="Thursday"||day=="Friday")
{if(fruit=="banana")
{ price=2.50*quantity;}
if(fruit=="apple")
{price=1.20*quantity;}
if(fruit=="orange")
{price=0.85*quantity;}
if(fruit=="grapefruit")
{price=1.45*quantity;}
if(fruit=="kiwi")
{price=2.70*quantity;}
if(fruit=="pineapple")
{price=5.50*quantity;}
if(fruit=="grapes")
{price=3.85*quantity;}
return price;
}
if(day=="Saturday"||day=="Sunday")
{if(fruit=="banana")
{price=2.70*quantity;}
if(fruit=="apple")
{price=1.25*quantity;}
if(fruit=="orange")
{price=0.90*quantity;}
if(fruit=="grapefruit")
{price=1.60*quantity;}
if(fruit=="kiwi")
{price=3.00*quantity;}
if(fruit=="pineapple")
{price=5.60*quantity;}
if(fruit=="grapes")
{price=4.20*quantity;}
return price;}
else {cout<< "error";}
}

int main(){
string fruit;
float quantity;
string day;
cout<<"Name of fruit: ";
cin>>fruit;
cout<<"Quantity: ";
cin>>quantity;
cout<<"day of week: ";
cin>>day;
float price=calculateFruitPrice(fruit,day,quantity);
cout<<"Price: "<<price;
}
Task6:
#include<iostream>
using namespace std;
float calculateStudioPrice(string month,int days)
{float price1 ;
if(month == "June" && days <= 14){
price1= days * 75.20;}
if(month =="July" || month =="August"){
price1=days * 76;} 

if((month == "May" || month == "October") && (days > 7 && days <=14)){
 price1 = 50*days - ( 50 )* 0.05*days;
}

if((month == "May" || month == "October") && days > 14){
 price1 = 50*days - (( 50)*days * 0.30);
}

if((month == "June" || month == "September") && days > 14){
 price1 = 75.20*days - ( 0.20)*75.20*days;
}


return price1;
}
 
float calculateApartmentPrice(string month,int days)
{double price  ;
if(days <= 14 && month =="June"){
price=68.70 * days;}

if(days > 14){
if(month == "May"|| month == "October"){
price = 65*days - (0.10)*65*days;
}

if(month == "June"|| month == "September"){
price = 68.70*days - (68.70 *days)* 0.10;
}

if(month == "July"|| month == "August"){
price = 77*days- ( 77 *days)* 0.10;
}
}
return price;
}
 
main()
{
string month;
int days;
cout<<"Enter the month(May, June, August,September,October): ";
cin>>month;
cout<<"Enter the number of stays: ";
cin>>days;
cout<<"Apartment: "<<calculateApartmentPrice(month,days)<<"$."<<endl;
cout<<"Studio: "<<calculateStudioPrice(month,days)<<"$."<<endl;
}

Task7:
      #include <iostream>
#include <string>
using namespace std;
string checkStudentStatus(int extime , int arrivaltime);  
int main()
{
double exHour,exMinute,stdHour,stdMinute;
cout <<"Enter Exam Starting Time (hour): ";
cin >> exHour;
cout <<"Enter Exam Starting Time (minutes): ";
cin >>exMinute;
cout << "Enter Student hour of arrival: ";
cin >> stdHour;
cout << "Enter Student minutes of arrival: ";
cin >> stdMinute;

int extime=(exHour*60)+exMinute;
int arrivaltime=(stdHour*60)+stdMinute;
if((extime-arrivaltime)>=0 && (extime-arrivaltime)<30 )
{cout<< "On time"<<endl;
  }
if((arrivaltime-extime)>0){
cout<< "Late"<<endl;
}

if((extime-arrivaltime)>30){
cout<<  "Early"<<endl;
if((extime-arrivaltime)>0){
cout<< "Test: " <<extime-arrivaltime<<endl;     
        }}
string result= checkStudentStatus(extime,arrivaltime);
cout<<result<<endl;  
}
string checkStudentStatus(int extime , int arrivaltime){
if((extime-arrivaltime)==30){
return to_string(extime-arrivaltime) +" minutes before the start";
}
if((extime-arrivaltime)<30 && (extime-arrivaltime)>0){
return to_string(extime-arrivaltime) + " minutes before the start";
}
    
  	
if((arrivaltime-extime)<60 && (arrivaltime-extime)>0){
return to_string(arrivaltime-extime) +" minutes after the start";
        }
if((arrivaltime-extime)>=60){
int hour=(arrivaltime-extime)-60;
return "1:" + to_string(hour) + " hours after the start";
        }
  
if((extime-arrivaltime)<60 && (extime-arrivaltime)>0 ){
return to_string(extime-arrivaltime) +" minutes before the start";
        }
if((extime-arrivaltime)>=60 && (extime-arrivaltime)<120){
int hour=(extime-arrivaltime)-60;
return "1:" + to_string(hour) + " hours before the start";        }
if((extime-arrivaltime)>120 && (extime-arrivaltime)<180){
int hour=(extime-arrivaltime)-120;
return "2:" + to_string(hour) + " hours before the start";        }
if((extime-arrivaltime)>180){
int hour=(extime-arrivaltime)-180;
return "3:" + to_string(hour) + " hours before the start";        }
return "";
    }



Task8:
#include<iostream>
using namespace std;
int calculateVolleyballGames(string yearType, int holidays, int
hometownWeekends);
int main()
{
string yearType;
int holidays;
int hometownWeekends;
cout<<"Enter year type: ";
cin>>yearType;
cout<<"Enter number of holidays: ";
cin>>holidays;
cout<<"Enter number of weekends: ";
cin>>hometownWeekends;
int play=calculateVolleyballGames(yearType,holidays,
hometownWeekends);
cout<<play;
}
int calculateVolleyballGames(string yearType, int holidays, int
hometownWeekends)
{

int result=48-hometownWeekends;
float play=(holidays*(2.0/3.0))+(result*(3.0/4.0))+(48-result);


if(yearType=="leap")
{
 play=play+(play*0.15);
 }
return play;
}
Task9:
#include<iostream>
using namespace std;
string checkPointPosition(int h, int x, int y){
       if(x<0||x>3*h||y<0||y>3*h||y>4*h||(x==3*h && y>h)||(x<h && y>h)||(x>2*h && y>h))
       {return "Outside";}
       if((x == 0 || y== 0)|| (x == h && y == h) || (x==h && h < y < 4*h)||(x == 2*h && h <= y <= 4*h)||(x== 3*h && y <= h))15
       { return "Border";
       }
       else
        {return "Inside";
       }
       
       }



int main()
{
int x;
int y;
int h;
cout<<"Enter height: ";
cin>>h;
cout<<"Enter x coordinate: ";
cin>>x;
cout<<"Enter y coordinates: ";
cin>>y;
cout<<checkPointPosition(h,x,y)<<endl;
}

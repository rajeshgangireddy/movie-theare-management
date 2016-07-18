/*

******	   T H E A T H T R E   M A N A G E M E N T   P R O J E C T     ******
 Done By:
 G Rajesh

 12th Science 	2012

 Kasturba English Medium School
 Manjummel */

#include<iostream.h>     //For Basic Input/output Operations
#include<fstream.h>      //For File Handling Operations
#include<conio.h>        //For getch() & clrscr() Functions
#include<dos.h>          //For delay() function
#include<stdio.h>        //For gets(),puts(),remove()& rename().. functions
#include<string.h>       //For  strcmp() ,strcpy() Functions
#include<process.h>      //For Exit() Function
#include<time.h>         //For displaying time in user module
int mi=0;
int mj=10;
int ai=0;
int aj=11;
int ui=8;
int uj=9;
char ch,c1,c2,name[30];  //G L O B A L  V A R I A B L E S
int i,p,p1,r;	      // used throughout the program
long pos;
char aname[20],apass[20];
fstream fin,fout,file;        //G L O B A L  F I L E  P O I N T E R S

class admin              //Class Defined for Administration Module
{
public:
char mname[30];
void admn();
void result();
protected:
char mlang[20];
char mdes[50];
int mstars;
char mactors[30];
char mdirector[20];
float mprice;
char mcbfc[5];
char mtiming[20];
private:
void tcrun();
void edit();
void modify();
void del();
void add();
void settings();
public:
void seatmanage(int);
void amtcal(int);
int mseats;
int tick;
admin()                  // Constructor for class admin
{
strcpy(mname,"<no name>");
strcpy(mlang,"<no info>");
strcpy(mdes,"<no info>");
strcpy(mactors,"<no info>");
strcpy(mdirector,"<no info>");
strcpy(mcbfc,"n/a");
mstars=0;
tick=0;
mseats=0;
}
void showseats()
{
if(mseats>0)
cout<<mseats;
else
{
textcolor(0);cout<<"HOUSE FULL!!!";
}
}
}a;

class user:protected admin //Class for User Module Protectedly Inherited from class Admin
{
private:
char uname[30];
int uage;
int uno;
char uphone[20];
int utc;
char mov[30];
public:
void showbooked();
void tcallote();
void umenu();
void uedit();
void ucancel();
void ubooking();
user()
{
strcpy(uname,"empty ");
uage=0;
uno=0;
utc=0;
strcpy(uphone,"n/a");
}
protected:
}u;

void main()
{
clrscr();
int j,k;
gotoxy(24,19);
cout<<"L O A D I N G  P R O J E C T  F I L E "<<endl;
gotoxy(28,22);
cout<<"___________";
j=28;
for(int i=0;i<101;i++)
{
gotoxy(41,22);
delay(50);
cout<<i<<"% completed"<<endl;
if(i%10==0)
{
gotoxy(j,22);
j++;
cout<<char(16);
}
}
cout<<"\n\n\t\t\t\tSUCCESSFULLY LOADED" <<endl;
c1='s';
while(c1=='s'||c1=='S')
{
delay(500);
textbackground(mi);
textcolor(mj);
clrscr();
int i,x=1;
cout<<"ษ";
delay(100);
for(i=0;i<78;i++)
{
delay(30);
gotoxy(2+i,1);cputs("อ");
if(i<20)
{
gotoxy(1,i+2);cputs("บ");
}
if(i==20)
{
gotoxy(1,22);cputs("ศ");
}
if(i>20)
{
gotoxy(x+1,22);cputs("อ");
x++;
}
}
delay(50);
gotoxy(80,1);cputs("ป");
for(i=0;i<22;i++)
{
delay(30);
if(i<20)
{
gotoxy(80,2+i);cputs("บ");
}
gotoxy(x+i,22);cputs("อ");
if(i==19)
{
gotoxy(80,22);cputs("ผ") ;
}
}
delay(700);
textcolor(14);
gotoxy(2,2);
cputs("ษ");
for(i=0;i<76;i++)
{
cputs("อ");
}
for(i=3;i<21;i++)
{
gotoxy(2,i);cputs("บ");
}
gotoxy(2,21);cputs("ศ");
for(i=3;i<79;i++)
{
gotoxy(i,21);cputs("อ");
}
cputs("ผ") ;
for(i=20;i>2;i--)
{
gotoxy(79,i);cputs("บ");
}
gotoxy(79,2);
cputs("ป");
delay(700);
textcolor(12);
gotoxy(3,3);
cputs("ษ");
for(i=0;i<75;i++)
{
cputs("อ");
}
for(i=4;i<21;i++)
{
gotoxy(3,i);
cputs("บ");
}
gotoxy(3,20);
cputs("ศ");
for(i=4;i<78;i++)
{
gotoxy(i,20);
cputs("อ");
}
cputs("ผ") ;
for(i=19;i>3;i--)
{
gotoxy(78,i);cputs("บ");
}
gotoxy(78,3);
cputs("ป");
x=59;int y=10;
char c=char(15);
for(i=10;i<60;i++)
{
delay(50);
gotoxy(i,10);cout<<c;
gotoxy(i-1,10);cout<<" ";
}
for(i=0;i<6;i++)
{
delay(100);
gotoxy((x-i),(y-i));cout<<c;
gotoxy((x+i),(y+i));cout<<c;
gotoxy((x+i),(y-i));cout<<c;
gotoxy((x-i),(y+i));cout<<c;
}
int m=x+5,n=x-5;
for(i=0;i<40;i++)
{
delay(60);
if(i<13)
{
gotoxy(m+i,y+5);cout<<c;
gotoxy(m+i,y-5);cout<<c;
}
gotoxy((n-i),y+5);cout<<c;
gotoxy((n-i),y-5);cout<<c;
}
delay(200);
gotoxy(27,8);for(i=0;i<5;i++)cout<<c;
gotoxy(27,9);cout<<"  "<<c;
gotoxy(27,10);cout<<"  "<<c;
gotoxy(27,11);cout<<"  "<<c;
gotoxy(27,12);for(i=0;i<5;i++)cout<<c;
delay(200);
gotoxy(37,8);cout<<c<<"     "<<c;
gotoxy(37,9);cout<<c<<" "<<c<<" "<<c<<" "<<c;
gotoxy(37,10);cout<<c<<"  "<<c<<"  "<<c;
gotoxy(37,11);cout<<c<<"     "<<c;
gotoxy(37,12);cout<<c<<"     "<<c;
delay(200);
gotoxy(46,8); cout<<"    "<<c;
gotoxy(46,9); cout<<"   "<<c<<" "<<c;
gotoxy(46,10);cout<<"  "<<c<<c<<c<<c<<c;
gotoxy(46,11);cout<<" "<<c<<"     "<<c;
gotoxy(46,12);cout<<c<<"       "<<c;
char temp[]={"IMAX::ENTERTAINMENT UNLIMITED"};
x=46;
c=char(2);
for(i=0;i<24;i++)
{
delay(100);
gotoxy(x-i,16);cout<<c<<temp<<c;
gotoxy((x-i+31),16);cout<<" ";
}
delay(40);gotoxy(31,17);cout<<"PHC-2,Banglore"<<endl;
delay(40);gotoxy(4,19);cout<<"www.etunlimited.com";
gotoxy(65,19);cout<<"Ph:080-623311"<<endl;
m=10;
y=47;
for(i=0;i<34;i++)
{
m++;
textcolor(m+8);
textbackground(0);
if(m==17)m=1;
if(i%2==0)
y--;
delay(90);
gotoxy(33,y);  cputs("  PRESS ENTER ");
delay(100);
gotoxy(33,y+1);cputs("              ");
}
ch=getch();
if(ch!='\r')
goto ex;
textcolor(5);
clrscr();
m=30,n=2,x=30,y=20;
char admins[]={"TO LOGIN AS ADMIN \"A\""};
char users[]={"TO ENTER AS USER  \"U\""};
for(i=0;users[i]!='\0';i++)
{
x++;
m++;
y=20;
n=2;
for(int j=0;j<8;j++)
{
delay(30);
gotoxy(x,y);
cout<<users[i];
y--;
gotoxy(x,y+2);cout<<" ";
gotoxy(m,n);cout<<admins[i];
n++;
gotoxy(m,n-2);cout<<" ";
}
cout<<" ";
}
cout<<"\n\n\n\t\t\t\t\t";
ch=getche();
if(ch=='a'||ch=='A')
{
a.admn();
}
else if(ch=='u'||ch=='U')
{
u.umenu();
}
else
{
cout<<"\nWRONG CHOICE"<<endl;
goto v;
}
p1=0;
v:cout<<"\nPress \"e\" to exit"<<endl;
cout<<"Press \"s\" to switch to user or admin mode"<<endl;
c1=getche();
}
if(c1=='e'||c1=='E')    //EXIT Module
{
ex:textbackground(0);
textcolor(13);
clrscr();
int x=1,y=1;
clrscr();
ch=char(2);
for(i=0;i<80;i++)
{
gotoxy(x,1);
delay(20);
cout<<ch;
gotoxy(x,20);
cout<<ch;
gotoxy(80-x,1) ;
delay(20);
cout<<ch;
gotoxy(80-x,20);
cout<<ch;
x++;
if(i<20)
{
delay(20);
gotoxy(1,y);
cout<<ch;
gotoxy(80,y);
cout<<ch;
y++;
}
}
gotoxy(1,21);
cout<<" ";
gotoxy(2,21);
cout<<" ";
gotoxy(16,4);
int j=28;
char temp[40]={"THEATRE MANAG"};
char tem[20]= {"TCEJORP TNEME"};
for(j=0,i=0;i<13;i++)
{
delay(100);
gotoxy(30+i,4);
cout <<temp[i];
gotoxy(55-i,4);
cout<<tem[j];
j++;
}
gotoxy(3,10);
cout<<"DONE BY ";
gotoxy(50,13);
strcpy(temp,"G RAJESH");
x=50;
for(i=0;i<40;i++)
{
x--;
delay(50);
gotoxy(x,13);
cout<<temp;
gotoxy(x+8,13)  ;
cout<<" " ;
}
delay(800);
gotoxy(10,14);
cout<<"12th Science ";
delay(100);
gotoxy(10,15);
cout<<"\\/\\/\\/\\/\\/\\/\\/\\";
gotoxy(10,17);
delay(600);
cout<<"KASTURBA ENGLISH MEDIUM SCHOOL, MANJUMMEL";
delay(1000);
for(i=0;i<110;i++)
{
textcolor(i);
delay(50);
gotoxy(2,21);cout<<endl;
cout<<"\n";
cputs("\n             _/_/_/_/_/  _/                           _/     ");cout<<endl;
cputs("                 _/      _/_/_/      _/_/_/  _/_/_/   _/  _/ ");cout<<endl;
cputs("                 _/      _/   _/   _/    _/  _/   _/  _/_/    ");cout<<endl;
cputs("                 _/      _/   _/   _/    _/  _/   _/  _/ _/  ");cout<<endl;
cputs("                 _/      _/   _/    _/_/_/   _/   _/  _/  _/");cout<<endl;
cout<<"\n\n\n";
cputs("                    _/   _/                     ");cout<<endl;
cputs("                     _/ _/  _/_/_/_/  _/    _/  ");cout<<endl;
cputs("                      _/    _/    _/  _/    _/  ");cout<<endl;
cputs("                      _/    _/    _/  _/    _/  ");cout<<endl;
cputs("                      _/    _/_/_/_/  _/_/_/_/  ");cout<<endl;
}
cout<<"\n\n\n Press any key to exit"<<endl;
getch();
cout<<"\n Program Teriminated"<<endl;
delay(500);
exit(0);
}
getch();
}

void admin::admn()
{
char temp[]={"\n\n\t\tW E L C O M E   T O   I M A X   D A T A B A S E "};
clrscr();
textcolor(4);
textbackground(0);
clrscr();
int j;
if(p1==1)
goto l;
for(i=0;i<3;i++)             //Checking Password & User Name Combination
{
delay(300);
clrscr();
cout<<"\n\t\tAUTHENTICATION REQUIRED"<<endl;
cout<<"\nUserName: "<<endl;
cout<<"PassWord: "<<endl;
gotoxy(10,4);
gets(aname);
gotoxy(10,5);
for(j=0;j<20;j++)
{
apass[j]=getch();
if(apass[j]=='\r')
break;
cout<<"*";
}
apass[j]='\0';
cout<<"\nChecking Username and Password  Combination ";
for(int che=0;che<7;che++)
{
delay(300);cout<<".";
}
if((strcmp(aname,"raj32")==0))
{
if((strcmp(apass,"rgr2511")==0) )
{
p=1;
break;
}
else
{
 p=0;
 cout<<"\a\nWrong User Name and Pass Word combination"<<endl;
 if(i==2)
 {
 cout<<"\nAUTHENTICATION FAILED!!!"<<endl;
 cout<<"\nEXITING"<<endl;
 delay(900);
 exit(0);
 }
 else
 {
 cout<<"No. of chances remaining: "<<(2-i)<<endl;
 delay(900);
 }
}
}
}
if(p==1)
{
clrscr();
textcolor(10);
clrscr();
gotoxy(20,20);
cout<<" L O G I N   S U C C E S S F U L  !!"<<endl; //Welcome Screen For Admin
delay(1000);
textcolor(14);
clrscr();
gotoxy(1,20);
for(i=0;i<52;i++)
{
delay(70);
cout<<temp[i];
}
delay(800);
l:
if(i==3)
goto ex;
textcolor(aj);
textbackground(ai);
clrscr();
cout<<"\n\t                           ADMIN'S MENU\n"<<endl;
delay(500);
gotoxy(46,7);
cout<<"\"T\" TICKET initialising";
delay(500);
gotoxy(52,13);
cout<<"\"A\"";
cout<<" MOVIES running";
delay(500);
gotoxy(47,19);
cout<<"\"M\"";
cout<<" MODIFY menu ";
gotoxy(20,19);
delay(500);
cout<<"colour SETTINGS \"S\"";
gotoxy(16,13);
delay(500);
cout<<"BOOKING list \"B\"";
gotoxy(21,7);
delay(500);
cout<<"EXIT as ADMIN ";
cout<<"\"E\"";
gotoxy(43,13);
c1=getche();
cout<<endl;
clrscr();
if(c1=='t'||c1=='T')
{
a.tcrun();
}
else if(c1=='s'||c1=='S')
{
settings();
}
else if(c1=='a'||c1=='A')
{
cout<<"\nThe Movies Running In IMAX are :"<<endl;
delay(800);
clrscr();
fout.open("mt.txt",ios::in);
while(fout.read((char*)&a,sizeof(a)))
{
a.result();
}
fout.close();
for(i=0;i<80;i++)
cout<<"=";
cout<<"\n\n"<<endl;
i=0;
cout<<"Press Any Key To Continue"<<endl;
getch();
cout<<"\n\nRedirecting To ADMIN'S MENU "<<endl;
p1=1;
a.admn();
}
else if(c1=='m'||c1=='M')
{
a.modify();
}
else if(c1=='E'||c1=='e')
{
ex:goto g;
}
else if(c1=='b'||c1=='B')
{
cout<<"\nBooking List "<<endl;
u.showbooked();
a.admn();
}
else
{
cout<<"Wrong Choice \nEnter Again"<<endl;
p1=1;
admn();
delay(200);
g:cout<<"Returning ....."<<char(24)<<endl;
delay(1800);
clrscr();
}
}
}
void admin::modify()
{
c1='y';
while(c1=='y'||c1=='Y')
{
clrscr();
delay(400);
cout<<"\t     \t\t\tMODIFYING MENU"<<endl<<endl;
delay(400);
cout<<"\t\t\t\t";
cout<<" ADD movies "<<endl;
cout<<"\t\t\t\t";
cout<<"   \" A \""<<endl;
delay(400);
cout<<endl;
cout<<"\t\t\t\t\t\t\"D\" DELETE movies " <<endl;
cout<<endl;
delay(400);
cout<<endl;
cout<<"\t\t\t\t";
cout<<"   \" M \" "<<endl;
cout<<"\t\t\t\t";
cout<<" EDIT movies "<<endl;
delay(400);
gotoxy(12,6);
cout<<"ADMIN'S menu \"E\""<<endl;
gotoxy(38,6);
c2=getche();

gotoxy(30,15);
if(c2=='a'||c2=='A')
{
add();
}
else if(c2=='m'||c2=='M')
{
edit();
}
else if(c2=='d'||c2=='D')
{
del();
}
else if(c2=='e'||c2=='E')
{
goto mex;
}
else
{
cout<<"Wrong Choice"<<endl;
}
cout<<"\nWant to continue modify"<<endl;
c1=getche();
}
if(c1=='n'||c1=='N')
{
mex:p1=1;
admn();
}
}
void admin::settings()
{
i=0;
int bk,tb;
y:cout<<"Customize The Background Colour and Text Colour "<<endl;
cout<<"Press 1 for Main Menu (Welcome Screen ) settings"<<endl;
cout<<"Press 2 for Admin Menu settings"<<endl;
cout<<"Press 3 for User Menu settings "<<endl;
cout<<"Press 4 to return to admin's menu"<<endl;
cin>>i;;
if(i>4)
{
cout<<"WRONG CHOICE "<<endl;
cout<<"Enter Again"<<endl;
goto y;
}
if(i==4)
{
cout<<"Returning "<<char(24)<<endl;
delay(400);
i=0;
p1=1;
p=0;
goto d;
}
cout<<"\t\tษออออออออออออออออออออออออป "<<endl;
cout<<"\t\tบnumber:color            บ "<<endl;
cout<<"\t\tบ		         บ "<<endl;
cout<<"\t\tบ 0    =   Black         บ "<<endl;
cout<<"\t\tบ 1    =   Blue          บ "<<endl;
cout<<"\t\tบ 2    =   Green         บ "<<endl;
cout<<"\t\tบ 3    =   Cyan          บ "<<endl;
cout<<"\t\tบ 4    =   Red           บ "<<endl;
cout<<"\t\tบ 5    =   Purple        บ "<<endl;
cout<<"\t\tบ 6    =   Yellow        บ "<<endl;
cout<<"\t\tบ 7    =   White         บ "<<endl;
cout<<"\t\tศออออออออออออออออออออออออผ "<<endl;
cout<<"\nEnter the colour Number for Background colour ";
cin>>bk;
if(bk>7)bk=bk-1;
cout<<"\nEnter The Colour Number for Text Colour       ";
cin>>tb;
cout<<endl<<endl;
tb=tb+8;
switch(i)
{
case 1:
mi=bk;
mj=tb;
break;
case 2:
ai=bk;
aj=tb;
break;
case 3:
ui=bk;
uj=tb;
break;
}
cout<<" Applying Settings ";
for(i=0;i<6;i++)
{
delay(500);
cout<<".";
}
cout<<"\n Settings Have Been Applied"<<endl;
delay(700);
cout<<" Note: You Need To Exit As Admin"<<endl;
getch();
p1=1;
i=3;
d:a.admn();
}
void admin::add()     //For Adding Movies into The List
{
cout<<"ADDING MOVIES "<<endl;
fout.open("mt.txt",ios::out|ios::app);
do
{
cout<<"\nMovie Name "<<endl;
gets(mname);
cout<<"Language "<<endl;
gets(mlang);
cout<<"Rating "<<endl;
cin>>mstars;
cout<<"Description "<<endl;
gets(mdes);
cout<<"Actors "<<endl;
gets(mactors);
cout<<"Director "<<endl;
gets(mdirector);
cout<<"CBFC rating "<<endl;
gets(mcbfc);
cout<<"Timings"<<endl;
gets(mtiming);
cout<<"Price "<<endl;
cin>>mprice;
cout<<"Seats "<<endl;
cin>>mseats;
fout.write((char*)&a,sizeof(a));
cout<<"\nDetails Entered Successfully"<<endl;
cout<<"\nWant to add more movies(y/n)"<<endl;
c2=getche();
}
while(c2=='y'||c2=='Y');
fout.close();
}
void admin::edit()    //For Editing The Added Movies
{
p=0;
r=0;
float pos;
fin.open("mt.txt",ios::in);
fin.seekg(0);
i=0;
cout<<"Movies In IMAX :"<<endl;
while(fin.read((char*)&a,sizeof(a)))
{
delay(200);
i++;
cout<<i<<" ";
cout<<char(14);
cout<<" "<<mname<<endl;
}
fin.close();
r=0;
fin.open("mt.txt",ios::in|ios::out);
char name[20];
int nrating,nos;
float nprice;
char nname[20],ntim[20],ndes[10];
cout<<"\n"<<endl;
cout<<"Editing "<<endl;
cout<<"Enter The  Movie Number To be Edited(0 to Cancel Editting)"<<endl;
cin>>r;
if(r==0)
goto k;
i=0;
fin.seekp(0);
while(fin)
{
i++;
pos=fin.tellg();
fin.read((char*)&a,sizeof(a));
if(i==r)
{
cout<<"Movie Found\n Details";
for(int h=0;h<6;h++)
{
delay(90);
cout<<".";
}
clrscr();
result();
cout<<"Now Edit"<<endl;
cout<<"\n\nPress ! in any field to retain the old detail"<<endl;
cout<<"Enter new Name: ";
gets(nname);
cout<<"Enter new Description: ";
gets(ndes);
cout<<"Enter new Timmings: ";
gets(ntim);
cout<<"Enter new Price: ";
cin>>nprice;
cout<<"Enter new rating(press 0 to retain old one): ";
cin>>nrating;
cout<<"No oF Seats";
cin>>nos;
if(strcmp(nname,"!")!=0)
strcpy(mname,nname);
if(strcmp(ndes,"!")!=0)
strcpy(mdes,ndes);
if(mprice!=nprice)
mprice=nprice;
if(nrating!=0)
mstars=nrating;
if(strcmp(ntim,"!")!=0)
strcpy(mtiming,ntim);
if(nos!=0)
mseats=nos;
fin.seekg(pos);
fin.write((char*)&a,sizeof(a));
fin.close();
p=1;
break;
}
}
if(p==0)
{
cout<<"Wrong Movie Number"<<endl;
cout<<"Redirecting to modify menu"<<endl;
delay(300);
modify();
}
fout.open("mt.txt",ios::in);
cout<<"Now The Movies are.. :\n"<<endl;
delay(500);
fout.seekg(0);
clrscr();
while(fout.read((char*)&a,sizeof(a)))
{
result();
}
fout.close();
for(i=0;i<80;i++)
cout<<"=";
cout<<"\n\n"<<endl;
k:i=0;
}
void admin::result()   //To Show Details Of A Movie
{
gotoxy(30,20);
for(i=0;a.mname[i]!='\0';i++)
{
delay(30);
cout<<a.mname[i];
}
cout<<"               ";
delay(200);
gotoxy(31,21);
cout<<a.mdes<<"         ";
gotoxy(27,25);
delay(600);
cout<<"DIRECTED by "<<a.mdirector<<"            ";
gotoxy(27,16);
delay(500);
cout<<"STARRING "<<a.mactors<<"                       ";
gotoxy(4,19);
delay(300);
cout<<"      LANGUAGE -"<<a.mlang<<" ";
gotoxy(4,21);
delay(300);
cout<<" rating by CBFC-"<<a.mcbfc<<"  ";
gotoxy(4,23);
delay(300);
cout<<" ticket PRICE  -"<<a.mprice<<"  ";
gotoxy(54,19 );
delay(300);
cout<<a.mseats<<"("<<a.tick<<")" <<"- SEATS remaining"<<endl;
gotoxy(54,21);
delay(300);
cout<<a.mstars<<"  - STARS out of 5"<<endl;
gotoxy(54,23);
delay(300);
cout<<a.mtiming<<"- TIMMING"<<endl;
i=0;
getch();
gotoxy(1,30);
}
void admin::del()    //To Delete A Movie From List
{
p=0;
i=0;
r=0;
fout.open("mt.txt",ios::in);
fout.seekg(0);
i=0;
cout<<"Movies In IMAX :"<<endl;
while(fout.read((char*)&a,sizeof(a)))
{
delay(200);
i++;
cout<<i<<" ";
cout<<char(16);
cout<<" "<<mname<<endl;
}
fout.close();
r=0;
char dname[30];
fin.open("mt.txt",ios::in);
fout.open("temp.txt",ios::out);
cout<<"Enter The Movie Number to be deleted "<<endl;
cin>>r;
i=0;
while(fin.read((char*)&a,sizeof(a)))
{
i++;
if(i==r)
{
cout<<"Movie Details\n"<<endl;
delay(300);
clrscr();
result();
p=1;
cout<<"Are You Sure You Want To DELETE This Movie "<<endl;
cin>>c1;
if(c1=='n'||c1=='N')
fout.write((char*)&a,sizeof(a));
}
else
fout.write((char*)&a,sizeof(a));
}
if(p==0)
{
cout<<"Wrong Movie Number"<<endl;
delay(500);cout<<"Returning "<<char(24);
delay(1800);
modify();
}
if(c1=='y'||c1=='Y')
cout<<"Movie Successfully Deleted"<<endl;
fin.close();
fout.close();
remove("mt.txt");
rename("temp.txt","mt.txt");
fin.open("mt.txt",ios::in);
cout<<"Now The Movies are :"<<endl;
delay(900);
clrscr();
while(fin.read((char*)&a,sizeof(a)))
{
a.result();
}
fin.close();
cout<<"Press Any Key "<<endl;
getch();
}
void admin::tcrun()         //To Run Ticket Counter/Initialise Tickets
{
i=0;
cout<<"\nProcessing Movies List .";
for(i=0;i<6;i++)
{
delay(300);cout<<".";
}
cout<<endl<<endl;
fout.open("mt.txt",ios::in);
fout.seekg(0);
i=0;
while(fout.read((char*)&a,sizeof(a)))
{
delay(300);
i++;
cout<<i<<" ";
cout<<char(14);
cout<<" "<<mname<<" _ "<<mseats<<endl;
}
fout.close();
r=0;
cout<<"\nEnter the movie number to be initialised (0 to return)"<<endl;
cin>>r;
if(r==0)
goto ex;
fout.open("mt.txt",ios::in|ios::out);
fout.seekg(0);
i=0;
int nseats;
fout.seekg(0);
while(!fout.eof())
{
i++;
pos=fout.tellg();
fout.read((char*)&a,sizeof(a));
if(i==r)
{
cout<<"\nprocessing "<<mname<<endl;
delay(400);
cout<<"Enter The No of seats for the movie"<<endl;
cin>>nseats;
delay(300);
cout<<"Initialising tickets with 0"<<endl;
mseats=nseats;
tick=0;
fout.seekg(pos);
fout.write((char*)&a,sizeof(a));
p=1;
break;
}
}
fout.close();
if(p==0)
cout<<"Movie Not Found"<<endl;
cout<<"redirecting"<<endl;
delay(400);
ex:cout<<"\nReturning To Main Menu"<<char(24)<<endl;
delay(1800);
p1=1;
admn();
}
void admin::seatmanage(int s)   //Function to Manage seats of a movie
{                               //after booking ,cancelling and modifying....
file.open("mt.txt",ios::in|ios::out);
while(!file.eof())
{
pos=file.tellg();
file.read((char*)&a,sizeof(a));
if(strcmp(name,a.mname)==0)
{
a.tick=a.tick+s;
a.mseats=a.mseats-s;
file.seekg(pos);
file.write((char*)&a,sizeof(a));
break;
}
}
file.close();
}
void admin::amtcal(int c3)
{
file.open("mt.txt",ios::in);
while(file.read((char*)&a,sizeof(a)))
{
if(strcmp(name,a.mname)==0)
{
cout<<"Amount Payable :";
delay(300);
cout<<c3;
delay(400);
cout<<"x";
delay(500);
cout<<mprice;
delay(500);
cout<<" = Rs.";
delay(900);
float q;
q=mprice*(c3);
cout<<q<<endl;
break;
}
}
file.close();
} //End Of Functions Definition of class admin



void user::umenu()   //Funtion For User Module's Main Menu And Welcome Screen
{
textcolor(uj);
textbackground(ui);
clrscr();
if(p1==1)
z:goto u;
clrscr();
cout<<"\t\t\t\t     DEAR USER"<<endl;
u:char temp[40]={"W E L C O M E   T O   \"I M A X\"  "};
gotoxy(60,3);
int x=70,y;
for(i=0;i<45;i++)
{
x--;
delay(70);
gotoxy(x,3);
cout<<temp;
cout<<" " ;
}
cout<<endl;
cout<<"\n\t\t\t\t   USER'S MENU"<<endl<<endl;
y=6,x=60;
char book[]={"BOOK MOVIES"};
char modi[]={"MODIFY BOOKING"};
char canc[]={"CANCEL BOOKING"};
char exit[]={"EXIT AS USER"};
for(i=0;i<18;i++)
{
if(i%2==0)
{
y++;
gotoxy(36,y);
delay(70);
cout<<book;
gotoxy(36,y-1);
cout<<"            ";
delay(70);
gotoxy(36,40-y);
cout<<exit;
gotoxy(36,41-y);
cout<<"             ";
}
else
{
x-- ;
gotoxy(70-x,20);
delay(70);
cout<<modi;
gotoxy(69-x,20);
cout<<" ";
delay(70);
gotoxy(x,20);
cout<<canc;
cout<<" ";
}
}
delay(200);gotoxy(40,23);cout<<"\"E\"";
delay(200);gotoxy(x-4,20);cout<<"\"C\"";
delay(200);gotoxy(40,y+2);cout<<"\"B\"";
delay(200);gotoxy(x-17,20);cout<<"\"M\"";
time_t t;
t = time(NULL);
gotoxy(2,8);cout<<"DATE-";
gotoxy(8,8);cout<<ctime(&(t));gotoxy(18,8);cout<<"                 ";
gotoxy(55,8);cout<<ctime(&(t));gotoxy(55,8);cout<<"     TIME- ";
gotoxy(71,8);cout<<"        ";
gotoxy(41,20);
c1=getche();
gotoxy(39,28);
if(c1=='e'||c1=='E')
{
goto f;
}
else if(c1=='b'||c1=='B')
{
p=0;
cout<<"\nBooking  "<<endl;
a:cout<<"Movies Now Playing in IMAX With Seat Numbers in ( )"<<endl;
fin.open("mt.txt",ios::in);
fin.seekg(0);
i=0;
cout<<endl;
while(fin.read((char *)&a,sizeof(a)))
{
delay(500);
i++;
cout<<i;
cout<<" "<<char(14);
cout<<" "<<a.mname<<" (";
a.showseats();cout<<" )"<<endl;
}
fin.close();
r=0;
cout<<"\nEnter The Number to Book (0 to exit)"<<endl;
cin>>r;
if(r==0)
{
cout<<"Returning.."<<char(24)<<endl;
delay(1800);
clrscr();
goto z;
}
i=0;
fin.open("mt.txt",ios::in);
while(fin.read((char*)&a,sizeof(a)))
{
i++;
if(i==r)
{
pos=fin.tellg();
strcpy(u.mov,a.mname);
ubooking();
p=1;
break;
}
}
if(p==0)
{
cout<<"Wrong Movie Number ... Choose Once Again"<<endl;
fin.close();
goto a;
}
}
else if(c1=='c'||c1=='C')
{
u.ucancel();
}
else if(c1=='M'||c1=='m')
{
u.uedit();
}
else
{
cout<<"Wrong Choice"<<endl;
cout<<"Enter Again "<<endl;
umenu();
}
f:cout<<endl;
}

void user::ubooking()
{
cout<<"Movie Details :"<<endl;
delay(500);
clrscr();
fin.seekg(pos);
a.result();
strcpy(name,a.mname);
fin.close();
gotoxy(40,40);
cout<<"\nMOVIE BOOKING "<<endl;
cout<<"Enter Your name "<<endl;
gets(uname);
cout<<"Enter your age "<<endl;
cin>>uage;
cout<<"Enter the no. of tickets to be booked "<<endl;
cin>>uno;
cout<<"Enter your phone number or email id"<<endl;
gets(uphone);
cout<<"Want To confirm booking for ";puts(name);
c2=getche();
if(c2=='y')
{
i=0;
fout.open("mb.txt",ios::out|ios::app);
cout<<"\nYour Ticket number(s) are:"<<endl;
tcallote();
cout<<"Your Main Ticket number is: "<<u.utc<<endl;
a.seatmanage(u.uno);
fout.write((char*)&u,sizeof(u));
a.amtcal(u.uno);
delay(600);
cout<<"\n\nT H A N K   Y O U  F O R  B O O K I N G "<<char(1)<<char(2)<<endl;
cout<<"\Enjoy The Movie"<<endl;
delay(80);
cout<<endl<<endl;
textcolor(ui+2);
cputs("* NOTE :Use your Main Ticket Number Given Above");cout<<endl;
cputs("  For Cancelling/Changing your Booking *");cout<<endl;
fout.close();
cout<<"Press Enter To Continue"<<endl;
ch=getch();
if(ch=='\r')
{
cout<<"Redirecting to user menu"<<endl;
cout<<char(24)<<endl;
delay(1800);
}
umenu();
}
if(c2=='n')
{
p1=1;
umenu();
}
}
void user::tcallote() //Allocating Ticket Number After Booking a Movie
{
c2='n';
int cnt=u.uno;
fstream f1;
int tics;
f1.open("mt.txt",ios::app|ios::in);
while(f1.read((char*)&a,sizeof(a)))
{
if(strcmp(a.mname,name)==0)
{
tics=a.tick;
while(cnt>0)
{
tics++;
cnt--;
cout<<tics<<endl;
delay(300);
}
break;
}
}
f1.close();
u.utc=tics;
}
void user::ucancel()    // For Cancelling The Movie Booked
{
cout<<"Enter The Movie U booked for"<<endl;
fstream f1;
f1.open("mb.txt",ios::in);
i=0;
f1.seekg(0);
while(f1.read((char *)&u,sizeof(u)))
{
i++;
cout<<i<<"  "<<char(13)<<"  "<<mov<<endl;
}
r=0;
f1.close();
f1.open("mb.txt",ios::in);
f1.seekg(0);
cin>>r;i=0;
while(f1.read((char *)&u,sizeof(u)))
{
i++;
if(i==r)
{
strcpy(name,mov);
cout<<"\nMovie selected :"<<name<<endl;
}
}
f1.close();
cout<<"Canceling...."<<endl;
cout<<"Enter Your Main Ticket Number "<<endl;
cin>>r;
fin.open("mb.txt",ios::in);
fout.open("temp.txt",ios::out);
while(fin.read((char*)&u,sizeof(u)))
{
if((r==utc)&&strcmp(name,u.mov)==0)
{
p=1;
cout<<"FOUND"<<endl;
cout<<"Name :";puts(uname);
cout<<"Ticket No:"<<utc<<endl;
cout<<"Movie :"<<u.mov<<endl;
strcpy(name,u.mov);
cout<<"CANCEL BOOKING????"<<endl;
c2=getche();
if(c2=='n'||c2=='N')
fout.write((char*)&u,sizeof(u));
}
else
{
fout.write((char*)&u,sizeof(u));
}
}
if(c2=='y'||c2=='Y')
{
strcpy(name,mov);
cout<<"Your Ticket Is Successfully Cancelled"<<endl;
a.seatmanage((-u.uno));
}
if(p==1&&c2!='y')
cout<<"Your Ticket Is not Cancelled"<<endl;
if(p!=1)
cout<<"Not Found"<<endl;
fin.close();
fout.close();
remove("mb.txt");
rename("temp.txt","mb.txt");
cout<<"Press Any Key"<<endl;
getch();
canex:cout<<"Redirecting to User Menu"<<char(24)<<endl;delay(1800);
umenu();
}

void user::uedit()       //For Changing The Details Of No. of Tickets,Contact Details
{
cout<<"Enter The Movie U booked for"<<endl;
fstream f1;
f1.open("mb.txt",ios::in);
i=0;
f1.seekg(0);
while(f1.read((char *)&u,sizeof(u)))
{
i++;
cout<<i<<" "<<char(13)<<" "<<mov<<endl;
}
cin>>r;
f1.close();
i=0;
f1.open("mb.txt",ios::in);
f1.seekg(0);
while(f1.read((char *)&u,sizeof(u)))
{
i++;
if(i==r)
{
strcpy(name,u.mov);
cout<<"Movie Selected :"<<name;
}
}
f1.close();
float pos;
int t;
p=0;
cout<<"\nModify Your Booking "<<endl;
fout.open("mb.txt",ios::in|ios::out);
cout<<"Enter Your Ticket Number :"<<endl;
cin>>t;
int n;
char cnt[30];
fout.seekg(0);
while(fout)
{
pos=fout.tellg();
fout.read((char*)&u,sizeof(u));
if(t==u.utc&&strcmp(name,u.mov)==0)
{
cout<<"OLD DETAILS "<<endl;
i=uno;
cout<<"Name :";
puts(uname);
cout<<"Movie :";
puts(a.mname);
cout<<"Age :"<<uage<<endl;
cout<<"No. of Tickets Booked :"<<i<<endl;
cout<<"Contact info :";
puts(uphone);
cout<<"\n\n\tEnter New Details"<<endl;
cout<<"Enter Your Name "<<endl;
gets(aname);
cout<<"Enter the no. of tickects to be booked "<<endl;
cin>>n;
cout<<"Enter the contact details "<<endl;
gets(cnt);
if(strcmp(aname,"!")!=0)
strcpy(uname,aname);
if(strcmp(cnt,"!")!=0)
strcpy(uphone,cnt);
if(n!=0)
uno=n;
fout.seekg(pos);
fout.write((char*)&u,sizeof(u));
fout.close();
p=1;
break;
}
}
if(p==0)
cout<<"Not Found "<<endl;
else
{
strcpy(name,u.mov);
if(i>n)
a.seatmanage((n-i));
if(n>i)
a.seatmanage((i-n));
delay(300);
cout<<"Details Saved"<<endl;
}
cout<<"Press Any Key"<<endl;
getch();
cout<<"Redirecting to User Menu "<<char(24)<<endl;delay(1800);
umenu();
}
void user::showbooked()  //Function Used by Admin To See Booked List
{

cout<<"                       B O O K I N G    L I S T "<<endl;
fin.open("mb.txt",ios::in);
while(fin.read((char*)&u,sizeof(u)))
{
cout<<endl;
for(i=0;i<70;i++)
cout<<char(4);
cout<<"\nMovie Booked:"<<mov;
cout<<"\nName: ";
puts(u.uname);
cout<<"Ticket no:"<<u.utc<<endl;
cout<<"Age :"<<u.uage<<endl;
cout<<"No. Of Tickets: "<<u.uno<<endl;
cout<<"Contact Details: "<<u.uphone<<endl;
for(r=0;r<70;r++)
cout<<char(4);
getch();
}
cout<<endl<<endl;
for(i=0;i<80;i++)
cout<<char(39);
cout<<"End Of Booked List"<<endl;
fin.close();
cout<<"Press Any Key To Continue"<<endl;
getch();
cout<<"Returning to Admin's Menu"<<char(24)<<endl;
delay(1000);
p1=1;
a.admn();
}

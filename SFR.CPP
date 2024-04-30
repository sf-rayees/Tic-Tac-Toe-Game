#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
class tic
{
public: int a,b,c,d,e,f,g,h,i,l;
	tic()
	{
	 a=21;
	 b=22;
	 c=23;
	 d=24;
	 e=25;
	 f=26;
	 g=27;
	 h=28;
	 i=29;
	}
	~tic()
	{
	 a=21;
	 b=22;
	 c=23;
	 d=24;
	 e=25;
	 f=26;
	 g=27;
	 h=28;
	 i=29;
	}
	tic(int a1,int b1,int c1,int d1,int e1,int f1,int g1,int h1,int i1)
	{
	 a=a1;
	 b=b1;
	 c=c1;
	 d=d1;
	 e=e1;
	 f=f1;
	 g=g1;
	 h=h1;
	 i=i1;
	}
	void start()
	{
	 cout<<"\n "<<a<<" | "<<b<<" | "<<c;
	 cout<<"\n----------------";
	 cout<<"\n "<<d<<" | "<<e<<" | "<<f;
	 cout<<"\n----------------";
	 cout<<"\n "<<g<<" | "<<h<<" | "<<i;
	}
	void p1(int ch,int p)
	{

	 r:cout<<"\n Enter location player "<<p<<" ("<<ch<<")  :";
	 cin>>l;
	 if(l==21)
	 {
	  if(l==a && a==21)
	  a=ch;
	  else
	  {
	   cout<<"\n Invalid input: Enter Again";
	   goto r;
	  }
	 }
	 if(l==22)
	 {
	   if(l==b && b==22)
	  b=ch;
	  else
	  {
	   cout<<"\n Invalid input: Enter Again";
	   goto r;
	  }
	 }
	 if(l==23)
	 {
	   if(l==c && c==23)
	  c=ch;
	  else
	  {
	   cout<<"\n Invalid input: Enter Again";
	   goto r;
	  }
	 }
	 if(l==24)
	 {
	   if(l==d && d==24)
	  d=ch;
	  else
	  {
	   cout<<"\n Invalid input: Enter Again";
	   goto r;
	  }
	 }
	 if(l==25)
	 {
	   if(l==e && e==25)
	  e=ch;
	  else
	  {
	   cout<<"\n Invalid input: Enter Again";
	   goto r;
	  }
	 }
	 if(l==26)
	 {
	   if(l==f && f==26)
	  f=ch;
	  else
	  {
	   cout<<"\n Invalid input: Enter Again";
	   goto r;
	  }
	 }
	 if(l==27)
	 {
	   if(l==g && g==27)
	  g=ch;
	  else
	  {
	   cout<<"\n Invalid input: Enter Again";
	   goto r;
	  }
	 }
	 if(l==28)
	 {
	   if(l==h && h==28)
	  h=ch;
	  else
	  {
	   cout<<"\n Invalid input: Enter Again";
	   goto r;
	  }
	 }
	 if(l==29)
	 {
	   if(l==i && i==29)
	  i=ch;
	  else
	  {
	   cout<<"\n Invalid input: Enter Again";
	   goto r;
	  }
	 }
	if(l!=21 && l!=22 && l!=23 && l!=24 && l!=25 && l!=26 && l!=27 && l!=28 && l!=29)
	 {
	  cout<<"\n Invalid input: Enter Again";
	  goto r;
	 }
       }
      int check(int p)
      {
       if(a==b && b==c)
       {
	cout<<"\n PLayer "<<p<<" WON ";
	return 1;
       }
	 if(d==e && e==f)
       {
	cout<<"\n PLayer "<<p<<" WON ";
	return 1;
       }
	 if(g==h && h==i)
       {
	cout<<"\n PLayer "<<p<<" WON ";
	return 1;
       }
	  if(a==d && d==g)
       {
	cout<<"\n PLayer "<<p<<" WON ";
	return 1;
       }
	 if(b==e && e==h)
       {
	cout<<"\n PLayer "<<p<<" WON ";
	return 1;
       }
	 if(c==f && f==i)
       {
	cout<<"\n PLayer "<<p<<" WON ";
	return 1;
       }
	 if(a==e && e==i)
       {
	cout<<"\n PLayer "<<p<<" WON ";
	return 1;
       }
	 if(c==e && e==g)
       {
	cout<<"\n PLayer "<<p<<" WON ";
	return 1;
       }
      }
};
 void main()
{
png: int j1,j,c1,c2,res,q=0,cho,s,m1=0,m2=0;
clrscr();
tic obj;
cout<<"\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t\t Start New Game (1) : \n\t\t\t\t Exit( 0) :\n \t\t\t\t ";
cin>>s;
if(s==1)
{
rrr:
     if(m1!=0 || m2!=0)
     {
     clrscr();
     cout<<"\n\n\n\n\n\n\n\n\n\n\n";
     cout<<"\t\t\t\tNext Match";
     obj.tic::~tic();
     tic obj;
     clrscr();
     }
rr:
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\tEnter player 1 choice(99 or 66): ";
cin>>c1;
if(c1==99 ||c1==66)
{
 cout<<"\n Passed";
 if(c1==66)
 c2=99;
 else
 c2=66;
 delay(1000);
 clrscr();
}
else
{
 cout<<"\n Can't Do a Work Properly: ";
 goto rr;
}
for(j=1;j<10;j++)
{
 ++q;

 if(j%2==1)
 {
  delay(500);
  clrscr();
  cout<<"\n Marks \n Player1: "<<m1<<"\n Player2: "<<m2<<"\n";
  obj.start();
  obj.p1(c1,1);
  res=obj.check(1);
  if(res==1)
  {
  m1=m1+1;
  break;
  }
 }
 else
 {
  delay(500);
  clrscr();
  cout<<"\n Marks \n Player1: "<<m1<<"\n Player2: "<<m2<<"\n";
  obj.start();
  obj.p1(c2,2);
  res=obj.check(2);
  if(res==1)
  {
  m2=m2+1;
  break;
  }
 }
}
clrscr();
for(j1=1;j1<4;j1++)
{

cout<<"\n \t \t \t \t GAME OVER \n";
delay(1500);
}
cout<<"\n \t \t \t \t  Marks \n";
cout<<"\n \t \t \t  \t Player1: "<<m1<<"\n";
cout<<"\n \t \t \t  \t Player2: "<<m2<<"\n";
cout<<"\n \t \t   1: play again.... 2: MAIN MENU....:\n\n";
cout<<"\t\t\t\t\t  ";
cin>>cho;
if(cho==1)
{
 clrscr();
 for(int ll=0;ll<29;ll++)
 {
  if(m1>m2)
  cout<<"\n \t\t\t\t Player 1 WON ";
  else
  cout<<"\n \t\t\t\t Player 2 WON ";
 }
 delay(5000);
 goto rrr;
}
else
{
 clrscr();
 for(int ll=0;ll<29;ll++)
 {
  if(m1>m2)
  cout<<"\n \t\t\t\t Player 1 WON ";
  else
  cout<<"\n \t\t\t\t Player 2 WON ";
 }
 delay(5000);
 goto png;
}
}
else
{
exit(0);
}
getch();
}
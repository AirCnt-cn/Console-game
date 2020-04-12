#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
void SetPos(COORD a)
{
	HANDLE out=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(out, a);
}
void SetPos(int i, int j)
{
	COORD pos={i, j};
	SetPos(pos);
}
int main()
{
	int x=5,y=5,x1=5,y1=5,l=0,r=0,xi=10,yi=5,xi1=10,yi1=5,li=0,ri=0;char e;
	long long  xa=100,xb=100;
	int kill1=0,kill2=0;
	long long sc1=0,sc2=0;
	int got1=0,got2=0,nop=1;
	while(1)
	{
		system("cls");
	switch(e)
	{
		case 'w':y1--;break;
		case 's':y1++;break;
		case 'a':x1--;break;
		case 'd':x1++;break;
		case 'z':l=!l;break;
		case 'x':r=!r;break;
		case 'i':yi1--;break;
		case 'k':yi1++;break;
		case 'j':xi1--;break;
		case 'l':xi1++;break;
		case 'n':li=!li;break;
		case 'm':ri=!ri;break;
		case 'e':kill1=1;break;
		case 'o':kill2=1;break;	
	}
	x=x1;y=y1;xi=xi1;yi=yi1;
	if(nop)
	{
		SetPos(10,20);
		cout<<'p';
	}
	SetPos(xi+2,yi+2);
	if(xa>0)
	{
	if(x==10&&y==20&&nop)  {got1=1;nop=0;}
	SetPos(x-1,y-1);
	cout<<xa<<' '<<sc1;
	SetPos(x-1,y);
	if(l&&!kill1)
	cout<<"\\O";
	else cout<<" O";
	if(r&&!kill1)
	cout<<"/";
	y++;
	SetPos(x-1,y);
	if(l&&!kill1)
	cout<<" |";
	else if(!kill1)cout<<"/|";
	if(r&&!kill1)
	cout<<" ";
	else if(!kill1)cout<<"\\";
	if(kill1)
	{
		SetPos(x-2,y);
		cout<<"！|！";
		if(got1||(abs(x-xi)<=5&&abs(y-yi)<=3)) {xb-=1;sc1++;sc2--;kill1=0;e='1';continue;}
		kill1=0;
	}
	y++;x--;
	SetPos(x,y);
	cout<<"/";
	x+=2;
	SetPos(x,y);
	cout<<"\\";
	}
	else
	{
		if(got1)
		{
			got1=0;
			got2=1;
		}
		xa+=100;
		system("cls");
		Sleep(25);
		e='1';
		continue;
	}
	if(xb>0)
	{
	if(xi==10&&yi==20&&nop){got2=1;nop=0;}
	SetPos(xi-1,yi-1);
	cout<<xb<<' '<<sc2;
	SetPos(xi-1,yi);
	if(li)
	cout<<"\\O";
	else cout<<" O";
	if(ri)
	cout<<"/";
	yi++;
	SetPos(xi-1,yi);
	if(li&&!kill2)
	cout<<" |";
	else if(!kill2)cout<<"/|";
	if(ri&&!kill2)
	cout<<" ";
	else if(!kill2)cout<<"\\";
	if(kill2)
	{
		SetPos(xi-2,yi);
		cout<<"！|！";
		if(got2||(abs(x-xi)<=5&&abs(y-yi)<=3)) {xa-=1;sc2++;sc1--;kill2=0;e='1';continue;}
		kill2=0;
	}
	yi++;xi--;
	SetPos(xi,yi);
	cout<<"/";
	xi+=2;
	SetPos(xi,yi);
	cout<<"\\";
	}
	else
	{
		if(got2)
		{
			got2=0;
			got1=1;
		}
		xb+=100;
		system("cls");
		Sleep(25);
		e='1';
		continue;
	}
	e=_getch();
	system("cls");
	}
}

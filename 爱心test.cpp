#include<stdio.h>
#include<easyx.h>
#include<math.h>
#include<time.h>
void time()
{
	for (int i = 3; i>0; i--)
	{
		settextstyle(70, 0, NULL);
		switch (i)
		{
		case 1:
			settextcolor(RGB(250,20,20));
			outtextxy(330, 180, '1');
			break;
		case 2:
			settextcolor(RGB(20, 220, 20));
			outtextxy(330, 240, '2');
			break;
		case 3:
			settextcolor(RGB(20, 20, 220));
			outtextxy(330, 300, '3');
			break;
		}
		Sleep(1000);
		cleardevice();
	}
	Sleep(1000);
}
void start()
{
	
	for (int i = 590; i >= 200; i -= 10)
	{
		setfillcolor(WHITE);
		fillcircle(350, i, 3);
		Sleep(50);
		cleardevice();
		i -= 10;
		setfillcolor(RGB(250, 130, 120));
		fillcircle(350, i, 3);
		Sleep(50);
		cleardevice();
	}
}
void aixin()
{
	
	POINT pts[] = { {350, 200}, {360, 180}, {350, 160},{340,180 } };
	POINT s[] = { {350, 200}, {370, 210}, {350+40, 180+20},{355+15,190 } };
	POINT p[] = { {350, 200}, {340, 220}, {350, 240},{360,190+30 } };
	POINT t[] = { {350, 200}, {370-40, 190}, {310, 200},{330,210 } };
	setfillcolor(RGB(250, 130, 120));//
	Sleep(250);
	fillpolygon(pts, 4);
	setfillcolor(RGB(180, 30, 200));
	Sleep(1200);
	cleardevice();
	fillpolygon(s, 4);
	setfillcolor(RGB(220, 220, 30));
	Sleep(1200);
	cleardevice();
	fillpolygon(p, 4);
	setfillcolor(RGB(40, 210, 210));
	Sleep(1200);
	cleardevice();
	fillpolygon(t, 4);
	setfillcolor(RGB(250, 130, 120));//
	Sleep(1200);
	cleardevice();
	fillpolygon(pts, 4);
	setfillcolor(RGB(180, 30, 200));
	Sleep(800);
	fillpolygon(s, 4);
	setfillcolor(RGB(220, 220, 30));
	Sleep(800);
	fillpolygon(p, 4);
	setfillcolor(RGB(40, 210, 210));
	Sleep(800);
	fillpolygon(t, 4);
	Sleep(700);
	setfillcolor(RGB(250, 40, 20));
	int i = 300;
    int o = 300;
    int w = 500;
    int f= 350;
	int q;
	int m;
	int n=1;
	int e = 450;
	for (w = 350,o=350; w >= 150; w -= 10,o-=10,f+=10,n++)
	{
		if (n >= 1)
		{
			for (i = o; i <= f; i += 10)
			{

				//Sleep(1);
				solidcircle(i, w, 2);
			}
		}
	}
	for (n=1,i = 250,f=250 ,o = 450, w = 40; w <= 140; w += 10,i-=10,e-=10,f+=10,n++)
	{
		if (n >= 2)
		{
			for (q = i, m = e; q <= f; q += 10, m += 10)
			{
				//Sleep(1);
				solidcircle(q, w, 2);
				solidcircle(m, w, 2);
			}
		}
	}
}
void yanhua()
{
	int l = 1;
	void srand(unsigned int seed);
	while (l < 15000)
	{
		int a = (rand() % 100) * 5;
		int c = (a - 350) * (a - 350);
		int b = (rand() % 100) * 5;
		int d = (b - 200) * (b - 200);
		if (c + d>=7200&&c+d<=9200)
		{
			//setlinecolor(RGB(250, 130, 120));
			//line(350, 200, a, b);
			setfillcolor(RGB(250, 130, 120));
			solidcircle(a, b, 1);

		}
		
		{
			if (c + d >= 9700 && c + d <= 11800)
			{
				solidcircle(a, b, 2);
			}
		}
		
		{
			if (c + d >= 12400 && c + d <= 13400)
			{
				solidcircle(a, b, 3);
			}
		}
		l++;
		
	}
	
	Sleep(3000);
	cleardevice();
}
int main()
{
	
	initgraph(700, 600);
	setbkcolor(RGB(20,20,20));
	cleardevice();
	Sleep(3000);
	time();
	start();
	yanhua();
	aixin();
	while (1);
	closegraph();
}
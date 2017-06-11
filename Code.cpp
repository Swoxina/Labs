// ZADANIE 4.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include <conio.h>
#include <iostream>
#include <cmath> 
using namespace std;


class PointD
{
protected:
	
public:	
	double x, y;

	PointD()
	{}

	PointD(int X, int Y) : x(X), y(Y)
	{}
	
	void PutD()
	{
		cout<<"x= "<<x<<endl;
		cout<<"y= "<<y<<endl;
	}

	float LenghtD(PointD t1, PointD t2) 
	{	
		return(sqrt(pow((t2.x-t1.x),2)+pow((t2.y-t1.y),2)));
	}

	void DtoP()
	{	
		double r,f;
		r=sqrt((pow(x,2)+pow(y,2)));
		f=atan(y/x);
		cout<<"�� = "<<r<<endl<<"���� � �������� = "<<f<<endl;
	}
};


class PointP
{
protected:	

public:	
	double r ,f;
	 
	PointP()
	{}

	PointP(double R, double F) : r(R), f(F)
	{
		
	}
	
	void PtoD()
	{	
		double x,y;
		x=r*cos(f);
		y=r*sin(f);
		cout<<"���������� � ���������� �������:"<<endl<<"x = "<<x<<endl<<"y = "<<y<<endl;
	}
	
	void PutP()
	{   
		
		cout<<"�� = "<<r<<endl;
		cout<<"f(���� � ��������)= "<<f<<endl;
		
	}

	float LenghtP(PointP t1, PointP t2)
	{
		return(sqrt((pow(t1.r,2)+pow(t2.r,2))-(2*t1.r*t2.r*cos(t1.f-t2.f))));
	}


};

double sumx(PointD t1,PointD t2)
{
	return(t1.x+t2.x);
}
double sumy(PointD t1,PointD t2)
{
	return(t1.y+t2.y);
}
double minusx(PointD t1,PointD t2)
{
	return(t1.x-t2.x);
}
double minusy(PointD t1,PointD t2)
{
	return(t1.y-t2.y);
}


double sumR(PointP t1,PointP t2)
{
	return(t1.r+t2.r);
}
double sumF(PointP t1,PointP t2)
{
	return(t1.f+t2.f);
}
double minusR(PointP t1,PointP t2)
{
	return(t1.r-t2.r);
}
double minusF(PointP t1,PointP t2)
{
	return(t1.f-t2.f);
}


int main()
{
	setlocale(0, "");
	
	bool isActive = true;
	while (isActive)
	{
		cout << "�������� ��������:" << endl
			<< "1)PointD" << endl
			<< "2)PointP" << endl
			<< "3)���������� ����� �������" << endl
			<< "4)���������������" << endl
			<< "5)��������" << endl
			<< "6)�����" << endl;
			
		switch (_getch())
		{
			case '1':
			{
				int x, y;
				cout << "Enter x, y: ";
				cin >> x >> y;
				PointD t(x, y);
				t.PutD();
				system("pause");
				break;
			}
			case '2':
			{
				double x, y, R,F;
				cout << "Enter x, y: ";
				cin >> x >> y;
				R=pow((pow(x,2)+pow(y,2)),1.0/2);
				F=atan(y/x);
				PointP t1(R, F);
				t1.PutP();
				system("pause");
				break;

			}


			case '3':
			{	
				system("cls");
				cout << "�������� ��������:" << endl
				<< "1)���������� � ���������� ������� ���������" << endl
				<< "2)���������� � �������� ������� ���������" << endl;
				switch (_getch())
				{
				case '1':
					{
						int x1, y1, x2, y2;
						cout << "������� ���������� 1-�� ����� x, y: ";
						cin >> x1 >> y1;
						cout << "������� ���������� 2-�� ����� x1, y1: ";
						cin >> x2 >> y2;
				
						PointD t1(x1, y1);

						PointD t2(x2,y2);
						
						PointD t3(0,0);
						cout<<endl;
						cout<<"���������� ����� ����� ������� = "<<t3.LenghtD(t1,t2)<<endl;

						system("pause");
						
						break;
					}
				case '2':
					{
						double R1, F1, R2, F2;
						cout << "������� ���������� 1-�� ����� � �������� ������� ��������� ��, ����(�������): ";
						cin >> R1 >> F1;
						cout << "������� ���������� 2-�� ����� � �������� ������� ��������� ��, ����(�������): ";
						cin >> R2 >> F2;
				
						PointP t1(R1, F1);

						PointP t2(R2,F2);
						
						PointP t3(0,0);
						cout<<endl;
						cout<<"���������� ����� ����� ������� = "<<t3.LenghtP(t1,t2)<<endl;

						system("pause");
						
						break;	
					}
					

				}
				break;
			}
			case '4':
			{
			system("cls");
				cout << "�������� ��������:" << endl
			<< "1)�������������� ����� � ���������� ������� � ��������" << endl
			<< "2)�������������� ����� � �������� ������� � ����������" << endl;
				switch (_getch())
				{
				case '1':
					{
						int x, y;
						cout << "������� ���������� ����� x, y � ���������� ������������: ";
						cin >> x >> y;
						PointD t(x, y);
						t.PutD();
						t.DtoP();
			
						system("pause");
						
						break;
					}
				case '2':
					{
						double R, F;
						cout << "������� ���������� ����� x, y � �������� ������� ���������: ";
						cin >> R >> F;
						PointP t(R, F);
						t.PutP();
						t.PtoD();
			

						system("pause");
						
						break;
					}	
					}
				break;
			}
			case '5':
			{
			system("cls");
			cout<<"1)�������� � ��������� � ���������� ������� ���������"<<endl
				<<"2)�������� � �������� ������� ���������"<<endl;
			switch(_getch())
			{
			case '1':	
			{
			int x1, y1, x2, y2;
			cout << "������� ���������� 1-�� ����� x, y: ";
			cin >> x1 >> y1;
			cout << "������� ���������� 2-�� ����� x1, y1: ";
			cin >> x2 >> y2;
			PointD t1(x1, y1);
			PointD t2(x2, y2);
			cout<<"���������� ����� �������� �������� ��������� 1-�� � 2-�� �����"<<endl;
			cout<<"X = "<<sumx(t1,t2)<<endl<<"Y = "<<sumy(t1,t2)<<endl;
			cout<<"���������� ����� ��������� �������� ��������� 1-�� � 2-�� �����"<<endl;
			cout<<"X = "<<minusx(t1,t2)<<endl<<"Y = "<<minusy(t1,t2)<<endl;
			system("pause");
			break;
			}
			case '2':
			{
			double R1, F1, R2, F2;
			cout << "������� ���������� 1-�� ����� ��, F: ";
			cin >> R1 >> F1;
			cout << "������� ���������� 2-�� ����� ��, F: ";
			cin >> R2 >> F2;
			PointP t1(R1, F1);
			PointP t2(R2, F2);
			cout<<"���������� ����� �������� �������� ��������� 1-�� � 2-�� �����"<<endl;
			cout<<"�� = "<<sumR(t1,t2)<<endl<<"F(���� � ��������) = "<<sumF(t1,t2)<<endl;
			cout<<"���������� ����� ��������� �������� ��������� 1-�� � 2-�� �����"<<endl;
			cout<<"�� = "<<minusR(t1,t2)<<endl<<"F(���� � ��������) = "<<minusF(t1,t2)<<endl;
			system("pause");
			break;
			}
			
			}
			break;
			}
			case '6':
			{
				isActive = false;
				break;
			}
		}
		system("cls");
	}
	
	return 0;
}


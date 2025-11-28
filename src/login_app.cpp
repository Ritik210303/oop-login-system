#include<iostream>
//#include<string.h>
#include<fstream>
#include <windows.h>
#include <stdlib.h>
//#define i cin
//#define o cout
int l=0;
int i=0;
void logo();
int k=0;
int r=0;
int m=0;
using namespace std;
//class MENU
//{
//	public:
//	int user_req;
//	MENU()
//	{
//		cout<<"Enter User Name: ";
//		cin>>user_req;
//		//string l="LOGIN";
//
//		if(user_req==1)
//		{
//			cout << "\t---------------------" << endl;
//			cout << "\t LOGIN PAGE          " << endl;
//			cout << "\t---------------------" << endl;
//		}
//		else if (user_req==2)
//		{
//			cout << "\t---------------------" << endl;
//			cout << "\t REG. PAGE           " << endl;
//			cout << "\t---------------------" << endl;
//		}
//		else if (user_req==3)
//		{
//			cout << "\t---------------------" << endl;
//			cout << "\t PASSWORD PAGE       " << endl;
//			cout << "\t---------------------" << endl;
//		}
//	}
//
//};

class reg
{
	public:
		string name;
		string u_name;
		string u_mobile;
		string u_password;
		void set_reg()
		{
			fstream ritik;
			fstream sahil;
			fstream diti;
			fstream un;
			fstream mo;
			ritik.open("First_file.txt",ios::app | ios::out);
			sahil.open("user_name.txt",ios::app | ios::out);
			diti.open("pass_word.txt",ios::app | ios::out);
			un.open("name.txt",ios::app | ios::out);
			mo.open("number.txt",ios::app | ios::out);
			cout << "===> Enter Name: ";
			cin >> name;
			cout << "===> USERNAME: ";
			cin >> u_name;
			cout << "===> MOBILE NO: ";
			cin >> u_mobile;
			cout << "===> PASSWORD: ";
			cin >> u_password;
			ritik<<name<<endl;
			un<<name<<endl;
			ritik<<u_name<<endl;
			sahil<<u_name<<endl;
			ritik<<u_mobile<<endl;
			mo<<u_mobile<<endl;
			ritik<<u_password<<endl;
			diti<<u_password<<endl;
//			if(name!=0 && username!=0 && mobile!=0 && password!=0)
//			{
				cout << "------------------------------------" << endl;
 				cout << "Your data is successfully submitted..." << endl;
				cout << "------------------------------------" << endl;
//			}
		}
};

class login
{
	public:
		string username;
		string password;
		void set_login()
		{
			cout << "===> USERNAME: " << endl;
			cin >> username;
			cout << "===> PASSWORD: " << endl;
			cin >> password;

			//if (username!=0 && password!=0)
			//{
//				if(u_name==username && u_password==password)
//				{
//					cout << "------------------------------------" << endl;
// 					cout << "Your login process successfully done." << endl;
//					cout << "------------------------------------" << endl;
//				}
//				else
//				{
//					cout << "Plase enter a valid USERNAME and PASSWORD....." << endl;
//					cout << "............................................." << endl;
//				}
			//}
		}
		check()
		{
			fstream ritik;
			fstream sahil;
			fstream diti;
			sahil.open("user_name.txt");
			diti.open("pass_word.txt");
			string uname;
			string pass;
			string line;
			while(getline(sahil,uname))
			{
				if(uname==username)
				{
					k=1;
					break;
				}
				else
				{
					l++;
				}
			}
			//cout<<"Value of l is: "<<l<<endl;
			if(k==1)
			{
				while(getline(diti,pass) && i<=l)
				{
					if(i==l)
					{
//						cout<<pass<<endl;
//						cout<<password<<endl;
						if(pass==password)
						{
							k=1;
							cout<<"Loggedin succefull"<<endl;
							r=3;
							break;	
						}
						i++;
						
					}
					else
					{
						i++;
					}
				}
			}
			if(r==0)
			{
				cout<<"Failed to login"<<endl;
			}
		}
};

class for_pass
{
	public:
		string yname;
		string pass;
		string phone;
		string uname;
		void set_pass()
		{
			cout<<"\t\t*******verification********"<<endl;
			cout << "===> Enter your Name:";
			cin >> yname;
			cout<<"Enter your User Name: ";
			cin>>uname;
			cout<<"Enter your Mobile Number: ";
			cin>>phone;
//			if (n==u_name)
//			{
//				cout << "Your Password Is " << u_password << endl;
//			}
//			else
//			{
//				cout << "Can't find your username..." << endl;
//			}
		}
		verification()
		{
			string line;
			fstream ritik;
			fstream sahil;
			fstream diti;
			fstream yn;
			fstream mo;
			ritik.open("First_file.txt");
			sahil.open("user_name.txt");
			diti.open("pass_word.txt");
			yn.open("name.txt");
			mo.open("number.txt");
			while(!sahil.eof())
			{
				getline(sahil,line);
				if(line==uname)
				{
					k=1;
//					cout<<line<<endl;
					break;
				}
				else
				{
					l++;
				}
			}
			i=0;
			if(k==1)
			{
				while(!yn.eof() && i<=l)
				{
//					cout<<yname<<endl;
					getline(yn,line);
					if(i==l)
					{	
						
						if(line==yname)
						{
						//	cout<<line<<" and "<<yname;
							k=1;
							r=3;
							break;
						}
						i++;
					}
					else
					{
						k=0;
						i++;
					}
				}
			}
			i==0;
			if(r==3)
			{
				while(!mo.eof() && i<=l)
				{
					getline(mo,line);
					if(i==l)
					{
					//	cout<<line<<" and "<<phone;
						if(line==phone)
						{
//							cout<<line<<" and "<<phone;
							k=1;
							m=4;
							break;
						}
					}
					else
					{
						k=0;
						i++;
					}
				}
			}
			i=0;
			if(r==3 && m==4)
			{
				while(!diti.eof() && i<=l)
				{
					getline(diti,line);
					if(i==l)
					{
						cout<<"Your Password is: "<<line<<endl;
						break;
					}
					else
					{
						i++;
					}
				}
				
				
			}
			else
			{
				cout<<"Invalid Deatils"<<endl;
			}
		}
};

int main()
{
//	system("color 4");
	system("Color 4E");
	logo();
	system("pause");
	system("cls");
	int u_req;

	cout << "\t ---------------------------------------------" << endl;
	cout << "\t ---------------------------------------------" << endl;
	cout << "\t                                              " << endl;
	cout << "\t            YOU'RE WELCOME ANY TIME.          " << endl;
	cout << "\t                                              " << endl;
	cout << "\t ---------------------------------------------" << endl;
	cout << "\t ---------------------------------------------" << endl;

	cout << "\t =.=.  >>Press 1 For LOGIN:          " << endl;
	cout << "\t =.=.  >>Press 2 For REG.:           " << endl;
	cout << "\t =.=.  >>Press 3 For FORGOTT PASSWORD: " << endl;
	cout << "\t =.=.  >>Press 4 For EXIT:           " << endl;
	cout<<"\n\tEnter your choice: ";
	cin >> u_req;
	login l;
	
	reg rg;
	for_pass fp;
	switch(u_req)
	{
		case 1:
			l.set_login();
			l.check();
			system("pause");
			break;
		case 2:
			rg.set_reg();
			system("pause");
			break;
		case 3:
			fp.set_pass();
			fp.verification();
			break;
		default:
			cout<<"Enter valid choice"<<endl;
	}
	
}
void logo()
{
	cout<<"\t--------     --------"<<endl;
	cout<<"\t--------     --------"<<endl;
	cout<<"\t      ---    --- "<<endl;
	cout<<"\t      ---    --- "<<endl;
	cout<<"\t      ---    --- "<<endl;
	cout<<"\t      ---    --- "<<endl;
	cout<<"\t      ---    ---"<<endl;
	cout<<"\t     ---     ---------"<<endl;
	cout<<"\t    ---      ---------"<<endl;
	cout<<"\t  ---              ---"<<endl;
	cout<<"\t    ---            ---"<<endl;
	cout<<"\t      ---          ---"<<endl;
	cout<<"\t        ---   --------"<<endl;
	cout<<"\t          --- --------"<<endl;
}

#include<iostream>
//#include<fstream>

#include<cstdio>
#include<cstdlib>
#include<cstring>

#include "cprototype.h"
#include "cfunctions.cpp"
#include "csearch.cpp"
using namespace std;

char mygetch();

//int currentSize=0;
#define MAX 80 

//char file[]={"College_Students.dat"};

//Current size of student array
//int currentSize=0;

//This ID will increase every time a new student is added
//int id=202001;
//
//DATA std_array[MAX];



main()
//1
{	int ch;
	char text[25];
	
	readFromFile();
	
	//start:
	
	while(1)
	//2
	{	//system(cls);
		
		cout<<"==========>> HSC STUDENT ADMISSION INFO <<=========="<<endl<<endl;
		cout<<" --------------------------------------------------"<<endl<<endl;
		cout<<("Last saved :");
		cout<<" Date : " << __DATE__;
		cout<<" Time : " << __TIME__ <<endl<<endl;
		cout<<" ----------------------------------------"<<endl<<endl;
		cout<<"||||| ~~~~~ 1. Insert New Entry ~~~~~~~~~~~~~ |||||"<<endl;
		cout<<"||||| ~~~~~ 2. Display All Entry ~~~~~~~~~~~~ |||||"<<endl;
		cout<<"||||| ~~~~~ 3. Search by First Name ~~~~~~~~~ |||||"<<endl;
		cout<<"||||| ~~~~~ 4. Search by Last Name ~~~~~~~~~~ |||||"<<endl;
		cout<<"||||| ~~~~~ 5. Search by College Name ~~~~~~~ |||||"<<endl;
		cout<<"||||| ~~~~~ 6. Search by Blood Group ~~~~~~~~ |||||"<<endl;
		cout<<"||||| ~~~~~ 7. Search by Contact Number ~~~~~ |||||"<<endl;
		cout<<"||||| ~~~~~ 8. Search by Email Address ~~~~~~ |||||"<<endl;
		cout<<"||||| ~~~~~ 9. Save to Database ~~~~~~~~~~~~~ |||||"<<endl;
		cout<<"||||| ~~~~~ 10. Delete Info ~~~~~~~~~~~~~~~~~ |||||"<<endl;
		cout<<"||||| ~~~~~ 11. Exit ~~~~~~~~~~~~~~~~~~~~~~~~ |||||"<<endl<<endl;
		cout<<" --------------------------"<<endl<<endl;
		cout<<"Please Enter Your Choice :";
		cin>>ch;
		
		switch(ch)
		//3
		{	case 1: add();
					break;
			case 2: displayAll();
					break;
			case 3: cout<<"Enter the First Name :";
					cin>>text;
					search_stdnt(text, F_NAME);
					//	scanf("%s", key);
					//	search_stdnt(key, F_NAME);

					break;
			case 4: cout<<"Enter the Last Name :";
					cin>>text;
					search_stdnt(text, L_NAME);
					break;
			case 5: cout<<"Enter the College Name :";
					cin>>text;
					search_stdnt(text, C_NAME);
					break;
			case 6: cout<<"Enter the Blood Group :";
					cin>>text;
					search_stdnt(text, B_G);
					break;
			case 7: cout<<"Enter the Contact Number :";
					cin>>text;
					search_stdnt(text, C_N);
					break;
			case 8: cout<<"Enter the Email Address :";
					cin>>text;
					search_stdnt(text, EMAIL);
					break;
			case 9: save();
					break;
			case 10: del();
					 break;
			case 11: exit(0);
			default:cout<<"Wrong Choice, Please Try Again."<<endl;
		} //3
			
		mygetch();

	} //2

	
} //1

char mygetch()
{	char val;
	char rel;
	
	scanf("%c", &val);
	scanf("%c", &rel);
	
	return(val);
}

#include<cstdio>
#include<cstdlib>
#include<cstring>

#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;

#include<iomanip>

#include "cprototype.h"

#define MAX 80

char file[]={"College_Students.dat"};

//Current size of student array
int currentSize=0;

//This ID will increase every time a new student is added
int id=202001;

DATA std_array[MAX];


void add()
//f1
{	//FILE *fp;
	DATA s = std_array[currentSize] ;
	
	if(currentSize>=MAX)
	//f2
	{	cout<<">> Sorry, Admission Closed <<";
		return;
	}	//f2
	
	cout<<"**Enter**" <<endl;
	
	cout<<" First Name :";
	cin>> s.f_name;
	cout<<" Last Name :";
	cin>> s.l_name;
	cout<<"College Name :";
	cin>> s.c_name;
	cout<<"SSC Year :";
	cin>> s.ssc_year;
	cout<<"GPA :";
	cin>> s.gpa;
	cout<<"Scholarship :";
	cin>> s.schlrshp;
	cout<<" Blood Group :";
	cin>> s.b_g;
	cout<<" Email Address :";
	cin>> s.email;
	cout<<" Contact Number :";
	cin>> s.c_n;
	cout<<" Payment :";
	cin>> s.pay;
	
	cout<<" Student ID : " <<id <<endl;
	++id;
		
	++currentSize;
	
} //f1
		

void displayAll()
//f3
{	if(currentSize==0)
	//f4
	{	cout<<" >> No Student Admitted Yet <<";
		return;
	} //f4
	for(int i=0; i<currentSize; i++)
		display(i);
} //f3



void display(int)
//f5
{	int id;
	DATA s = std_array[currentSize];
	char fullName [25];
	strcpy(fullName, s.f_name);
	strcat(fullName, " ");
	strcat(fullName, s.l_name);
	
	heading();
	
	cout.setf(ios::left);
	
	//printf("%-6d%-18s%-10s%-14s%-21s%-14d\n",s.id,fullName,s.c_name,s.b_g,s.email,s.c_n);
	cout<<setw(8)<<s.id<<setw(18)<<fullName<<setw(10)<<s.c_name<<setw(10)<<s.ssc_year<<setw(6)<<s.gpa<<setw(15)<<s.schlrshp<<setw(14)<<s.b_g<<setw(21)<<s.email<<setw(21)<<s.c_n<<setw(7)<<s.pay;
	cout<< endl;
} //f5


void heading()
//f6
{	cout<<"--------------------------------------------------"<<endl<<endl;
	cout<<"ID    FULL NAME         COLLEGE   SSC YEAR  GPA   SCHOLARSHIP    BLOOD GROUP   EMAIL                CONTACT NUMBER        PAYMENT"<<endl;
	cout<<" --------------------------------------------------"<<endl;
} //f6


void del()
//f7
{	int id, found=0;
	cout<<"Which ID info You Want to Delete?"<<endl;
	cout<<" =====" <<id;
	//scanf("%d", &id);
	
	if(currentSize==0)
	//f8
	{	cout<<" !!No Student Admitted Yet!!";
		return;
	} //f8
	for(int i=0;i<currentSize;i++)
	//f9
	{	DATA s = std_array[i];
		if(id==s.id)
		//f10
		{	for(int j=i;j<currentSize;j++)
			//f11
			{	std_array[j]=std_array[j+1];
				currentSize-=currentSize;
			} //f11
			found=1;
		} //f10
		if(found==1)
			cout<<"##ID Info Deleted Successfully##";
		
		break;
	} //f9
} //f7


//void readFromFile()
////f12
//{	FILE *fp;
//	if((fp = fopen(file, "rb"))==NULL)
//		puts("\n\n Error, Can't Load a Database File!'");
//	 
//	 if(fread(std_array, sizeof(std_array), 1, fp)!=1)
//	    puts("\n Error, Can't Load Data!'");
//            
//	//Load the Current Size of the Database
//	if(fread(&currentSize, sizeof(currentSize), 1, fp)!=1)
//		puts("\n Error, Can't Load Data!'");
//		
//	//Load the Database Contents
//	if(fread(&id, sizeof(id), 1, fp)!=1)
//		puts("\n Error, Can't Load Data!'");
//		
//	fclose(fp);
//} //f12
//
//
//void save()
////f13
//{	FILE *fp;
//	if((fp = fopen(file, "wb"))==NULL)
//		puts("\n\n Error, Can't Create a Database File!'");
//	
//	if(fwrite(std_array, sizeof(std_array), 1, fp)!=1)
//	    puts("\n Error, Can't Save Data!'");
//            
//	//Save the Current Size of the Database
//	if(fwrite(&currentSize, sizeof(currentSize), 1, fp)!=1)
//		puts("\n Error, Can't Save Data!'");
//		
//	//Save the Database Contents
//	if(fwrite(&id, sizeof(id), 1, fp)!=1)
//		puts("\n Error, Can't Save Data!'");
//		
//	fclose(fp);
//} //f13


void readFromFile()
{	ifstream file(file, ios::in | ios::binary);

 
	file.read((char*) std_array ,sizeof(std_array));

	file.read((char*) &currentSize ,sizeof(currentSize));

	file.read((char*) &id ,sizeof(id));


  	file.close();
}


void save()
{	ofstream file(file, ios::out | ios::binary);

 
	file.write((char*) std_array ,sizeof(std_array));

	file.write((char*) &currentSize ,sizeof(currentSize));

	file.write((char*) &id ,sizeof(id));


  	file.close();
}

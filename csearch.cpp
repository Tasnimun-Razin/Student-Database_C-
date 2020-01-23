#include<cstdio>
#include<cstdlib>
#include<cstring>

#include<iostream>
//#include<fstream>
using namespace std;

#include "cprototype.h"
//#include "cfunctions.cpp"

void search_stdnt(char *text, search_t type)
{	int title=0, i;
	
	
	if(type==F_NAME)
	{	for(i=0; i<currentSize; i++)
		{	if(strcmp(text, std_array[i].f_name)==0)
			{	++title;
				if(title==1)
					heading();
				display(i);					
			}
			
			else
				cout<<" !!Sorry, No Record Found!!";
	
			//display(i);
		}
	}
	
	
	if(type==L_NAME)
	{	for(i=0; i<currentSize; i++)
		{	if(strcmp(text, std_array[i].l_name)==0)
			{	++title;
				if(title==1)
					heading();
				display(i);					
			}
			
			else
				cout<<" !!Sorry, No Record Found!!";
	
			//display(i);
		}
	}
	
	
	if(type==C_NAME)
	{	for(i=0; i<currentSize; i++)
		{	if(strcmp(text, std_array[i].c_name)==0)
			{	++title;
				if(title==1)
					heading();
				display(i);					
			}
			
			else
				cout<<" !!Sorry, No Record Found!!";
	
			//display(i);
		}
	}
	
	
	if(type==B_G)
	{	for(i=0; i<currentSize; i++)
		{	if(strcmp(text, std_array[i].b_g)==0)
			{	++title;
				if(title==1)
					heading();
				display(i);					
			}
			
			else
				cout<<" !!Sorry, No Record Found!!";
	
			//display(i);
		}
	}
	
	
	if(type==EMAIL)
	{	for(i=0; i<currentSize; i++)
		{	if(strcmp(text, std_array[i].email)==0)
			{	++title;
				if(title==1)
					heading();
				display(i);					
			}
			
			else
				cout<<" !!Sorry, No Record Found!!";
	
			//display(i);
		}
	}
	
	
	if(type==C_N)
	{	for(i=0; i<currentSize; i++)
		{	if(strcmp(text, std_array[i].c_n)==0)
			{	++title;
				if(title==1)
					heading();
				display(i);					
			}
			
			else
				cout<<" !!Sorry, No Record Found!!";
	
			//display(i);
		}
	}
}

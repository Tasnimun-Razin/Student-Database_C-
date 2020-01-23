#ifndef PROTOTYPES
#define PROTOTYPES

typedef enum{F_NAME, L_NAME, C_NAME, B_G, EMAIL, C_N}search_t;

typedef struct student
{	char f_name[10];
	char l_name[10];
	//char n_name[7];
	char c_name[5];
	int ssc_year;
	char b_g[5];
	char email[25];
	char c_n[20];
	float gpa;
	char schlrshp[15];
	int pay;
//	int adv[5];
//	int dues[5];
//	char date[10];*/
	int id;
}DATA;


// prototypes
void readFromFile();
	
void add();

void display(int);
/*void displaySM(); */
void displayAll();
/*void displayFull();
void displayDues();
void display_NotPaid();
void displayD(int);
void displayNP(int);*/

void search_stdnt(char *text, search_t type);

void save();
void del();
/*void fremove(); */
void modify();

void heading();
/*void headingDues();
void heading_NotPaid();*/



#endif

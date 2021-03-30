#include <iostream>
#include <string.h>
#include <iomanip>
#include <conio.h>
using namespace std;
int num;
const string sub[6]={"Math","Phsical","Engile","Arbic","Criar","Computer"};
const string sub2[6]={"C++","Math2","Arbic2","Phsical","Draw","Curicut "};
struct subject{
	int d[6];
	int hours[6];
	int sum;
	float avg;
	string sub[6];
};

struct student{
string name_studen;
string address;
int ID;
 subject course;
};

struct collag{
string name_of_dep;		
	student s [100];
};

void information();
void chose();
void add_info(collag&);
void out();


int main(){ int cho,y;
collag Taiz;
information();
getch();
system("cls");
chose();	
cin>>cho;
switch(cho)
{case 1:cout<<"If you want 1st term\n press 1 and if you want 2nd term press 2\n";
cin>>y;
	switch(y){
		case 1:cout<<setw(25)<<"## FIRST LEVEL ##\n";
		add_info(Taiz);break;
		system("cls");
cout<<"\t****************************\n";
cout<<"\t* 1)Search about student   *\n";
cout<<"\t* 2)Get the Mark of All        *\n";
cout<<"\t* 3)Get the                            *\n";
cout<<"\t *4)Dispay All the informa  *\n";
cout<<"\t****************************\n";
		case 2:
		cout<<setw(25)<<"##SECENED LEVEL ##\n";
		
		add_info(Taiz);break;
		
	}break;
	
			}	
out ();			
			
}
 void information(){
cout<<"\t#Welcome to my project \n"   "\tfor control of faculty of\n\tengineering and IT #\n\n";
 }
 
 void chose(){
	cout<<"If you want 1st level \npress 1 and if you want 2nd level press 2\n";
 	
 }
void add_info(collag &col)
{cout<<" Plz Enter the Department ";
	cin>>col.name_of_dep;
	cout<<"Plz Enter the number of student in "<<col.name_of_dep<<"'s ";
	cin>>num;
	col.s[num];
	string y;
	getline(cin,y);
for(int i=0;i<num;i++)	
	{cout<<"Plz Enter the name of student number "<<i+1<<" ";
		getline(cin,col.s[i].name_studen);
	cout<<"You have 6 Subject in ";
	cout<<col.name_of_dep<<" \n";
	for(int j=0;j<6;j++){
//	cout<<"enter the name of subject "<<j+1<<" ";
cout<<"Subject num "<<j+1;
//cout<<endl;
cin>>	col.s[i].course.sub[j];}
	cout<<"Plz Enter the hours of every subjects \n ";
	for(int j=0;j<6;j++)
	{cout<<"Enter the hours of ";
	cout<<col.s[i].course.sub[j]<<" ";
	cin>>col.s[i].course.hours[j];}
	cout<<"Plz Enter the degree of subjects \n";
	for(int j=0;j<6;j++){
	level : cout<<"enter the mark of ";
	cout<<col.s[i].course.sub[j]<<"  ";
	cout<<"It's hours is ";
	cout<<col.s[i].course.hours[j]<<" ";
	if(col.s[i].course.hours[j]==2)
v:	{cin>>col.s[i].course.d[j];
	if(col.s[i].course.d[j]<=100&&
	col.s[i].course.d[j]>=0)
	cout<<"You insert mark number "<<1+j<<endl;
	else
	{cout<<"Plz try again ";
	goto v;}
	}
	else if(col.s[i].course.hours[j]==3)
h:{cin>>col.s[i].course.d[j];
	if(col.s[i].course.d[j]<=150&&
	col.s[i].course.d[j]>=0)
	cout<<"You insert mark number "<<1+j<<endl;
	else
	{cout<<"Plz try again ";
	goto h;}
	}
	else if(col.s[i].course.hours[j]==4)
k:{cin>>col.s[i].course.d[j];
	if(col.s[i].course.d[j]<=200&&
	col.s[i].course.d[j]>=0)
	cout<<"You insert mark number "<<1+j<<endl;
	else
	{cout<<"Plz try again ";
	goto k;}
	}
	
}//end for mark
	getline(cin,y);
	}//end of first for
	cout<<"Sussfull..!\n";

}// end of function 
void out(collag &col){

cout<<"The department is "<<col.name_of_dep;
col.s[num];
for(int i=0;i<num;i++)	
{
cout<<"The name is "<<col.s[i].name_studen;
}

	












}



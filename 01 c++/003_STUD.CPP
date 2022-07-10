#include<iostream.h>
#include<conio.h>
#include<string.h>

int N=10;

struct student {
 char name[10];
 int sno;
 int mark1, mark2, mark3, total;
 float avg;
 char result[6];
} s[10];

void create(void);
void cal(int);
void display();

void create(void) {
 cout<<"Create:\n";
 for (int i=0; i<N; i++) {
  cout<<"Enter student name: ";
  cin>>s[i].name;
  cout<<"Enter student roll no: ";
  cin>>s[i].sno;
  cout<<"Enter mark 1: ";
  cin>>s[i].mark1;
  cout<<"Enter mark 2: ";
  cin>>s[i].mark2;
  cout<<"Enter mark 3: ";
  cin>>s[i].mark3;
 }
}

void cal(int x) {
 s[x].total = s[x].mark1+s[x].mark2+s[x].mark3;
 s[x].avg = s[x].total/3.0;
}

void display() {
 cout<<"Display:\n";
 cout<<"Name: \t Roll No \t Mark 1 \t Mark 2 \t Mark 3 \t Total \t Average\n";
 for (int i=0; i<N; i++) {
  cal(i);
  cout<<s[i].name<<"\t"<<s[i].sno<<"\t"<<s[i].mark1<<"\t"<<s[i].mark2<<"\t"<<s[i].mark3<<"\t"<<s[i].total<<"\t"<<s[i].avg<<"\n";
 }
}

void main(void) {
 int ch, t;
 clrscr();

 do {
  cout<<"\n1.CREATE \t 2.DISPLAY \nEnter your choice: ";
  cin>>ch;

  switch(ch) {
   case 1:
	create();
	break;
   case 2:
	display();
	break;
   default:
	cout<<"Wrong choice..\n";
	break;
  }
  cout<<"Do you want to continue? Press(0/1): ";
  cin>>t;
 } while (t!=0);
}
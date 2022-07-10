#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>

class string {
 char str[80];
 public:
	string() {
	 strcpy(str, "");
	}

	friend istream& operator >> (istream&, string&);
	friend ostream& operator << (ostream&, string&);
	string operator + (string a);
	int operator == (string a);
	int operator != (string a);
	int operator < (string a);
	int operator > (string a);
};

istream& operator >> (istream& in, string& s) {
 gets(s.str);
 return in;
}

ostream& operator << (ostream& out, string& s) {
 puts(s.str);
 return out;
}

string string::operator + (string a) {
 string b;
 strcpy(b.str, str);
 strcat(b.str, a.str);
 return (b);
}

int string::operator == (string a) {
 if (strcmp(str, a.str)==0) {
  return 1;
 }
 else {
  return 0;
 }
}

int string::operator != (string a) {
 if (strcmp(str,a.str)==0) {
  return 0;
 }
 else {
  return 1;
 }
}

int string::operator < (string a) {
 if (strcmp(str, a.str)<0) {
  return 1;
 }
 else {
  return 0;
 }
}

int string::operator > (string a) {
 if (strcmp(str, a.str)<0) {
  return 0;
 }
 else {
  return 1;
 }
}

void main(void) {
 string s1, s2, s3, s4;
 clrscr();
 cout<<"Enter the first string: ";
 cin>>s1;
 cout<<"Enter the secound string: ";
 cin>>s2;

 cout<<"string 1 is "<<s1;
 cout<<"string 2 is "<<s2;

 s3 = s1+s2;
 cout<<"Concatinated string is "<<s3;

 if(s1==s2) {
  cout<<"Strings are equal!\n";
 }

 if(s1!=s2) {
  cout<<"Strings are not equal!\n";
 }

 if(s1<s2) {
  cout<<"string 1 is less than string 2!\n";
 }

 if(s1>s2) {
  cout<<"string 1 is greater than string 2!\n";
 }

 s4=s1;
 cout<<"copy of string 1 is "<<s4;
 getch();
}
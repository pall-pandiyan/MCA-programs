#include <iostream>
#include <string.h>
#include <stdio.h>
#include <cmath>

using namespace std;

class string {
    char str[80];
    public:
        string() {
            strcpy(str,"");
        }
        friend istream&operator>>(istream&, string&);
        friend ostream&operator<<(ostream&, string&);
        string operator+(string a);
        int operator==(string a);
        int operator!=(string a);
        int operator<(string a);
        int operator>(string a);
};

istream&operator>>(istream&in, string&s) {
    gets(s, str);
    return in;
}
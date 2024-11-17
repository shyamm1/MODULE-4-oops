// 11 /* Write a program to concatenate the two strings using Operator Overloading */

#include<iostream>
#include<string.h>
using namespace std;

class String {
    private :
        char *str;

    public :
        String(const char *s = "") {
            str = new char[strlen(s) + 1];
            strcpy(str, s);
        }
        ~String() {
            delete [] str;
        }
        void get() {
            cout<< str << endl;
        }
        String operator+(const String &s) {
            String temp;
            temp.str = new char [strlen(str) + strlen(s.str) + 1];
            strcpy(temp.str, str);
            strcat(temp.str, s.str);
            return temp;
        }
};
int main()
{
    String s1("Hello");
    String s2("world");

    s1.get();
    s2.get();

    String s3 = s1 + s2;
    s3.get();

    return 0;
}

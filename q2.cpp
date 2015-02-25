/*
 Program: Question no 2.
 Name   : Alan khadka
 Roll   : 0319
 Output : Fred Jones
*/

#include<iostream>

using namespace std;

int main()
{
	string s;
    string *p;
    s = "Fred Jones";
    p = &s;
    cout<< *p;
}

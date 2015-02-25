/*
 Program: Question no 3.
 Name   : Alan khadka
 Roll   : 0319
 Output : 10
*/

#include<iostream>

using namespace std;

void doubleref(int *p) {(*p) = (*p)*2;}

int main()
{
	int a=5;
    doubleref(&a);
    cout<< a;
}

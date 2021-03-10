#include <iostream>
using namespace std;
 void size (int a[])
 {
     cout << sizeof(a);

 }
 int main()
 {
     int a[100];
     cout << sizeof(a) << endl;
     size(a);
 }


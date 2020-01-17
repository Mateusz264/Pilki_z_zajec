#include<iostream>
#include<string>

using namespace std;

auto main() -> int {

    string s1; 

    const char *t = "tekst do inicjalizacji";
    s1 =t;
    string s2(s1);
    string s3(t,8);
    string s4(s2, 6, 8 );
    string s5(100, '*');
    string s6 = "konstrukcja";
    string s7 = ("uniwersalna inicjalizacja");

 s1 = s1 + "drugi" +s2;
 cout << s1;
 s1 += s6;
 cout << s1;

}

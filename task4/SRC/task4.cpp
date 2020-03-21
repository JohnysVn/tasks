#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

void Check(string str1, string str2)
{     
            char a[20]{ "" };

            char b[20]{ "" };

            char* t;

            strcpy_s(a, str1.c_str());

            strcpy_s(b, str2.c_str());

            if (t = strchr(a, '*'))
            {               
                  cout << "ok " << endl;
                     
            }
            else if (str1 == str2)
            {
                cout << "ok " << endl;
            }
            else if (t = strchr(b, '*'))
            {
                cout << "ok" << endl;
            }
            else
            {
                cout << "ko" << endl;
            }

}


int main(int argc, char* argv[])
{
    if (argc <= 1)
    {
        if (argv[0])
            cout << "Usage: " << argv[0] << " <string>" << '\n';
        else
            cout << "Usage: <program name> <string>" << '\n';

        exit(1);
    }

    string str1(argv[1]);

    string str2(argv[2]);

    Check(str1, str2);
    return 0;
}
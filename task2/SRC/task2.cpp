#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void Triangle(string path)
{
    string input = " ";

    string start = "start", finish = "finish";

    string str1;

    string str2;

    string s;  

    ifstream fin;

    fin.open(path);

    if (!fin.is_open())

    {
        cout << "Error ";
    }
    else
    {
        getline(fin, input, 'A');

        input.erase(0, input.find(start) + start.length() + 8);

        getline(fin, str1, '}');

        getline(fin, s, ',');

        getline(fin, input, 'A');

        input.erase(0, input.find(start) + start.length() + 8);

        getline(fin, str2, '}');


        if (str1 == str2)
        {
            cout << "true" << endl;
        }
        else
        {
            cout << "false" << endl;
        }

    }
    fin.close();
}


int main(int argc, char* argv[])
{
	string path = ("Triangle.txt");

    Triangle(path);
  
 
	return 0;
}
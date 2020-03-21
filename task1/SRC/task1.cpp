#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class File
{
private:
	int size = 100;

public:

	void Take(string path)
	{
		int finish = 0;
		int prec = 0;
		int a = 0;
		int result;
		int sum = 0;
		float max = 0;
		int* p_arr = new int [size] {};

		ifstream fin;

		fin.open(path);

		if (!fin.is_open())
		{
			cout << "file not open" << endl;
		}
		else
		{
			int number = 0;
			char ch;
			while (!fin.eof() ||fin.get(ch))
			{

				fin >> number;

				p_arr[a] = number;
			
				a++;

			}
			for (int i = 0; i < a; i++)
			{
				sum += p_arr[i];
			}
			result = sum / a;

			max = p_arr[a];
			for (int i = 0; i < a; ++i)
			{
				if (p_arr[i] > max)
				{
					max = p_arr[i];
				}
			}
			
				prec = (max / 100) * 90;
				

				for (int i = 0; i < a; i++)
				{
					while (p_arr[i] <= prec)
					{
						if (p_arr[i] >= result)
						{
							finish += p_arr[i];
						}
						break;
					}
					
				}
			cout << finish << endl;

			
			delete[]p_arr;
			fin.close();
		}

		

	}
};



int main(int argc, char*argv [])
{
	setlocale(LC_ALL, "ru");
	
	string path = (argv[1]);
	
	File f;
	f.Take(path);

	system("pause");
	
	return 0;
}
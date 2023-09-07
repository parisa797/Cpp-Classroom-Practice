
#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include <iomanip>

using namespace std;

struct moshtari
{
	string Fname;
	string Lname;
	string meghdarekharid;

};
int Insertmoshtari();
int Showmoshtari();
vector<moshtari> m1;
moshtari m;

int moshtaricounter = 0;

int main()
{
	ifstream std("mostari.txt");
	while (std >> m.Fname)
	{
		std >> m.Fname;
		std >> m.Lname;
		std >> m.meghdarekharid;


		m1.push_back(m);
		moshtaricounter++;
	}

	std.close();
	ofstream st("moshtari.txt");
	for (int i = 0; i < moshtaricounter; i++)
	{

		st << m1[i].Fname << endl;
		st << m1[i].Lname << endl;
		st << m1[i].meghdarekharid << endl;

	}
	int Insertmoshtari()

	for (int i = moshtaritcounter; i < 5; i++)
	{
		cout << "Please introdouce  moshtari(first name=end for finished): " << endl;
		cout << "First name: " << endl;
		cin >> m.Fname;
		if (m.Fname == "end")
		{
			return 0;
		}
		cout << "Last name: " << endl;
		cin >> m.Lname;
		do {
			cout << " meghdarekharid" << endl;
			cin >> meghdarekharid;
			for (int counter = 0; counter < moshtaricounter; counter++)
			{
				found = false;

				break;
			}
		}
		if (found == false)
		{
			break;
		}

		int Showmoshtari()
		{
			moshtari temp;
			for (int i = 0; i < moshtaricounter - 1; i++)
			{
				for (int j = 0; j < moshtaricounter - i - 1; j++)
				{
					if (m1[j].Lname > m1[j + 1].Lname)
					{
						temp = m1[j];
						m1[j] = m1[j + 1];
						m1[j + 1] = temp;
					}
				}
			}
			moshtari m;
			for (int i = 0; i < moshtaricounter; i++)
			{


				cout << "First name: " << m1[i].Fname << endl;
				cout << "Last name: " << m1[i].Lname << endl;
				cout << "meghdarekharid: " << m1[i].meghdarekharid << endl;
			}
			return 0;
		}

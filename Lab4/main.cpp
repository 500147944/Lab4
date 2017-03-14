#include<iostream>
#include<conio.h>  //let  me use getch
#include<iomanip>  //setw and setprecision
#include<vector>
#include<string>


// Larry Propson, Alex Star, Ross Weiland, Veronika Evgrafova

using namespace std;

struct employee
{
	string ID;
	string Firstname;
	string Lastname;
	float payrate;
	float whours;
};

int main()
{

	employee em;

	vector<employee> employees;
	
	while (true)
	{
		cout << "Add another employee? (y/n) ";
		char input;
		cin >> input;

		if (input == 'y' || input == 'Y')
		{
			cout << "ID: ";
			cin >> em.ID;

			cout << "First Name: ";
			cin >> em.Firstname;

			cout << "Last Name: ";
			cin >> em.Lastname;

			cout << "Pay Rate: ";
			cin >> em.payrate;

			cout << "Hours Worked: ";
			cin >> em.whours;

			employees.push_back(em);
		}
		else
			break;

	}

	float total = 0;
	vector<employee>::iterator it;
	it = employees.begin();
	for (; it != employees.end(); it++)
	{
		cout << it->ID << " " << it->Firstname << " " << it->Lastname << " has Gross pay: " << (it->payrate * it->whours) << endl;

		total += (it->payrate * it->whours);
	}

	cout << "Overall Total: "<< total;

	_getch();
	return 0;
}
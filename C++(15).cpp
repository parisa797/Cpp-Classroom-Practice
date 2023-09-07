#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include <iomanip>

using namespace std;

struct student
{
	string name;
	string Lastname;
	string studentId;
	string enterYear;
	string melliId;
};
struct teacher
{
	string name;
	string Lastname;
	string teacherId;
};
struct lesson
{
	string coursename;
	string courseId;
	string unitNumber;

};
int InsertStudent();
int EditStudent();
string coding(string s);
int ShowStudent();
int InsertTeacher();
int ShowTeacher();
vector<student> s1;
vector<teacher> t1;
vector<lesson> l1;
student s;
teacher t;
lesson l;

int studentcounter = 0;
int teachercounter = 0;
int lessoncounter = 0;
int main()
{
	//ifstream countsave("counter.txt");
	//countsave >> studentcounter;
	//countsave >> teachercounter;
	//countsave.close();
	ifstream std("student.txt");
	while(std >> s.Fname)
	{
			std >> s.name;
			std >> s.Lastname;
			std >> s.studentId;
			std >> s.enterYear;
			std >> s.melliId;
			s.Fname = coding(s.name);
			s.Lname = coding(s.Lastname);
			s.studentId = coding(s.studentId);
			s.enterYear = coding(s.enterYear);
			s.nationalnum = coding(s.melliId);
			s1.push_back(s);
			studentcounter++;
	}
	
	std.close();
	ifstream teach("teacher.txt");
	while (getline(teach,t.name))
	{

			teach >> t.Lastname;
			teach >> t.teacherId;
			t.Fname = coding(t.name);
			t.Lname = coding(t.Lastname);
			t.teacherId = coding(t.teacherId);
			t1.push_back(t);
			teachercounter++;
	}
	teach.close();
	int opt;
	cout << "1:management student" << endl;
	cout << "2:management professor" << endl;
	cout << "3:Lessons" << endl;
	cout << "4:Lesson in progress" << endl;
	cout << "5:Exit" << endl;
	cout << "please enter your option= " << endl;
	cin >> opt;
	while (opt != 5)
	{
		if (opt == 1)
		{
			cout << "1:Insert information" << endl;
			cout << "2:Edit information" << endl;
			cout << "3:Show student information" << endl;
			cout << "4:Delete student's information" << endl;
			cout << "please enter your option= " << endl;
			cin >> opt;
			if (opt == 1)
			{
				InsertStudent();
			}
			else if (opt == 2)
			{
				EditStudent();
			}
			else if (opt == 3)
			{
				ShowStudent();
			}
			//else if (opt == 4)
			//{
			//	DeleteStudent();
			//}
		}
		else if (opt == 2)
		{
			cout << "1:Insert information" << endl;
			cout << "2:Show teacher information" << endl;
			cout << "please enter your option= " << endl;
			cin >> opt;
			if (opt == 1)
			{
				InsertTeacher();
			}
			if (opt == 2)
			{
				ShowTeacher();
			}
		}
		cout << "1:management student" << endl;
		cout << "2:management professor" << endl;
		cout << "3:Lessons" << endl;
		cout << "4:Lesson in progress" << endl;
		cout << "5:Exit" << endl;
		cout << "please enter your option= " << endl;
		cin >> opt;
	}
	ofstream st("student.txt");
	for (int i = 0;i < studentcounter;i++)
	{
		s1[i].name = coding(s1[i].name);
		s1[i].Lastname = coding(s1[i].Lastname);
		s1[i].studentId = coding(s1[i].studentId);
		s1[i].enterYear = coding(s1[i].enterYear);
		s1[i].melliId = coding(s1[i].melliId);
		st << s1[i].name << endl;
		st << s1[i].Lastname << endl;
		st << s1[i].studentId << endl;
		st << s1[i].enterYear << endl;
		st << s1[i].melliId << endl;
	}
	st.close();
	ofstream th("teacher.txt");
	for (int i = 0;i < teachercounter;i++)
	{
		t1[i].name = coding(t1[i].Fname);
		t1[i].Lastname = coding(t1[i].Lname);
		t1[i].teacherId = coding(t1[i].teacherId);
		th << t1[i].name << endl;
		th << t1[i].Lastname << endl;
		th << t1[i].teacherId << endl;
	}
	th.close();
	//ofstream counts("counter.txt");
	//counts << studentcounter;
	//counts << teachercounter;
	//counts.close();
}
int InsertStudent()
{
	bool num = false;
	bool found = false;
	string stId;
	string melliId;
	int size;
	student s;
	for (int i = studentcounter;i < 1000;i++)
	{
		cout << "Please introdouce the student(first name=end for finished): " << endl;
		cout << "First name: " << endl;
		cin >> s.name;
		if (s.name == "end")
		{
			return 0;
		}
		cout << "Last name: " << endl;
		cin >> s.Lastname;
		do {
			cout << "Student Id: " << endl;
			cin >> stId;
			for (int counter = 0;counter < studentcounter;counter++)
			{
				found = false;
				if (s1[counter].studentId == stId)
				{
					cout << "Your Id is exited" << endl;
					found = true;
					break;
				}
			}
			if (found == false)
			{
				break;
			}

		} while (true);

		s.studentId = stId;
		cout << "Enter year of entring: " << endl;
		cin >> s.enterYear;
		do
		{
			cout << "melliId: " << endl;
			cin >> melliId;
			size = melliId.size();
		} while (size != 10);
		s.nationalnum = melliId;
		s1.push_back(s);
		studentcounter++;
	}
}
int ShowStudent()
{
	student temp;
	for (int i = 0;i < studentcounter-1;i++)
	{
		for (int j = 0;j < studentcounter - i - 1;j++)
		{
			if (s1[j].Lastname > s1[j + 1].Lastname)
			{
				temp = s1[j];
				s1[j] = s1[j + 1];
				s1[j + 1] = temp;
			}
		}
	}
	student s;
	for (int i = 0;i < studentcounter;i++)
	{
		cout << "First name: " << s1[i].name << endl;
		cout << "Last name: " << s1[i].Lastname << endl;
		cout << "Student Id: " << s1[i].studentId << endl;
		cout << "Entery year: " << s1[i].enterYear << endl;
		cout << "melliId: " << s1[i].melliId << endl;
	}
	return 0;
}
int EditStudent()
{
	string Id;
	string melliId;
	int size;
	student s;
	bool found = false;
	cout << "Please enter student Id for editing= " << endl;
	cin >> Id;
	for (int i = 0;i < studentcounter;i++)
	{
		if (s1[i].studentId == Id)
		{
			cout << "First name: " << s1[i].name << endl;
			cout << "Last name: " << s1[i].Lastname << endl;
			cout << "Student Id: " << s1[i].studentId << endl;
			cout << "Entery year: " << s1[i].enterYear << endl; << endl;
			cout << "First name: " << endl;
			cin >> s1[i].name;
			cout << "Last name: " << endl;
			cin >> s1[i].Lastname;
			cout << "Enter year of entring: " << endl;
			cin >> s1[i].enterYear;
			do
			{
				cout << "melliId: " << endl;
				cin >> melliId;
				size = melliId.size();
			} while (size != 10);
			s1[i].melliId = melliId;
			found = true;
			break;
		}
	}
	if (!found)
	{
		cout << "This student is not found in this university!" << endl;
	}
	return 0;
}
int InsertTeacher()
{
	bool num = false;
	bool found = false;
	string teachId;
	string melliId;
	int size;
	for (int i = teachercounter;i < 1000;i++)
	{
		cout << "Please introdouce the teacher(first name=end for finished): " << endl;
		cout << "First name: " << endl;
		cin >> t.name;
		if (t.name == "end")
		{
			return 0;
		}
		cout << "Last name: " << endl;
		cin >> t.Lastname;
		do {
			cout << "Teacher Id: " << endl;
			cin >> teachId;
			for (int counter = 0;counter < teachercounter;counter++)
			{
				found = false;
				if (t1[counter].teacherId == teachId)
				{
					cout << "Your Id is exited" << endl;
					found = true;
					break;
				}
			}
			if (found == false)
			{
				break;
			}

		} while (true);
		t.teacherId = teachId;
		t1.push_back(t);
		teachercounter++;
	}
}
int ShowTeacher()
{
	teacher temp;
	for (int i = 0;i < teachercounter - 1;i++)
	{
		for (int j = 0;j < teachercounter - i - 1;j++)
		{
			if (t1[j].Lastname > t1[j + 1].Lastname)
			{
				temp = t1[j];
				t1[j] = t1[j + 1];
				t1[j + 1] = temp;
			}
		}
	}
	teacher t;
	for (int i = 0;i < teachercounter;i++)
	{
		cout << "First name: " << t1[i].name << endl;
		cout << "Last name: " << t1[i].Lastname << endl;
		cout << "Teacher Id: " << t1[i].teacherId<< endl;
	
	}
	return 0;
}
string coding(string s)
{
	string Encrkey = "ABC";
	string scode;
	int kylen = Encrkey.length();
	for (int k = 0;k < s.length();k++)
	{
		scode += s[k] ^ Encrkey[k%kylen];
	}
	return scode;
}



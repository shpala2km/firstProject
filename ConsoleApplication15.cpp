#include <iostream>
using namespace std;

class Person
{
public:
	string name_;
	int age_;
	char gender_;
	int deti_;
	Person(string name, int age, char gender, int deti)
	{
		name_ = name;
		age_ = age;
		gender_ = gender;
		deti_ = deti;
		cout << "object has been created at adress: " << this << "\n";
	}
	~Person()
	{
		cout << "object has been deleted. Its adress was: " << this << "\n";
	}

	string getName()
	{
		return this->name_;
	}
	int getAge()
	{
		return this->age_;
	}
	char getGender()
	{
		return this->gender_;
	}
	int getDeti()
	{
		return this->deti_;
	}
	string setName(string name)
	{
		name_ = name;
	}
	int setAge(int age)
	{
		age_ = age;
	}
	char setGender(char gender)
	{
		gender_ = gender;
	}
	int setDeti(int deti)
	{
		deti_ = deti;
	}
};

int main()
{
	Person* man1 = new Person("John", 21, 'M', 3);
	Person* man2 = new Person("Mary", 41, 'F', 5);

	delete man1;
	delete man2;
	return 0;
}

#include "Person.h"
#include <string>

#define MALE = true;
#define FEMALE = false;

using namespace std;

class Person {
public:
	Person(string name, unsigned yo)
	{
		age = yo;

	};
	~Person();


	string first_name;
	string last_name;
	bool male_or_female;
	unsigned age;

	void AgeUp() {
		age++;
	}

private:
	string set_name(string name)
	{
		first_name = name.substr(0, name.find(" "));
		last_name = name.substr(name.find(" ") + 1, name.length() - 1);
	}
};
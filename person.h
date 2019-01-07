#pragma once
#include <string>
#include <iostream>
#include "role.h"
#include <vector>

using namespace std;

class Person {

public:
    friend std::ostream& operator<<(std::ostream &out, const Person &p);
    friend std::istream& operator>>(std::istream &in, Person &p);
    void setmFirstName(string fN);
    void setmLastName(string lN);
    void setmBirthday(string birthD);
    void setmCNP(string CNP);
    void setmEmail(string Email);
    string  getmFirstName( );
    string getmLastName( );
    string getmBirthday( );
    string getmEmail();
    string getmCNP();
	void addrole(role*);
	Person(string FirstName = "", string LastName = "", string CNP = "", string Email = "", string Birthday = "");
	~Person();
protected:
	std::string mFirstName;
	std::string mLastName;
	std::string mCNP;
	std::string mEmail;
	std::string mBirthday;
	vector<role*>mRoles;
};



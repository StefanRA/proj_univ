#include "pch.h"
#include "person.h"
#include <string>
#include <iostream>

using namespace std;

Person::Person(string FirstName, string LastName,string CNP, string Email, string Birthday)
{
  mFirstName = FirstName;
  mLastName= LastName;
  mCNP= CNP;
  mEmail=Email;
  mBirthday=Birthday;
}
void Person::setmFirstName(string fN)
{
   mFirstName = fN;
}
void Person::setmLastName(string lN)
{
  mLastName = lN;
}
void Person::setmBirthday(string birthD)
{
  mBirthday = birthD;
}
void Person::setmCNP(string CNP)
{
  mCNP = CNP;
}
void Person::setmEmail(string Email)
{
  mEmail = Email;
}
string  Person::getmFirstName( )
{
  return mFirstName;
}
string Person::getmLastName( )
{
  return mLastName;
}
string Person::getmCNP( )
{
  return mCNP;
}
string Person::getmEmail( )
{
  return mEmail;
}
string Person::getmBirthday( )
{
  return mBirthday;
}

std::ostream & operator <<(std::ostream &out, const Person &p)
{
	out << p.mBirthday << p.mEmail << p.mCNP << p.mFirstName << p.mLastName;
	return out;
	
}

std::istream & operator >>(std::istream &in, Person &p)
{
	in >> p.mBirthday >> p.mEmail >> p.mCNP >> p.mFirstName >> p.mLastName;
	return in;

}

void Person::addrole(role* role)
{
	mRoles.push_back(role);
}
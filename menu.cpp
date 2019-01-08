#include "menu.h"
#include "studentrole.h"
#include "teacherrole.h"
#include <string>
#include<iostream>
#include<limits>
using namespace std;

bool Menu::CheckInput(std::string input) {
	int a;

	cout << "Introduceti un numar intreg";
	cin >> a;
	while (1)
	{
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Input introdus gresit!" << endl;
			cin >> a;
		}
		if (!cin.fail())
		{
			return false;
			break;
		}
	}

	cout << "numarul este :" << a << endl;
	return true;
}

void Menu::StartMenu() {

setariMeniu:

	std::cout << "                    Pagina principala meniu(alegeti o optiune)\n\n";
	std::cout << "1. Persoana\n2. Activitati\n3. Discipline\n4. Catalog\n5. Arhive\n\n6. Iesire\n\n";
	std::string inputString;

here:

	do {
		std::cout << ">";
		std::cin >> inputString;
	} while (!CheckInput(inputString));
	int input = std::stoi(inputString);
	switch (input) {
	case Type::PERSON:
		system("clear");
		PersonMenu();
		system("clear");
		goto setariMeniu;

	case Type::ACTIVITY:
		system("clear");
		ActivityMenu();
		system("clear");
		goto setariMeniu;

	case Type::DISCIPLINE:
		system("clear");
		DisciplineMenu();
		system("clear");
		goto setariMeniu;

	case Type::CLASSBOOK:
		system("clear");
		ClassBookMenu();
		system("clear");
		goto setariMeniu;

	case Type::REPOSITORY:
		system("clear");
		RepositoryMenu();
		system("clear");
		goto setariMeniu;

	case Type::EXIT:
		system("clear");
		break;

	default:
		std::cout << "Input introdus gresit!\n";
		goto here;
	}
}
void Menu::PersonMenu() {
	enum Type {
		ADD_PERSON = 1,
		DELETE_PERSON,
		MODIFY_PERSON,
		ADD_ROLE,
		REMOVE_ROLE,
		RETURN
	};

setariMeniu:

	std::cout << "                    Meniu persoana(alegeti o optiune)\n\n";
	std::cout << "1. Adauga persoane\n2.Sterge o persoana\n3. Modifica o persoana\n4. Adauga un rol unei persoane\n5. Sterge rolul unei persoane\n\n6. Inapoi\n\n";
	std::string inputString;

here:

	do {
		std::cout << ">";
		std::cin >> inputString;
	} while (!CheckInput(inputString));
	int input = std::stoi(inputString);
	switch (input) {
	case ADD_PERSON:
		system("clear");
		AddPerson();
		system("clear");
		goto setariMeniu;

	case DELETE_PERSON:
		system("clear");
		DeletePerson();
		system("clear");
		goto setariMeniu;

	case MODIFY_PERSON:
		system("clear");
		EditPerson();
		system("clear");
		goto setariMeniu;

	case ADD_ROLE: {
		system("clear");
		std::string firstName, lastName;
		std::cout << "Introduceti nume= ";
		std::cin >> firstName;
		std::cout << "Introduceti prenume= ";
		std::cin >> lastName;
		Person* person;
		try {
			person = persons.searchByFullName(firstName, lastName);
		}
		catch (std::runtime_error const e) {
			std::cout << e.what() << "\n";
			goto setariMeniu;
		}

		AddRole(person);
		system("clear");
		goto setariMeniu;
	}

	case REMOVE_ROLE:
		system("clear");
		RemoveRole();
		system("clear");
		goto setariMeniu;

	case RETURN:
		system("clear");
		break;

	default:
		std::cout << "Input introdus gresit!\n";
		goto here;
	}
}

void Menu::ActivityMenu() {
	enum Type {
		ADD_ACTIVITY = 1,
		DELETE_ACTIVITY,
		MODIFY_ACTIVITY,
		RETURN
	};

setariMeniu:

	std::cout << "                    Meniu activitate(alegeti o optiune)\n\n";
	std::cout << "1. Adauga activitate\n2. Sterge activitate\n3. Modifica activitate\n\n4. Inapoi\n\n";
	std::string inputString;

here:

	do {
		std::cout << ">";
		std::cin >> inputString;
	} while (!CheckInput(inputString));
	int input = std::stoi(inputString);
	switch (input) {
	case ADD_ACTIVITY:
		system("clear");
		AddActivity();
		system("clear");
		goto setariMeniu;

	case DELETE_ACTIVITY:
		system("clear");
		DeleteActivity();
		system("clear");
		goto setariMeniu;

	case MODIFY_ACTIVITY:
		system("clear");
		EditActivity();
		system("clear");
		goto setariMeniu;

	case RETURN:
		system("clear");
		break;

	default:
		std::cout << "Input introdus gresit!\n";
		goto here;
	}
}

void Menu::DisciplineMenu() {
	enum Type {
		CREATE_DISCIPLINE = 1,
		DELETE_DISCIPLINE,
		ENROLL_STUDENT,
		REMOVE_STUDENT,
		RETURN
	};

setariMeniu:

	std::cout << "                    Meniu disciplina\materie(alegeti o optiune)\n\n";
	std::cout << "1. Creare disciplina\materie\n2. Stergere disciplina\materie\n3. Inroleaza student\n4. Sterge student\n\n5. Inapoi\n\n";
	std::string inputString;

here:

	do {
		std::cout << ">";
		std::cin >> inputString;
	} while (!CheckInput(inputString));
	int input = std::stoi(inputString);
	switch (input) {
	case CREATE_DISCIPLINE:
		system("clear");
		CreateDiscipline();
		system("clear");
		goto setariMeniu;

	case DELETE_DISCIPLINE:
		system("clear");
		DeleteDiscipline();
		system("clear");
		goto setariMeniu;

	case ENROLL_STUDENT:
		system("clear");
		EnrollStudent();
		system("clear");
		goto setariMeniu;

	case REMOVE_STUDENT:
		system("clear");
		RemoveStudentFromDiscipline();
		system("clear");
		goto setariMeniu;

	case RETURN:
		system("clear");
		break;

	default:
		std::cout << "Input introdus gresit!\n";
		goto here;
	}
}

void Menu::ClassBookMenu() {
	enum Type {
		CREATE_CLASSBOOK = 1,
		DELETE_CLASSBOOK,
		ADD_STUDENT,
		REMOVE_STUDENT,
		ADD_MARK,
		MODIFY_MARK,
		SEARCH_STUDENT,
		RETURN
	};

setariMeniu:

	std::cout << "                    Meniu catalog(alegeti o optiune)\n\n";
	std::cout << "1. Creare catalog\n2. Stegere catalog\n3. Adauga student\n4. Sterge student\n5. Adauga nota\n6. Modifica nota\n7. Cauta student\n\n8. Inapoi\n\n";
	std::string inputString;

here:

	do {
		std::cout << ">";
		std::cin >> inputString;
	} while (!CheckInput(inputString));
	int input = std::stoi(inputString);
	switch (input) {
	case CREATE_CLASSBOOK:
		system("clear");
		CreateClassBook();
		system("clear");
		goto setariMeniu;

	case DELETE_CLASSBOOK:
		system("clear");
		DeleteClassBook();
		system("clear");
		goto setariMeniu;

	case ADD_STUDENT:
		system("clear");
		AddStudent();
		system("clear");
		goto setariMeniu;

	case REMOVE_STUDENT:
		system("clear");
		RemoveStudentFromClassBook();
		system("clear");
		goto setariMeniu;

	case ADD_MARK:
		system("clear");
		AddGrade();
		system("clear");
		goto setariMeniu;

	case MODIFY_MARK:
		system("clear");
		UpdateGrade();
		system("clear");
		goto setariMeniu;

	case SEARCH_STUDENT:
		system("clear");
		SearchStudent();
		system("clear");
		goto setariMeniu;

	case RETURN:
		system("clear");
		break;

	default:
		std::cout << "Input introdus gresit!\n";
		goto here;
	}
}

void Menu::RepositoryMenu() {
	enum Type {
		SEARCH_IN_REPO = 1,
		MODIFY_REPO,
		RETURN
	};

setariMeniu:

	std::cout << "                    Meniu arhiva(alegeti o optiune)\n\n";
	std::cout << "1. Cauta in arhiva\n2. Modifica arhiva\n\n3. Inapoi\n\n";
	std::string inputString;

here:

	do {
		std::cout << ">";
		std::cin >> inputString;
	} while (!CheckInput(inputString));
	int input = std::stoi(inputString);
	switch (input) {
	case SEARCH_IN_REPO:
		system("clear");
		SearchInRepo();
		system("clear");
		goto setariMeniu;

	case MODIFY_REPO:
		system("clear");
		goto setariMeniu;

	case RETURN:
		system("clear");
		break;

	default:
		std::cout << "Input introdus gresit!\n";
		goto here;
	}
}

void Menu::SearchInRepo() {

start_initial:

	enum Type {
		PERSONS = 1,
		ROOMS,
		ACTIVITIES,
		CLASSBOOKS,
		DISCIPLINES,
		RETURN
	};
	std::cout << "Ce arhiva doriti sa accesati?\n";
	std::cout << "1. Persoana\n2. Activitati\n3. Discipline\n4. Catalog\n5. Arhive\n\n6. Iesire\n\n";
	std::string inputString;

start:

	do {
		std::cout << ">";
		std::cin >> inputString;
	} while (!CheckInput(inputString));
	int input = std::stoi(inputString);
	switch (input) {
		
	case PERSONS: {
		std::string firstName, lastName;
		Person* person;

	start_1:

		std::cout << "Introduceti numele studentului= ";
		std::cin >> firstName;
		std::cout << "Introduceti prenumele studentului= ";
		std::cin >> lastName;
		try {
			person = persons.searchByFullName(firstName, lastName);
		}
		catch (std::runtime_error const e) {
			std::cout << e.what() << "\n";
			goto start_1;
		}
		std::cout << *person;
		std::cout << "Apasati orice tasta pentru a continua...";
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin.get();
		system("clear");
		goto start_initial;
	}
				 
	case ROOMS: {
		std::string name;
		Room* room;

	start_2:

		std::cout << "Introduceti numele salii= ";
		std::cin >> name;
		try {
			room = rooms.findByName(name);
		}
		catch (std::runtime_error const e) {
			std::cout << e.what() << "\n";
			goto start_2;
		}
		std::cout << "Sala " << room->getName() << " exista.\n";
		std::cout << "Apasati orice tasta pentru a continua...";
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin.get();
		system("clear");
		goto start_initial;
	}
	case ACTIVITIES: {
		std::string acticityName;
		Activity* activity;

	start_3:

		std::cout << "Introduceti numele activitatii=  ";
		std::cin >> acticityName;
		try {
			activity = activities.findByDescription(acticityName);
		}
		catch (std::runtime_error const e) {
			std::cout << e.what() << "\n";
			goto start_3;
		}
		std::cout << "Locatie=  " << activity->getLocation() << "\n";
		std::cout << "Detinator= " << activity->getOwner() << "\n";
		std::cout << "Apasati orice tasta pentru a continua...";
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin.get();
		system("clear");
		goto start_initial;
	}
					
	case CLASSBOOKS: {
		std::string year;
		int studyGroup;
		ClassBook* classBook;

	start_4:

		std::cout << "Introduceti anul=  ";
		std::cin >> year;
		std::cout << "Introduceti numele grupului de studiu = ";
		std::cin >> studyGroup;
		try {
			classBook = classBooks.searchByStudyGroupAndYear(studyGroup, year);
		}
		catch (std::runtime_error const e) {
			std::cout << e.what() << "\n";
			goto start_4;
		}
		std::cout << "Aceasta clasa are " << classBook->getSize() << " studenti.\n";
		std::cout << "Apasati orice tasta pentru a continua...";
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin.get();
		system("clear");
		goto start_initial;
	}
					 
	case DISCIPLINES: {
		std::string disciplineName;
		Discipline* discipline;

	start_5:

		std::cout << "Introduceti numele disciplinei/materiei = ";
		std::cin >> disciplineName;
		try {
			discipline = disciplines.searchByName(disciplineName);
		}
		catch (std::runtime_error const e) {
			std::cout << e.what() << "\n";
			goto start_5;
		}
		std::cout << "Disciplina/materia are " << discipline->getSizeActivities() << " activitati.\n";
		std::cout << "Disciplina/materia are " << discipline->getSizeParticipants() << " participanti.\n";
		std::cout << "Apasati orice tasta pentru a continua...";
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin.get();
		system("clear");
		goto start_initial;
	}

	case RETURN:
		system("clear");
		break;

	default:
		std::cout << "Input introdus gresit!\n";
		goto start;
	}
}
#pragma once

#include "personrepository.h"
#include "roomrepository.h"
#include "activityrepository.h"
#include "classbookrepository.h"
#include "disciplinerepository.h"

class Menu {
public:

	enum Type {
		PERSON = 1,
		ACTIVITY,
		DISCIPLINE,
		CLASSBOOK,
		REPOSITORY,
		EXIT
	};
	bool CheckInput(std::string);
	void StartMenu();
	void PersonMenu();
	void ActivityMenu();
	void DisciplineMenu();
	void ClassBookMenu();
	void RepositoryMenu();
	void AddStudent();
	void SearchStudent();
	void CreateClassBook();
	void DeleteClassBook();
	void RemoveStudentFromClassBook();
	void AddGrade();
	void removeGrade();
	void UpdateGrade();
	void AddPerson();
	void AddRole(Person*);
	void DeletePerson();
	void RemoveRole();
	void EditPerson();
	void AddActivity();
	void DeleteActivity();
	void EditActivity();
	void CreateDiscipline();
	void DeleteDiscipline();
	void EnrollStudent();
	void RemoveStudentFromDiscipline();
	void SearchInRepository();

private:
	PersonRepository persons;
	RoomRepository rooms;
	ActivityRepository activities;
	ClassBookRepository classBooks;
	DisciplineRepository disciplines;

};


#include "headers.h"

int main()
{
    std::vector<Room*> rooms;
    std::vector<Person*> persons;
    std::vector<Activity*> activities;

	Teacher T;
	std::cin>>T;
	std::cout<<T;
	Student s;
	std::cin>>s;
	std::cout<<s;
	int n;
	std::vector<Person*> v;

	rooms.push_back(new Room("A3"));
	persons.push_back(new Person("Andrei"));
	activities.push_back(new Activity(rooms[0], persons[0]));
	persons[0]->addRole(new StudentRole());
	int role = 1;
	std::cout << persons[0]->getRole(role);

	std::cout << "Introduceti numarul de persoane: ";
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		Teacher *t = new Teacher;
		std::cin >> *t;
		v.push_back(t);
	}

	std::cout << "Introduceti numarul de persoane: ";
	int m;
	std::cin >> m;
	for (int i = 0; i < m; i++) {
		Student *s = new Student;
		std::cin >> *s;
		v.push_back(s);
	}
	for (int i = 0; i < n + m; i++) {
		int role = i;
		std::cout << v[i]->getRole(role);
	}


	PersonRepository personrepository;
	personrepository.add(new Person("Ana", "Maria", 1000, "anamaria98@yahoo.com"));
	personrepository.add(new Person("Alexandru", "Popescu", 2000, "alexpopescu99@yahoo.com"));
	Person* person1 = NULL;
	try {
		person1 = personrepository.searchByEmail("alexpopescu99@yahoo.com");
	}
	catch (std::runtime_error const e) {
		std::cout << e.what() << "\n";
	}
	person1->addRole(new StudentRole(1, 2, 431, "taxa"));
	person1->addRole(new TeacherRole);
	if (person1 != NULL) {
		std::cout << person1->getmEmail() << "\n";
	}

	std::vector<Person*> person;
	try {
		person = personrepository.searchByRole(1);
	}
	catch (std::runtime_error const e) {
		std::cout << e.what() << "\n";
	}
	for (int i = 0; i < person.size(); i++) {
		std::cout << person[i]->getmFirstName() << "\n";
	}

	ClassBook classbook(251, "2017-2018");
	try {
		classbook.addStudent(person1);
	}
	catch (std::runtime_error const e) {
		std::cout << e.what() << "\n";
	}
	Person* student2;
	student2 = personrepository.searchByEmail("alexpopescu99@yahoo.com");
	student2->addRole(new StudentRole(15, 1, 431, "taxa"));
	student2->addRole(new TeacherRole);
	std::cout << classbook.getSize() << "\n";
	classbook.addStudent(student2);
	std::cout << classbook.getSize() << "\n";
	classbook.removeByCNP(4028);
	std::cout << classbook.getSize() << "\n";

	Discipline d("ASD", new Activity);
	Person *p2 = new Person("Alexandru", "Popescu", 2000, "alexpopescu99@yahoo.com");
	p2->addRole(new StudentRole(28, 2, 252, "taxa"));
	try {
		p2->addRole(new StudentRole(68, 2, 254, "buget"));
	}
	catch (std::runtime_error const e) {
		std::cout << e.what() << "\n";
	}
	StudentRole* s3 = dynamic_cast<StudentRole*>(p2->displayRole(1));
	std::cout << s3->getGradesSize() << "\n";
	d.addParticipant(p2);
	std::cout << s3->getGradesSize() << "\n";

	RoomRepository rore;
	Room* room;
	rore.add(new Room("Sala 5"));
	rore.add(new Room("Amf. Dimitrie Pompeiu");
	room = rore.findByName("Amf. Dimitrie Pompeiu");
	std::cout << rore.findByName("Amf. Dimitrie Pompeiu")->getName() << "\n";
	std::cout << rore.size() << "\n";
	rore.remove(room);
	std::cout << rore.size() << "\n";



	//Menu startMenu;
	//startMenu.startMenu();
	return 0;
}

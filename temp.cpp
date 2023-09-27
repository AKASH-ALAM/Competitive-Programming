#include <bits/stdc++.h>
using namespace std;

//Creating Car class for individual car
class Car {
public:
	string model, type;
	int id, speed, rent_price_hourly;

	Car(int id, string model, string type, int speed, int rent_price_hourly) {
		this->id = id;
		this->model = model;
		this->type = type;
		this->speed = speed;
		this->rent_price_hourly = rent_price_hourly;
	}
	string getModel() {
		return model;
	}
	int getId() {
		return id;
	}
	friend ostream& operator<<(ostream& os, Car &car);
};
//Overload << car
ostream& operator<<(ostream& os, Car &car) {
	os << "Id: " << car.id << "\n" << "Model: " << car.model << "\n";
	os << "Type: " << car.type << "\n" << "Speed: " << car.speed << " mph\n";
	os << "Rent Price per hour: " << car.rent_price_hourly << " TK\n";
	return os;
}


//Class to manage all the cars that are in stock
//Actully it's a database of cars
class ManageCar {
public:
	vector <Car> cars;
	set <string> models;

	void addCar(Car *car) {
		cars.push_back(*car);
	}
	/*void removeCar(int id) {
		int len = cars.size();
		for (int i = 0; i < len; i++) {
			if (cars[i].getId() == id) {
				cars.erase(cars.begin() + i);
				break;
			}
		}
	}*/
	void showModels() {
		for (auto it = cars.begin(); it != cars.end(); it++) {
			string model = it->getModel();
			models.insert(model);
		}
		int i = 1;
		for (auto it = models.begin(); it != models.end(); it++) {
			cout << i << " : " << *it << "\n";
			i++;
		}
	}
	void showCars(string model) {
		for (auto it = cars.begin(); it != cars.end(); it++) {
			if (it->getModel() == model) cout << *it << "\n";
		}
	}
	/*void showCarList() {
		for (auto it = cars.begin(); it != cars.end(); it++) {
			cout << *it << "\n";
		}
	}*/
	string getModel(int i) {
		int j = 0;
		string found;
		for (auto it = models.begin(); it != models.end(); it++) {
			found = *it;
			j++;
			if (j == i) break;
		}
		return found;
	}
	int bills(int car_id, int duration) {
		int temp = 0;
		for (auto it = cars.begin(); it != cars.end(); it++) {
			if (it->id == car_id) return (it->rent_price_hourly * duration);
		}
		return temp;
	}
};

class Person {
public:
	string name;
	int age;
	Person(string name, int age) { //Parameterized constructor
		this->name = name;
		this->age = age;
	}
	string getName() {
		return name;
	}
	int getAge() {
		return age;
	}
	void print() {
		cout << "Name: " << name << "\n" << "Age: " << age << "\n";
	}
};

class Renter: public Person { //Inheriting the person class
	string address, email;

public:
	Renter(string name, int age, string address, string email): Person(name, age) {
		this->address = address;
		this->email = email;
	}
	string getAddress() {
		return address;
	}
	string getEmail() {
		return email;
	}
	void print() {
		Person::print();//function overriding
		cout << "Address: " << address << "\n" << "Email: " << email << "\n";
	}
};

class Booking { //This class will perform a single rent operation
	Renter *r;
	int rent_id;//automatically generated
	int rent_duration;
	int rent_bill;//automatically generated
	int transaction_id;
public:
	Booking(Renter *r, int rent_id, int rent_duration, int rent_bill, int transaction_id) {
		this->r = r;
		this->rent_id = rent_id;
		this->rent_duration = rent_duration;
		this->rent_bill = rent_bill;
		this->transaction_id = transaction_id;
	}
	int getRentId() {
		return rent_id;
	}
	void getRentInfo() {
		cout << "Rent id: " << rent_id << "\n";
		r->print();//Oveerriding the print function
		cout << "Total rent duration : " << rent_duration << " Hours" << "\n";
		cout << "Total rent bill: " << rent_bill << " TK\n";
		cout << "Transaction id: " << transaction_id << "\n\n";
	}
};

//RentalSystem class, The flow of the program will be controlled from here.

class RentalSystem {
	vector<Renter> renters;
	vector<Booking> rent_records;
	int rent_id = 0;
public:
	void addRentRecord(Booking *r) {
		rent_records.push_back(*r);
	}
	void remove_rent_records(int id) {
		int len = rent_records.size();
		for (int i = 0; i < len; i++) {
			if (rent_records[i].getRentId() == id) {
				rent_records.erase(rent_records.begin() + i);
				break;
			}
		}
	}
	void showRentRecords() {
		for (auto it = rent_records.begin(); it != rent_records.end(); it++) {
			it->getRentInfo();
			cout << "\n";
		}
	}

	///Control the entire system from here.

	void menu() {
		int option = 1;
		ManageCar manage;

		//Uncomment below part to load data from input file.

		ifstream openFile("in.txt");
		for (; !openFile.eof();) {
			int id, speed, rent_price_hourly;
			string model, type;
			openFile >> id >> model >> type >> speed >> rent_price_hourly;
			Car c(id, model, type, speed, rent_price_hourly);
			manage.addCar(&c);//Adding car to the system
		}
		openFile.close();


		while (option) {
			//Options here
			cout << "\n----Select an option from below: \n\n";
			cout << "1) Manage Cars (Only for administration)\n";
			cout << "2) Rent a car\n";
			cout << "0) Exit\n";
			cout << "\nEnter option: ";
			cin >> option;
			if (!option) {
				break;
			}
			switch (option) {
			case 1: {
				int sub_opt = 1;
				while (sub_opt) {
					//Sub Options for administrator
					cout << "\n----Select an option: \n\n";
					cout << "1) See all car\n";
					cout << "2) See model list\n";//From here another branch to see car by model
					cout << "3) Add new car\n";
					cout << "4) Remove car\n";
					cout << "5) See rent records\n";
					cout << "6) Remove rent records\n";
					cout << "0) Go to main menu\n";
					cout << "\nEnter option: ";
					cin >> sub_opt;
					switch (sub_opt) {
						cout << "This site is under construction" << endl;
						cout << "Enter 0 to go to menu: ";
						cin >> sub_opt;
						if (!sub_opt) break;
					}
					break;
				}
				case 2: {
					//Customers will see the outcome of these codes
					int sub_opt = 1;
					cout << "\n---Choose model to rent from below: \n\n";
					while (sub_opt) {
						//Showing the car models
						manage.showModels();
						cout << "\nEnter an option: ";
						cin >> sub_opt;
						string model = manage.getModel(sub_opt);
						//Showing of that specific model
						cout << "\n----Please choose a car from below----\n\n";
						manage.showCars(model);
						cout << "Enter the car id to rent: ";
						int car_id;
						cin >> car_id;


						//Complete the registration form to rent the car i.e give personal information
						cout << "\n----Now please fill up these form to complete the rent----\n\n";
						string name, address, email;
						int age, transaction_id;
						cin.ignore();
						cout << "Enter name: "; getline(cin, name);
						cout << "Enter age: "; cin >> age;
						cin.ignore();
						cout << "Enter address: "; getline(cin, address);
						cout << "Enter email: "; cin >> email;
						//Filling personal info
						Renter renter(name, age, address, email);
						//Automatically setting the rent id;
						int rent_duration, rent_bill;
						cout << "Enter rent duration in hour: "; cin >> rent_duration;
						rent_bill = manage.bills(car_id, rent_duration);
						cout << "\n----Your rent bill is: " << rent_bill << " TK\n\n";
						cout << "-----Please pay the bill via bank account to further proceed\n\n";
						cout << "Now please enter your transaction id to confirm: "; cin >> transaction_id;
						//Filling up rent info
						Booking rent(&renter, rent_id, rent_duration, rent_bill, transaction_id);
						rent_id++;

						//Adding the record to the system after completing the rent process.
						addRentRecord(&rent);

						cout << "\n\n!!!Congratulation, Your rent has been successfully completed, Your voucher id is " << rent_id - 1 << " please contact our office with the voucher id to get your car.\n\n";

						manage.removeCar(car_id);
						cout << "Enter 0 to go to menu: ";
						cin >> sub_opt;
						if (!sub_opt) break;
					}
					break;
				}

			}
			}
		}
	};


	int main() {
		//Driver code
		RentalSystem sys;
		sys.menu();
		return 0;
	}

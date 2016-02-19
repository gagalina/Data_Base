#include <iostream>

using namespace std;

const char *tab = "\t\t\t\t";
const char *guide = "Enter the choice\n";
const char *error = "The function is not implemented yet\n";

void title (){
	cout << tab << "|************************************|" << endl;
	cout << tab << "|************ AppStore **************|" << endl;
	cout << tab << "|******Implemented by Lina Gaga******|" << endl;
	cout << tab << "|************************************|" << endl;
	cout << "\n\n";
}

void modeFileMenu() {

	cout << tab << "|***************Mode*****************| \n";
	cout << tab << "Choose the mode of file proccessing: \n";
	cout << tab << " 1) Direct access to the file \n";
	cout << tab << " 2) Message file( group proccesing) \n";
	cout << tab << " 3) Exit \n";
	cout << tab << "|************************************| \n";
	cout << "\n\n";
}

void mainMenu() {

	cout << tab << "|***************Menu*****************| \n";
	cout << tab << "1) Create new AppStore database \n";
	cout << tab << "2) Print everything \n ";
	cout << tab << "3) Show exact application by id \n";
	cout << tab << "4) Search the application by specific feature \n ";
	cout << tab << "5) Add new application \n";
	cout << tab << "6) Remove the application \n";
	cout << tab << "7) Make changes \n";
	cout << tab << "8) Exit \n";
	cout << tab << "|************************************| \n";
	cout << "\n\n";
}

void groupMessage() {

	cout << tab << "|**************************************| \n";
	cout << tab << "You are in \"Group Proccessing Message\" mode\n";
	cout << tab << " 1) Create message file \n";
	cout << tab << " 2) Print the message file\n";
	cout << tab << " 3) Show the application by its id\n";
	cout << tab << " 4) Remove the application by its id\n ";
	cout << tab << " 5) Add new application in the message file\n";
	cout << tab << " 6) Make changes to the application\n";
	cout << tab << " 7) Make the commitment\n";
	cout << tab << " 8) Exit \n";
	cout << tab << "|**************************************| \n";
	cout << "\n\n";
}

void createDataBase() {

	cout << tab << "|**************************************| \n";
	cout << tab << " 1) Create new AppStore database \n";
	cout << tab << " 2) Open the existed database \n";\
	cout << tab << " 3) Exit \n";
	cout << tab << "|**************************************| \n";
	cout << "\n\n";
}

void modification() {

	cout << tab << "|****************Change****************| \n";
	cout << tab << " 1) Name \n";
	cout << tab << " 2) Category \n";
	cout << tab << " 3) Company \n";
	cout << tab << " 4) Price \n";
	cout << tab << " 5) Rating \n";
	cout << tab << " 6) Application Version \n";
	cout << tab << " 7) Description \n";
	cout << tab << " 8) OS Version \n";
	cout << tab << " 9) Size \n";
	cout << tab << " 10) The whole database\n";
	cout << tab << " 11) Exit \n";
	cout << tab << "|**************************************| \n";
	cout << "\n\n";
}

void searchBySpecificField() {

	cout << tab << "|****************Search****************| \n";
	cout << tab << " 1) Name \n";
	cout << tab << " 2) Category \n";
	cout << tab << " 3) Company \n";
	cout << tab << " 4) Price \n";
	cout << tab << " 5) Rating \n";
	cout << tab << " 6) Application Version \n";
	cout << tab << " 7) Description \n";
	cout << tab << " 8) OS Version \n";
	cout << tab << " 9) Size \n";
	cout << tab << " 10) Exit \n";
	cout << tab << "|**************************************| \n";
	cout << "\n\n";
}
int main() {

	title();

	int choice = 0;
	char yesNo = 0;

	modeFileMenu(); // we are in the mode menu

	cout << guide;


	while (cin >> choice && choice != 0)
	{
		switch (choice) {
		case 1: 
			mainMenu(); // enter in the Main Menu

			cout << guide;
			while (cin >> choice && choice != 0) {

				switch (choice)
				{
				case 1: createDataBase(); // enter in the Create New database menu

					cout << guide;
					while (cin >> choice && choice != 0)
					{
						switch (choice)
						{
						case 1: cout << error; // create new database
							break;

						case 2: cout << error; // open the existed database
							break;

						case 3: mainMenu();

						default: break;

						}
						cout << "continue? : ";
						cin >> yesNo;
						if (yesNo == 'y') {
							createDataBase();
							cout << guide;
						}
						else mainMenu();

					}
					break;

				case 2: cout << error; // print database
					break;

				case 3: cout << error; // show app by the id
					break;

				case 4:
					searchBySpecificField();

					cout << guide;

					while (cin >> choice && choice != 0)
					{
						switch (choice)
						{
						case 1: cout << error; // changing name
							break;
							
						case 2: cout << error;
							break;

						case 3: cout << error;
							break;
							 
						case 4: cout << error;
							break;

						case 5: cout << error;
							break;

						case 6: cout << error;
							break;

						case 7: cout << error;
							break;

						case 8: cout << error;
							break;

						case 9: cout << error;
							break;

						case 10: break;

						default: break;

						} 

						cout << "Continue? : \n";

						cin >> yesNo;

						if (yesNo == 'y')
						{
							searchBySpecificField();

							cout << guide;
						}
						else break;

					}
					break;

				case 5: cout << error;
					break;

				case 6: cout << error;
					break;

				case 7: modification();

					cout << guide;

					while (cin >> choice && choice != 0)
					{
						switch (choice)
						{
							case 1: cout << error;
							break;

							case 2: cout << error;
								break;

							case 3: cout << error;
								break;

							case 4: cout << error;
								break;

							case 5: cout << error;
								break;

							case 6: cout << error;
								break;

							case 7: cout << error;
								break;

							case 8: cout << error;
								break;

							case 9: cout << error;
								break;

							case 10: cout << error;

							case 11: break;

							default:
								break;
						}
						cout << "Continue? : \n";

						cin >> yesNo;

						if (yesNo == 'y')
						{
							modification();

							cout << guide;
						}
						else break;
					}
				case 8: break;

				default: 
					break;

				}

				break;

		case 2: groupMessage(); // enter in the groupMessage menu

			cout << guide;
			while (cin >> choice && choice != 0)
			{
				switch (choice)
				{
				case 1: createDataBase(); // enter in the Create new Database menu

					cout << guide;

					while (cin >> choice && choice != 0)
					{
						switch (choice)
						{
						case 1: cout << error; // create new database
							break;

						case 2: cout << error; // open the existed database
							break;
						default:
							break;
						}
					}
				default:
					break;
				}

			}
				default:
					break;
				}
			}

			break;
			
		}

	system("pause");
	return 0;

	}
	




	


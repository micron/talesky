#include <iostream>;

using namespace std;

void skytaleEncode();

int main(void){
	int selection;

	cout << "1. Decode " << endl;
	cout << "2. Encode " << endl;

	cin >> selection;
	
	// decode
	if(selection == 1){
	
	}
	
	// encode
	if(selection == 2){
		skytaleEncode();
	}

	return 0;
}

void skytaleEncode(){
	char encodeMe[1000];
	char * encodeMePtr;
	int range;
	int len = 0;
	
	do {
		if (len > 0){
			system("cls");
			cout << "Der Umfang darf nicht groesser als die laenge der zeichen sein." << endl;
		}
		cout << "Bitte Umfang eingeben" << endl;
		cin >> range;
		
		cout << endl << "Bitte den zu verschluesselten String eingeben" << endl;
		cin >> encodeMe;

		len = strlen(encodeMe);

	} while(len < range);


	encodeMePtr = new char(len + 1);

	strcpy(encodeMePtr, encodeMe);
}
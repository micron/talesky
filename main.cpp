#include <iostream>
#include <math.h>

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
	char encodeProcess[16][16];
	char encodedString[1000];
	float range;
	float len = 0;
	int rangeCounter = 1;
	int currentPos = 0;
	int skipValue = 0;
	bool useSwitch = true;
	
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
	
	for(int i = 0 ; i < len ; i++){
		encodeProcess[currentPos][rangeCounter] = encodeMe[i];

		if(rangeCounter == range){
			rangeCounter = 0;
			currentPos++;
		}

		rangeCounter++;
	}
	
	system("cls");
	
	int res = ceil(len / range);

	if(ceil(len / range) == (len / range)){
		useSwitch = false;
	}

	if(useSwitch){
		// baaah, ugly fixx
		for(int i = range ; i < len ; i = i + range){
			skipValue = i;
		}

		skipValue = len - skipValue;
	}

	for(int n = 1 ; n <= range ; n++){
		for(int m = 0 ; m < res ; m++){
			if(encodeProcess[m][n]){
				cout << encodeProcess[m][n];
			}

		} 

		if(n == skipValue && useSwitch){
			res--;
		}
	}
	
	cout << endl;
}
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include<windows.h>
#include<iomanip>
using namespace std;

char status[55];


int cubeStatus[6][9];


void drawCube(){
	int pos = 0;
	int i = 0;

	cout << endl << setw(7);
for(i; i < 54; i++){
	if(i < 9){
		cout << status[i] << " ";
		pos++;

		if(pos == 3){
			cout << endl;
			if(i!=8)
			cout << setw(7);
			pos =0;
		}

	}


	if(i >= 9 && i <45){
		cout << status[i] << " ";
		pos++;

		if(pos == 12){
			cout << endl;
			pos = 0;

		}

	}

	if(i==45)
        	cout << setw(7);
	if(i>=45){
		cout << status[i] << " ";
		pos++;

		if(pos == 3){
			cout << endl;
			cout << setw(7);
			pos = 0;
		}
	}

    }
}

void getCube(){

	gets(status);

}



int main(){

	cout << "Rubik's Cube Input."<<endl;
	//Get Current Cube state
	getCube();
	drawCube();
    cout << endl;



    getch();
}

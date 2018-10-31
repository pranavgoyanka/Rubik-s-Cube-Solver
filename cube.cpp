#include <stdio.h>
#include <conio.h>
#include <iostream>
#include<windows.h>
#include<iomanip>
using namespace std;

char status[55];
int rStickers[] = {2,5,8,14,18,26,30,38,42,47,50,53};
				// r r r w  y  w  y  w  y  o  o  o
//gotoxy decalraiton

COORD coord={0,0}; // this is global variable
                                    //center of axis is set to the top left corner of the screen
void gotoxy(int x,int y)
 {
   coord.X=x;
 coord.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);


int cubeStatus[6][9];
}

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

void R(){
//
	char temp;

	temp  = status[2];

	status[2] = status[14];
	status[14] = status[47];
	status[47] = status[42];
	status[42] = temp;
	temp = status[5];
	status[5] = status[26];
	status[26] = status[50];
	status[50] = status[30];
	status[30] = temp;
	temp = status[8];
	status[8] = status[38];
	status[38] = status[53];
	status[53] = status[18];
	status[18] = temp;
}

void L(){

	char temp;

	temp  = status[0];

	status[0] = status[44];
	status[44] = status[45];
	status[45] = status[12];
	status[12] = temp;
	temp = status[3];
	status[3] = status[32];
	status[32] = status[48];
	status[48] = status[24];
	status[24] = temp;
	temp = status[6];
	status[6] = status[20];
	status[20] = status[51];
	status[51] = status[36];
	status[36] = temp;
}



void U(){
	char temp;

	temp  = status[12];

	status[12] = status[15];
	status[15] = status[18];
	status[18] = status[9];
	status[9] = temp;
	temp = status[13];
	status[13] = status[16];
	status[16] = status[19];
	status[19] = status[10];
	status[10] = temp;
	temp = status[14];
	status[14] = status[17];
	status[17] = status[20];
	status[20] = status[11];
	status[11] = temp;

}
/*
	rrrrrrrrrbbbwwwgggyyybbbwwwgggyyybbbwwwgggyyyooooooooo

	      r r r
	      r r r
	      r r r
	b b b w w w g g g y y y
	b b b w w w g g g y y y
	b b b w w w g g g y y y
	      o o o
	      o o o
	      o o o
*/

void D(){
	char temp;

	temp  = status[36];

	status[36] = status[33];
	status[33] = status[42];
	status[42] = status[39];
	status[39] = temp;
	temp = status[37];
	status[37] = status[34];
	status[34] = status[43];
	status[43] = status[40];
	status[40] = temp;
	temp = status[38];
	status[38] = status[35];
	status[35] = status[44];
	status[44] = status[41];
	status[38] = temp;
}

int main(){

	cout << "Rubik's Cube Input."<<endl;
	//Get Current Cube state
	getCube();
	drawCube();
    cout << endl;
    for(int k = 0; k < 4; k++){
    cout << "Press any key to perform: U";
    getch();
    U();
    drawCube();
    cout << endl;
	}




    getch();
}


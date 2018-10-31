#include <Servo.h> 

// Declare the Servo pins 
int right = 7;
int up = 6;
int rem_right = 5;
int rem_up = 4;

// Create servo objects
Servo R, U, remR, remU; 
void setup() { 
   // We need to attach the servo to the used pin number 
   //Servo1.attach(right);
   R.attach(right);
   U.attach(up);
   remR.attach(rem_right);
   remU.attach(rem_up);
}

//objname.write(angle_in_degrees);
//delay(time_in_ms)

//initialise servos

void initialise(){
    R.write(90);
    U.write(90);
    //todo initialise rem servos;
}

// if angle = -1 then inverted rotation becuase 90deg is the reference angle

void R(int angle = 0){
    R.write(180 - (90*angle));
}

void U(int angle = 0){ 
    U.write(180 - (90*angle));
}

void RW(int angle = 0){
    //add remove U function
    R.write(180 - (90*angle));
}


void UW(int angle = 0){
    //add remove R function
    U.write(180 - (90*angle));
}

void loop(){ 
    String solution[25];

    for(int i = 0; solution(i)!='\0'; i++){
        //if(solution(i) == 'R')
    }

}

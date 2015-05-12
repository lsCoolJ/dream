// This is a comment.

// The program will ignore anything we type after "//".

// We use comments to explain the code we write.

// You don't need to include the comments in your code for it to run;
// they're to help other people understand it.

#include <Servo.h> // This lets the program know we want to use servos.

// First we create variables to hold all the values
// that the program is going to need to run.

// For the motors:
Servo servo_right; // this makes a servo variable called servo_right.

Servo servo_left;  // this makes another one called servo_left.

// For the speeds:
int spd_left;  // an integer (whole number) to hold the speed of the left servo

int spd_right; // the right servo speed


// Next we tell the program what to do.
// Every Arduino program has a setup function and a loop function.
// The setup function runs once when the program starts.
// The loop function runs over and over forever. 

// This will run only once at the program's beginning.
void setup() 
{ 
    servo_right.attach(10); // This tells the program which pins
    servo_left.attach(11);  // the servos are plugged into.
} 

// This function will repeat forever.
void loop() 
{
    // The write function sets the speed of the servo.
    // 0 is full speed in one direction
    // and 180 is full speed in the opposite direction.
    // 90 tells the servo to stand still.

    servo_right.write(180); // Set the right motor to full speed.

    servo_left.write(0);    // The left motor is pointed the opposite way,
                            // so we'll spin it the opposite direction.
    
    delay(500); // This tells the program to wait 500 milliseconds (or 1/2 s).

    servo_right.write(0);   // Let's switch direction.
    servo_left.write(180);

    delay(500); // Wait another 1/2 second.

    // The program will now jump back to the beginning of the loop function
    // and repeat it until we turn the Arduino off.
}

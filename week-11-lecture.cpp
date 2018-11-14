#include "string"
#include "iostream"

using namespace std;

const string EXIT = "exit";
const string CONTINUE = "continue";

void speak(string text, int numNewLines);
string validate(int choice, int smallestOption, int largestOption);

int main() {
    speak("You see yee flask on yee table. What are you going to do with the flask?", 2);

    speak("1: You kick the table", 1);
    speak("2: You drink it", 1);
    speak("3: You give up", 1);

    int choice;
    cin >> choice;

    
    if(validate(choice, 1, 3) == EXIT) { return 0; }

    //validate(choice, 1, 3) == EXIT  ? return 0;

    int originalChoice = choice;

    if(choice == 1) {
        speak("You stubbed your toe, game over!", 2);
        return 0;
    } else if(choice == 2) {
        originalChoice = 2;
        speak("You get a bit tipsy", 2);
        speak("You see yee larger flask on the dresser. What do you do?", 2);
        speak("1: You ignore it", 1);
        speak("2: You drink larger flask", 1);
        speak("3: You throw it out the window", 1);
    } else {
        originalChoice = 3;
        speak("You jump out the window", 2);
        speak("You land in the trash, that was close. What are you going to do now?", 2);
        speak("1: You go to sleep in the trash and decide to take up a homeless life.", 1);
        speak("2: You dig through the trash for money.", 1);
        speak("3: You are sitting on a radio, you turn it on.", 1);
    }

    cin >> choice;

    if(validate(choice, 1, 3) == EXIT) { return 0; }

    if(choice == 1 && originalChoice == 2) { // You see yee larger flask on the dresser. What do you do?
        speak("You become extremely tired and fall asleep forever.", 1);
        return 0;
    } else if(choice == 2 && originalChoice == 2) { //You see yee larger flask on the dresser. What do you do?
        speak("The larger flask makes you feel much better, you now have xray vision. You become superman and fly off!", 1);
        return 0;
    } else if(choice == 3 && originalChoice == 2){ // You see yee larger flask on the dresser. What do you do?
        while(1 == 1) {
            speak("The flask flies back in, hits you in the face, and flies back out into the trash.", 1);
        }
    } else if(choice == 1 && originalChoice == 3) { // You jump out the window
        speak("You become a busker and live a happy life.", 1);
        return 0;
    } else if(choice == 2 && originalChoice == 3){ // You jump out the window
        speak("You hit a mousetrap, and are sent to the hospital missing a finger", 1);
        return 0;
    } else if(choice == 3 && originalChoice == 3) { // You jump out the window
        speak("You stand up and dab, a civilian passing by sees you and you become famous!", 1);
        return 0;
    }
}

// Send text out to the console with a certain # of new lines
void speak(string text, int numNewLines) {
    cout << text;
    for(int count=0; count < numNewLines; ++count) {
        cout << endl;
    }
}

// Check to make sure user entered a valid option
string validate(int choice, int smallestOption, int largestOption) {
    if(cin.fail() && choice < smallestOption && choice > largestOption) {
        speak("You run away, game over.", 1);
        return EXIT;
    }
    return CONTINUE;
}
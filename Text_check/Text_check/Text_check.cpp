

#include <iostream>
#include <string>
using namespace std;



class Character {
private:
    string name;
    int charisma;
    int strength;
    int brains;
    int luck;
    int height;
    // basic layout for unalterable data types.
public:
    Character(string name, int charisma, int strength, int brains, int luck, int height) 
        :name(name),charisma(charisma),strength(strength),brains(brains),luck(luck),height(height) {
    
    }
    int getStats() {
        getCharisma();
        getStrength();
        getBrains();
        getLuck();
        getHeight();
    }
    // all stats gathered
    int getCharisma() 
    {
        return charisma;
    }
    int getStrength()
    {
        return strength;
    }
    int getBrains()
    {
        return brains;
    }
    int getLuck()
    {
        return luck;
    }
    int getHeight()
    {
        return height;
    }
    // all gets organized
    void print_stats() const {
        cout << "\nname: " << name;
        cout << "\ncharisma: " << charisma;
        cout << "\nstrength: " << strength;
        cout << "\nbrains: " << brains;
        cout << "\nluck: " << luck;
        cout << "\nheight:" << height;
    } // early prototype
};

int main()
{
    string name;
    int charisma;
    int strength;
    int brains;
    int luck;
    int height;
    int choice = 0;

    cout << "\nWelcome to the text game character check!";
    cout << "\nToday we are going to create a character to run a set of skill checks!\n";
    cout << "\nPlease state your name!\n";
    getline(cin, name);
    cout << "\nOkay! now we are going to give you some questions. Please answer with numbers!";
    cout << "\nOn a scale of 1-10 how charismatic are you?";
    cin >> charisma;
    cout << "\nOn a scale of 1-10 how strong are you?";
    cin >> strength;
    cout << "\nOn a scale of 1-10 how smart are you?";
    cin >> brains;
    cout << "\nOn a scale of 1-10 how lucky are you?";
    cin >> luck;
    cout << "\nOn a scale of 1-10 how tall are you?";
    cin >> height;
    Character Neo(name, charisma, strength, brains, luck, height);
    cout << "\nYou are sitting at a bar when you are approached by a man who claims to be in the legion!";
    cout << "\nHe asks you about your drink and whips out a gun!";
    cout << "\nHow do you approach this situation?";
    while (choice != 0); {
        cout << "\n1. fight and die";
        cout << "\n2. throw your money at him and hope for the best.";
        // basic options
        if (Neo.getCharisma() >= 6) {
            cout << "\n3. Silver tongue your way out of the the fight by insulting a common enemy.";
        }
        if (Neo.getStrength() >= 6) {
            cout << "\n4. Bend the gun like a cartoon charicature.";
        }
        if (Neo.getBrains() >= 6) {
            cout << "\n5. Mention the phrases quantum physics and ceasar in the same sentence";
        }
        if (Neo.getLuck() >= 6) {
            cout << "\n6. Slip on the spit on the ground from the other yokels"; }
        if (Neo.getHeight() >= 6) {
            cout << "\n7. You look around and realize this legionare is in fact a short king compared to your hulking stature."; 
        }
        // skill check options.
        // If class skill is higher it will display.
        cout << "\n0. ragequit";
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "You fought and you died!";
            break;

        case 2:
            cout << "He took the money and lit it on fire. Feel the burn.";
            break;

        case 3:
            cout << "He starts rambling about how much he has [random enemy number 1] and buys you a drink";
            break;

        case 4:
            cout << "You bend his gun like it was made of rubber. He fires it and it explodes in his face.";
            break;

        case 5:
            cout << "This poor barbarian being so unedcuated and Irish could not handle the sheer magnitude of your IQ and his head explodes.";
            break;

        case 6:
            cout << "You slip on the ground without realizing it and before you hit the ground everyone else in the bar has shot each other. Leaving you alive.";
            break;

        case 7:
            cout << "You offer him a new perspective and heave him upon your shoulders like man to wee man. You leave the bar and show him what life is like from up here.";
            break;
        case 0:
            choice = 0;
            break;
        }
    }
}


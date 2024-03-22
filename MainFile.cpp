#include <iostream>
#include <string>

using namespace std;

struct Character {
    string name;
    int health;
    string characterClass;
};

int main() {
    Character player;

    cout << "Enter character's name: ";
    getline(cin, player.name);

    cout << "Enter character's health: ";
    cin >> player.health;
    cin.ignore();

    cout << "Enter character's class (wizard or warrior): ";
    getline(cin, player.characterClass);

    int damage;
    while (player.health > 0) {
        cout << "\nEnter the damage number caused by the enemy: ";
        cin >> damage;
        cin.ignore();

        if (player.characterClass == "wizard") {
            if (damage % 2 == 0) {
                player.health -= damage;
            }
            else {
                player.health -= 2 * damage;
            }
        }
        else if (player.characterClass == "warrior") {
            if (damage % 2 != 0) {
                player.health -= 3 * damage;
            }
        }

        cout << "Remaining health: " << player.health << endl;
    }

    cout << "The character " << player.name << " is dead!" << endl;

    return 0;
}


#include <bits/stdc++.h>
using namespace std;

class Hero {
    private:
    int health;

    public:
    char *name;
    char level;

    //deafult constructor
    Hero(){
        cout<<"Constructoe Called " << endl;
        name = new char[100];
    }

    //paramatrized Constructor
    Hero(int health){
        cout << "This->" << this << endl;
        this->health=health;
    }

    Hero(int health, char level){
        cout << "This->" << this << endl;
        this->health=health;
        this->level=level;
    }

    //copy constructor
    Hero(Hero& temp) {

        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "Copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

     void print(){
        cout << endl;
        cout << "[ Name: " << this->name<< " ,";
        cout << "health: " << this->health << " ,";
        cout <<"level: " << this->level << " ]";
        cout << endl << endl;
    }



    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }

    void setName(char name[]) {
        strcpy(this->name, name);
    }

};

int main() {


    Hero hero1;

    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7] = "Babbar";
    hero1.setName(name);

    hero1.print();




    // Hero suresh(70, 'C');
    // suresh.print();
    // // suresh.setHealth(70);
    // // suresh.setLevel('A');
     
    // Hero ritesh(suresh);










    //static
    // Hero ramesh(10);
    // cout << "Address " << &ramesh << endl;

    // Hero temp(22, 'B');
    // temp.print();

    // //dynamic
    // Hero *b = new Hero;
      

    //static allocstion
    // Hero a;
    // a.setHealth(90);
    // a.setLevel('S');
    // cout << "Level: " << a.level << endl;
    // cout << "Health: " << a.getHealth() << endl;

    // //dynamic allocstion
    // Hero *b = new Hero;
    // b->setLevel('A');
    // b->setHealth(70);
    // cout << "Level: " << b->level << endl;
    // cout << "Health: " << b->getHealth() << endl;


     // //creation of Object
    // Hero ramesh;   
    // cout << "Size of Ramesh is " << sizeof(ramesh) << endl;

    // cout << "Ramesh health is " << ramesh.getHealth() << endl;
    // //use setter
    // ramesh.setHealth(70);
    // ramesh.level = 'A';


    // Hero h1;
    // cout << "Size " << sizeof(h1) << endl;
    // h1.health = 70;
    // h1.level = 'A';
    // cout << h1.health << endl;
    // cout << h1.level << endl;

    return 0;
}
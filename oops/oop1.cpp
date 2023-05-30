
#include <bits/stdc++.h>
using namespace std;

class Hero {
    private:
    int health;

    public:
    char level;

    //deafult constructor
    Hero(){
        cout<<"Constructoe Called " << endl;
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


     void print(){
        cout << endl;
        // cout << "[ Name: " << this->name<< " ,";
        cout << "health: " << this->health << " ,";
        cout <<"level: " << this->level << " ]";
        // cout << endl << endl;
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
};

int main() {




    Hero suresh(70, 'C');
    suresh.print();
    // suresh.setHealth(70);
    // suresh.setLevel('A');
     
    Hero ritesh(suresh);










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
#include <iostream>
using namespace std;

class Animal
{
    private:
    char name[20];
    char sound[20];

    public:
    void setData(){
	    cout << "Enter Name : ";
        cin >> name;

        cout << "Enter Sound : ";
        cin >> sound;
    }
     char* getName(){
	    return name;
    }
     char* getSound(){
	    return sound;
    }
      virtual void displayDetails() = 0;
};

class Dog : public Animal
{
public:
    void makeSound(){
	    cout << getName() << " says " << getSound() << endl;
    }

    void displayDetails(){
	    cout << "\nAnimal : Dog" << endl;
        cout << "Name   : " << getName() << endl;
        cout << "Sound  : " << getSound() << endl;
    }
};

class Cat : public Animal
{
public:
    void makeSound(){
	    cout << getName() << " says " << getSound() << endl;
    }
    void displayDetails(){
	    cout << "\nAnimal : Cat" << endl;
        cout << "Name   : " << getName() << endl;
        cout << "Sound  : " << getSound() << endl;
    }
};

int main()
{
    Dog d;
    Cat c;

    cout << "Enter Dog Details\n";
    d.setData();

    cout << "\nEnter Cat Details\n";
    c.setData();

    cout << "\nAnimal Sounds\n";
    d.makeSound();
    c.makeSound();

    Animal *a[2];
    a[0] = &d;
    a[1] = &c;

    cout << "\nAnimal Details\n";
    for (int i = 0; i < 2; i++){
	    a[i]->displayDetails();
    }
}
/*output
Enter Dog Details
Enter Name : tom
Enter Sound : bark

Enter Cat Details
Enter Name : jimmy
Enter Sound : meow

Animal Sounds
tom says bark
jimmy says meow

Animal Details

Animal : Dog
Name   : tom
Sound  : bark

Animal : Cat
Name   : jimmy
Sound  : meow
*/
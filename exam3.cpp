#include <iostream>
using namespace std;

class Animal
{
    private:
    char name[20];
    char sound[20];

    public:
    void setName(char n[]){
	    int i = 0;
        while (n[i] != '\0'){
		    name[i] = n[i];
            i++;
        }
        name[i] = '\0';
    }

    void setSound(char s[]){
	    int i = 0;
        while (s[i] != '\0'){
		    sound[i] = s[i];
            i++;
        }
        sound[i] = '\0';
    }

    char* getName(){
	    return name;
    }

    char* getSound(){
	    return sound;
    }
};

class Dog : public Animal
{
    public:
    void makeSound(){
	    cout << getName() << " says " << getSound() << endl;
    }
};

class Cat : public Animal
{
   public:
    void makeSound(){
     cout << getName() << " says " << getSound() << endl;
    }
};

int main()
{
    Dog d;
    Cat c;

    char dname[] = "Dog";
    char dsound[] = "Bark";
    char cname[] = "Cat";
    char csound[] = "Meow";

    d.setName(dname);
    d.setSound(dsound);

    c.setName(cname);
    c.setSound(csound);

    d.makeSound();
    c.makeSound();
}
/*output
Dog says Bark
Cat says Meow
*/
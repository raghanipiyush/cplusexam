#include <iostream>
using namespace std;

class Person
{
    private:
    char name[30], address[50];
    int age;

    public:
    
    Person(char n[], int a, char ad[]){
	    int i;
        for(i=0; n[i]!='\0'; i++)
            name[i]=n[i];
        name[i]='\0';

        age=a;

        for(i=0; ad[i]!='\0'; i++)
            address[i]=ad[i];
        address[i]='\0';
    }
      void setName(char n[]){
	    int i;
        for(i=0; n[i]!='\0'; i++)
            name[i]=n[i];
        name[i]='\0';
    }

    void setAge(int a){
	    age=a;
    }

    void setAddress(char ad[]){
	    int i;
        for(i=0; ad[i]!='\0'; i++)
            address[i]=ad[i];
        address[i]='\0';
    }

    char* getName(){
	    return name;
    }
    int getAge(){
	    return age;
    }

    char* getAddress(){
	    return address;
    }

    void display(){
	    cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Address: " << getAddress() << endl;
        cout << "-------------------" << endl;
    }
};

int main()
{
    int n;
    cout << "Enter number of persons: ";
    cin >> n;
      Person *p[n];

    char name[30], address[50];
    int age;

    for(int i=0; i<n; i++){
	    cout << "\nEnter details of Person " << i+1 << endl;
        cout << "Name: ";
        cin >> name;
        cout << "Age: ";
        cin >> age;
        cout << "Address: ";
        cin >> address;
          p[i] = new Person(name, age, address);
    }

    cout << "\nPerson Details\n";
      for(int i=0; i<n; i++){
	    p[i]->display();
        delete p[i];
    }
}
/*output
Enter number of persons: 2

Enter details of Person 1
Name: smit
Age: 20
Address: motavarachha

Enter details of Person 2
Name: sarv
Age: 21
Address: katargam

Person Details
Name: smit
Age: 20
Address: motavarachha
-------------------
Name: sarv
Age: 21
Address: katargam
-------------------
*/
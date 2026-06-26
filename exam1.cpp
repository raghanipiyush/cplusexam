#include <iostream>
using namespace std;

class Book
{
    public:
    char title[30];
    char author[30];
    int publishedYear;

    void getData(){
	    cout << "Enter Title: ";
        cin >> title;
        cout << "Enter Author: ";
        cin >> author;
        cout << "Enter Published Year: ";
        cin >> publishedYear;
    }

    void display(){
	    cout << "\nTitle: " << title;
        cout << "\nAuthor: " << author;
        cout << "\nPublished Year: " << publishedYear << endl;
    }
};

int main()
{
    Book b[2];

    for (int i = 0; i < 2; i++){
	    cout << "\nEnter Details of Book " << i + 1 << endl;
        b[i].getData();
    }

    cout << "\n--- Book Details ---\n";
    for (int i = 0; i < 2; i++){
	    b[i].display();
    }

}
/*output

Enter Details of Book 1
Enter Title: c
Enter Author: DennisRitchie
Enter Published Year: 1972

Enter Details of Book 2
Enter Title: c++
Enter Author: Bjarne
Enter Published Year: 1979

--- Book Details ---

Title: c
Author: DennisRitchie
Published Year: 1972

Title: c++
Author: Bjarne
Published Year: 1979

*/
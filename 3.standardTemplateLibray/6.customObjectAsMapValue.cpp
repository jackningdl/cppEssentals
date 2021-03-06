#include <iostream>
#include <map>

using namespace std;

class Person {
  private:
    string name;
    int age;

  public:
    // default
    Person() : name(""), age(0) {}
    // Copy
    Person(const Person &other) {
        cout << "Copy the person: " << other.name << endl;
        name = other.name;
        name = other.age;
    }
    // Custom
    Person(string name, int age) : name(name), age(age) {}

    void print() {
        cout << name << ": " << age << endl;
    }
};

int main() {
    cout << endl;

    map< int, Person > people;

    people[0] = Person("Mike", 10);
    people[1] = Person("Vicky", 20);
    people[2] = Person("John", 30);
    people[3] = Person("Jack", 40);

    people.insert(make_pair(4, Person("Bob", 45)));
    //people.insert(make_pair(3, Person("Sue", 40)));

    for (map< int, Person >::iterator it = people.begin(); it != people.end(); it++) {
        cout << it->first << ". " << flush;
        it->second.print();
    }

    return 0;
}

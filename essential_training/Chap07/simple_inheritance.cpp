#include <cstdio>
#include <string>
using namespace std;

class Fur {
    string _type;
    Fur() {};
protected:
    Fur(const string &f) : _type(f) {};
public:
    const string &type() const {return _type;}
};

class Animal {
    string _name;
    string _type;
    string _sound;
    Animal() {};
protected:
    Animal(const string &n, const string &t, const string &s) : _name(n), _type(t), _sound(s) {}
public:
    virtual void speak() const;
    const string &name() const {return _name;}
    const string &type() const {return _type;}
    const string &sound() const {return _sound;}
};

void Animal::speak() const {
    printf("%s the %s says %s\n", _name.c_str(), _type.c_str(), _sound.c_str());
}

class Dog : public Animal {
    int walked;
public:
    Dog(string n) : Animal(n, "dog", "woof"), walked(0) {};
    int walk() {return ++walked;}
};

class Cat : public Animal, public Fur {
    int petted;
public:
    Cat(string n) : Animal(n, "cat", "meow"), Fur("silkey"), petted(0) {};
    int pet() {return ++petted;}
    void grooming() const;
};

void Cat::grooming() const {
    printf("%s grooms her %s fur\n", Animal::name().c_str(), Fur::type().c_str());
}

class Pig : public Animal {
    int fed;
public:
    Pig(string n) : Animal(n, "pig", "oink"), fed(0) {};
    int feed() {return ++fed;}
    string latin() const;
};

string Pig::latin() const {
    return name() + "-ay";
}

const string &get_animal_name(const Animal &a) {
    return a.name();
}

int main(int argc, char const *argv[]) {
    Dog d("Rover");
    Cat c("Fluffy");
    Pig p("Arnold");
    
    d.speak();
    c.speak();
    p.speak();
    
    printf("the dog has been walked %d times\n", d.walk());
    printf("the dog has been walked %d times\n", d.walk());
    printf("the cat has been petted %d times\n", c.pet());
    printf("the pig has been fed %d times\n", p.feed());
    
    printf("The pig is sometimes called %s\n", p.latin().c_str());
    
    printf("the pig is named %s\n", get_animal_name(p).c_str());
    
    c.grooming();
    
    Animal *ap[] = {&d, &c, &p};
    for (Animal *a : ap) {
        a->speak();
    }
    return 0;
}
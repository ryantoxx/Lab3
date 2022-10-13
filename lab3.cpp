#include <iostream>
#include <string>

using std::string;


class Restaurant {
public:
string Title;
    Restaurant(string title) {
        Title = title;
    }
    void restaurant() {
    std::cout << "-> Welcome to "<< "'" << Title <<"'"<< " hope you will like it!" << std::endl;
    }
};

class Human:public Restaurant {
protected:
    string Name;
    string Surname;
    int Age;
public:
    Human(string name, string surname, int age, string title):Restaurant(title) {
        Name = name;
        Surname = surname;
        Age = age;
    }
    void setName(string name) {
        Name = name;
    }
    string getName() {
        return Name;
    }
    void setSurname(string surname) {
        Surname = surname;
    }
    string getSurname() {
        return Surname;
    }
    void setAge(int age) {
        Age = age;
    }
    int getAge() {
        return Age;
    }
};

class Customer:public Human {
private:
    string Preferences;
public:
    Customer(string name, string surname, int age, string preferences,string title) : Human(name, surname, age, title) {
        Preferences = preferences;
    }
    void setPreferences(string preferences) {
        Preferences = preferences;
    }
    string getPreferences() {
        return Preferences;
    }
    void greeting() {
        std::cout << "-> Hello, my name is " << Name << " " << Surname << "" << " I am " << Age << " old, and I love " << getPreferences() << " food." << std::endl;  

    }
    
};

class Hostess:public Human {
public:
    float Salary;
    int Table;
    Hostess(string name, string surname, int age, float salary, string title, int table) : Human(name, surname, age, title) {
        Salary = salary;
        Table = table;
    }
    void introduce_hostess() {
        std::cout << "-> Good to see you, I am " << Name <<  ", I am " << Age << " and I will help you find a spot. Table nr." << Table << " empty."<< std::endl;
    }
};

class Waiter:public Human {
public:
    float Salary;
    Waiter(string name, string surname, int age, float salary, string title) : Human(name, surname ,age, title) {
        Salary = salary;
    }
    void introduce_waiter() {
        std::cout << "-> Hi I'm your waiter " << Name << " I'll help you choose your food." << std::endl;
        std::cout << "Check the menu:" << std::endl; 
    }
};
class Menu:public Restaurant {
protected:
    string Pizza; int Pprice;
    string Burger; int Burgerprice;
    string Steak; int Sprice;
    string Salad; int Vprice;
    string Soup; int Bprice;
    string Coffee; int Cprice;
    string Juice; int Jprice;
    string Soda; int Sodaprice;
    string Water; int Wprice;
public:
    Menu(string pizza,int p_price,string burger,int burgerprice,string steak,int sprice,string salad,int vprice,string soup,int bprice,
         string coffee,int cprice,string juice,int jprice,string soda,int sodaprice,string water,int wprice, string title) : Restaurant(title)
        {
            Pizza = pizza; Pprice = p_price;
            Burger = burger; Burgerprice = burgerprice;
            Steak = steak; Sprice = sprice;
            Salad = salad; Vprice = vprice;
            Soup = soup; Bprice = bprice;
            Coffee = coffee; Cprice = cprice;
            Juice = juice; Jprice = jprice;
            Soda = soda; Sodaprice = sodaprice;
            Water = water; Wprice = wprice;
            Title = title;
         } 
};

class base_menu:public Menu {
public:
    string Type;
    base_menu(string pizza,int p_price,string burger,int burgerprice,string steak,int sprice,string salad,int vprice,string soup,int bprice,
        string coffee,int cprice,string juice,int jprice,string soda,int sodaprice,string water,int wprice, string title,string type)
        :Menu(pizza,p_price,burger,burgerprice,steak,sprice,salad,vprice,soup,bprice,coffee,cprice,juice,jprice,soda,sodaprice,water,wprice,title) 
        {
            Type = type;
         } 
    void show_menu() {
        std::cout << "Here is our " << Type << " menu." << std::endl;
        std::cout << Pizza <<": "<< Pprice <<"$."<< std::endl;
        std::cout << Burger <<": "<< Burgerprice <<"$."<< std::endl;
        std::cout << Steak <<": "<< Sprice <<"$."<< std::endl;
        std::cout << Salad <<": "<< Vprice <<"$."<< std::endl;
        std::cout << Soup <<": "<< Bprice <<"$."<< std::endl;
        std::cout << Coffee <<": " << Cprice <<"$."<< std::endl;
        std::cout << Juice <<": "<< Jprice <<"$."<< std::endl;
        std::cout << Soda <<": "<< Sodaprice <<"$."<< std::endl;
        std::cout << Water <<": "<< Wprice <<"$."<< std::endl;
    }
};

class Sommelier:public Human {
public:
float Salary;
float Experience;
    Sommelier(string name, string surname, int age, float salary,float experience, string title) : Human(name, surname ,age, title) {
        Salary = salary;
        Experience = experience;
    }
    void introduce_sommelier() {
        std::cout << "-> Hi, my name is " << Name << " and I would like to show you the menu of hard drinks." << std::endl;
        std::cout << "I am " << Age << " years old and I've been a sommelier for " << Experience << " years now, so I can help you decide:" << std::endl;
    }
};

class hard_menu:public Menu {
public:
    string Type;
    hard_menu(string pizza,int p_price,string burger,int burgerprice,string steak,int sprice,string salad,int vprice,string soup,int bprice,
        string coffee,int cprice,string juice,int jprice,string soda,int sodaprice,string water,int wprice, string title,string type) 
    : Menu(pizza,p_price,burger,burgerprice,steak,sprice,salad,vprice,soup,bprice,coffee,cprice,juice,jprice,soda,sodaprice,water,wprice,title) {
        Type = type;
    }
    void show_hard_menu() {
        std::cout << "Here is our " << Type << " menu." << std::endl;
        std::cout << Pizza <<": "<< Pprice <<"$."<< std::endl;
        std::cout << Burger <<": "<< Burgerprice <<"$."<< std::endl;
        std::cout << Steak <<": "<< Sprice <<"$."<< std::endl;
        std::cout << Salad <<": "<< Vprice <<"$."<< std::endl;
        std::cout << Soup <<": "<< Bprice <<"$."<< std::endl;
        std::cout << Coffee <<": " << Cprice <<"$."<< std::endl;
        std::cout << Juice <<": "<< Jprice <<"$."<< std::endl;
        std::cout << Soda <<": "<< Sodaprice <<"$."<< std::endl;
        std::cout << Water <<": "<< Wprice <<"$."<< std::endl;
    }
};

class Chef: public Human {
public:
float Salary;
float Experience;
    Chef(string name, string surname, int age, float salary,float experience, string title) : Human(name, surname ,age, title) {
        Salary = salary;
        Experience = experience;
    }
    void introduce_chef() {
        std::cout << "-> Our chef, " << Name << " is preparing your meal." << std::endl;
        std::cout << Name << " has been cooking for " << Experience << " years so far, he is really impressive." << std::endl;
        std::cout << "The meal is prepared, enjoy it! " << std::endl;
    }
};


class Owner:public Restaurant {
protected:
    int Salary;
    string Name;
public:
    Owner(int salary,string title,string name) : Restaurant(title) {
        Salary = salary;
        Name = name;
    }
    void introduce_owner() {
        std::cout << "Welcome, I'm " << Name << ", the owner of this place, hope you enjoy your time here!" << std::endl;
    }
};


int main() {
    Restaurant rest = Restaurant("La Placinte");
    rest.restaurant();

    std::cout<< "" << std::endl;

Customer client = Customer("John", "Ballack", 30, "Italian", "La placinte");
    client.greeting();

    std::cout<< "" << std::endl;

    Hostess worker = Hostess("Anne", "Smith", 26, 2300, "La Placinte", 12);
    worker.introduce_hostess();

    std::cout<< "" << std::endl;

    Waiter worker1 = Waiter("James", "Sorrow", 22, 2500,"La Placinte");
    worker1.introduce_waiter();

    base_menu menu = base_menu("Pepperoni", 12, "BigBurger", 10, "Beef Steak", 15, "Vinegred", 5, "Borsch", 8, "Latte", 5, "Apple Juice", 3, "Cola", 3, "Water", 1, "La Placinte","Common");
    menu.show_menu();

    std::cout<< "" << std::endl;

    Sommelier worker2 = Sommelier("Dave", "Brown", 44, 3000, 7.5, "La Placinte");
    worker2.introduce_sommelier();

    hard_menu menu1 = hard_menu("Irish Whiskey", 100, "Spicusor" , 20, "Gallo Wine", 120, "McDowells", 150, "Blanco Tequilla", 80, "Divin", 50, "Bardar",70, "Gin Negroni", 60, "Tom Collins", 30, "La Placinte", "Adult");
    menu1.show_hard_menu(); 
    std::cout<< "" << std::endl;
    std::cout << "-> James doesnt drink, bye Dave!" << std::endl;
    std:: cout << "-> Customer wants to order Pepperoni and Juice." << std::endl;

    std::cout<< "" << std::endl;


    Chef worker3 = Chef("Oliver", "Lozano", 46, 4000, 13.5, "La Placinte");
    worker3.introduce_chef();

    std::cout<< "" << std::endl;


    Owner dir = Owner(20000, "La Placinte", "Bryan");
    dir.introduce_owner();

}
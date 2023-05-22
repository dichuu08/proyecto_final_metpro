#include<iostream>
#include<string>
#include<fstream>
#include"fproject.h"

using namespace std;


void addCustomer(customerData customer);
customerData inputCustomer();

void addCar(carData car);
carData inputCar();

void searchCustomer();
void showCustomers();
void updateCustomer();

void newCustomer();
void existingCustomer();

int mainMenu();
int menu1();
int menu2();
int menu2_1();

//////////////////MAIN/////////////////
int main(void){
    while (true)
    {
        mainMenu();
    }
}

void addCustomer(customerData customer){

   ofstream file("project.txt", ios::app);

    if(file.is_open()){ 
        file<<"\n---CUSTOMER INFO---\n\n";
       file<<"ID: "<<customer.id<<endl;
        file<<"Name: "<<customer.name<<endl;
        file<<"Last name: "<<customer.lastName<<endl;
        file<<"Address: "<<customer.address<<endl;
        file  <<"Email: "<< customer.email<< endl;
        file <<"Cellphone number: "<<customer.cellphoneNumber << endl;
    file.close();

    } else
    {
        file<<"File couldn't be opened"<<endl;
    }
}

customerData inputCustomer(){
    
    customerData customer;

    system("cls");
    cout<<"\n---CUSTOMER INFO---\n\n";

    fflush(stdin);

    cout<<"Insert ID: ";
    getline(cin, customer.id);

    cout<<"Insert name: ";
    getline(cin, customer.name); 

    cout<<"Insert last name: ";
    getline(cin, customer.lastName);
    fflush(stdin);

    cout<<"Insert address: ";
    getline(cin, customer.address);

    cout<<"Insert email: ";
    getline(cin, customer.email);

    cout<<"Insert cellphone number: ";
    cin>>customer.cellphoneNumber;

    return customer;
}

void addCar(carData car){

    ofstream file("project.txt", ios::app);

    if(file.is_open()){
        
        file<<"\n---CAR INFO---\n\n";
        file<<"Kind: "<<car.kind<<endl;
        file<<"Brand: "<<car.brand<<endl;
        file<<"Model: "<<car.model<<endl;
        file<<"Color: "<<car.color<<endl;
        file<<"Transmission: "<<car.transmission<<endl,
        file<<"Year: "<<car.year<<endl;
        file<<"Price: "<<car.price<<endl;
        file.close();

    } else{
        file<<"File coulndt be opened"<<endl;
    }
}

carData inputCar(){
    carData car;
 
    cout<<"\n---CAR INFO---\n\n";

   fflush(stdin);

    cout<<"Insert kind: ";
    getline(cin, car.kind);

    cout<<"Insert brand: ";
    getline(cin, car.brand);

    cout<<"Insert model: ";
    getline(cin, car.model);

    cout<<"Insert color: ";
    cin>>car.color;

    cout<<"Insert transmission: ";
    cin>>car.transmission; 

    fflush(stdin);

    cout<<"Insert year: ";
    cin>>car.year;

    cout<<"Insert price: ";
    cin>>car.price;
 
    return car;
}

void newCustomer(){
    customerData customer = inputCustomer();
    addCustomer(customer);

    carData car = inputCar();
    addCar(car);
}

void existingCustomer(){
    carData car;
    addCar(car);
}

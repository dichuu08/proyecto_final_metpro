#include<iostream>
#include<string>
#include<fstream>

using namespace std;

struct carData{
    string kind, brand, model, color;
    char transmission; 
    int year;
    double price; 
}; 

struct customerData{
    string name, lastName, id, address, email;
    int cellphoneNumber;
};
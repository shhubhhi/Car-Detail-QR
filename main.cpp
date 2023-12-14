#include <iostream>
#include <map>
#include <bits/stdc++.h>
#include "QrCodeGeneratorDemo.cpp"
using namespace std;

int main(){
    string no_plate, o_name, o_number, o_add, v_type, v_comp, v_model, reg_id, poll_date;
    map<string, string> mp;

    cout << "\"Registering new vehicle\"" << endl << endl;
    cout << "Enter the following Details:" << endl;

    cout << "Car Number: ";
    cin >> no_plate;
    mp["Car Number"] = no_plate;

    cout << "Owner Name: ";
    cin >> o_name;
    mp["Owner's Name"] = o_name;

    cout << "Owner Contact Number: ";
    cin >> o_number;
    mp["Owner's Contact Number"] = o_number;

    cout << "Owner Address: ";
    cin >> o_add;
    mp["Owner's Address"] = o_add;

    cout << "Type of vehicle: ";
    cin >> v_type;
    mp["Type of vehicle"] = v_type;

    cout << "Vehicle Company: ";
    cin >> v_comp;
    mp["Vehicle Company"] = v_comp;

    cout << "Vehicle model: ";
    cin >> v_model;
    mp["Vehicle Model"] = v_model;

    cout << "Registeration Identification Number: ";
    cin >> reg_id;
    mp["Registeration ID"] = reg_id;

    cout << "Pollution test date: ";
    cin >> poll_date;
    mp["Pollution Date"] = poll_date;

    // Creating SVG using "QrCodeGeneratorDemo.cpp", "qrcodegen.cpp", "qrcodegen.hpp"
    char ca[no_plate.length()];

    strcpy(ca, no_plate.c_str());
    generateSvg(ca);
}
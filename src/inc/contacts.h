#pragma once
#include <iostream>
#include <regex>
#include <string>
#include <vector>
#include <yaml-cpp/yaml.h>

using namespace std;

class contact {
    private:
        string name;
        string address;
        string email_personal;
        string email_work;
        string phone;
        string mobile;
        string website;
        string social;
    public:
        string getName();
        void setName();
        contact();
        void printContact();
};

class contactList{
    private:
        vector<contact> contacts;
        int number;
    public:
        void addContact(contact c); // Lets user add a new contact
        void removeContact(contact c); // Lets user remove a contact
        contact searchContact(string phrse); // Lets user search for contacts
        contact getContact(int index); // Lets user search for contacts
        void listContacts(); // Lists all contacts
        void contactInfo(contact c);
        void printContacts(vector<contact>);
        vector<contact> loadContacts(string filePath);
        void saveContacts(vector<contact>, string filePath);
};

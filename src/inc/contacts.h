#pragma once
#include <iostream>
#include <fstream>
#include <regex>
#include <string>
#include <vector>
#include <map>
#include <yaml-cpp/yaml.h>
#include "crypt.hpp"

class contact {
    private:
        std::map<std::string, std::string> container;

        std::pair<std::string, int> index = std::make_pair("Index", 0);
        std::pair<std::string, std::string> name = std::make_pair("Name", "(none)");
        std::pair<std::string, std::string> group = std::make_pair("Group", "(none)");
        std::pair<std::string, std::string> company= std::make_pair("Company", "(none)");
        std::pair<std::string, std::string> email1 = std::make_pair("EmailPersonal", "(none)");
        std::pair<std::string, std::string> email2 = std::make_pair("EmailWork", "(none)");
        std::pair<std::string, std::string> phone = std::make_pair("Phone", "(none)");
        std::pair<std::string, std::string> website = std::make_pair("Website", "(none)");
        std::pair<std::string, std::string> social = std::make_pair("Social", "(none)");

    public:
        void setIndex(int value);
        int getIndex(){ return index.second; }
        std::string getIndexLabel(){ return index.first; }
        void setGroup(std::string value);
        std::string getGroup(){ return group.second; }
        std::string getGroupLabel(){ return group.first; }
        void setName(std::string value);
        std::string getName(){ return name.second; }
        std::string getNameLabel(){ return name.first; }
        void setCompany(std::string value);
        std::string getCompany(){ return company.second; }
        std::string getCompanyLabel(){ return company.first; }
        void setEmailPersonal(std::string value);
        std::string getEmailPersonal(){ return email1.second; }
        std::string getEmailPersonalLabel(){ return email1.first; }
        void setEmailWork(std::string value);
        std::string getEmailWork(){ return email2.second; }
        std::string getEmailWorkLabel(){ return email2.first; }
        void setPhone(std::string value);
        std::string getPhone(){ return phone.second; }
        std::string getPhoneLabel(){ return phone.first; }
        void setWebsite(std::string value);
        std::string getWebsite(){return website.second; }
        std::string getWebsiteLabel(){return website.first; }
        void setSocial(std::string value);
        std::string getSocial(){return social.second;}
        std::string getSocialLabel(){return social.first;}

        void printContact();
        void newContact();
};

class Contacts{
    private:
        std::vector<contact> contactList;
        static int number;

    public:
        bool encryption = false;
        void newContact();
        void addContact(contact c); // Lets user add a new contact
        void editContact(contact c); // Lets user add a new contact
        void removeContact(contact c); // Lets user remove a contact
        Contacts searchContact(std::string phrse); // Lets user search for contacts
        contact getContact(std::string phrse); // Lets user search for contacts
        contact getContact(int index); // Lets user search for contacts
        void listContacts(); // Lists all contacts
        void printContacts();
        std::vector<contact> loadContacts(std::string filePath);
        void saveContacts(std::string filePath);
        int numerate();
        bool isValidContact(contact c);
};

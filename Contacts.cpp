#include <iostream>
using namespace std;
class Contact{
    string name;
    string mobNumber;

public:
    Contact(){
        name = "";
        mobNumber = "";
    }

    bool show(){
        if(name != ""){
            cout << "\t\t\t\t\t\t\tName : " << name << endl;
            cout << "\t\t\t\t\t\t\tMob Number : " << mobNumber << endl;
            return true;
        }else{
            return false;
        }
    }

    bool add(string newname, string newmobNumber){
        if(name == ""){
            this -> name = newname;
            this -> mobNumber = newmobNumber;
            return true;
        }else{
            return false;
        }
    }

    bool edit(string newName){

        string mob;
        if(newName == name){
            cout << "Enter new name" << endl;
            cin >> newName;
            cout << "Enter new mob. number" << endl;
            cin >> mob;

            name = newName;
            mobNumber = mob;
            return true;

        }else{
            return false;
        }
    }


    bool erase(string newName){
        if(name == newName){
            name ="";
            mobNumber = "";
            return true;
        }else{
            return false;
        }
    }

    bool show(string search){
        if(search == name){
            cout << "Name : " << name << endl;
            cout << "Mob Number : " << mobNumber << endl;
            return true;
        }else{
            return false;
        }
    }



    bool name_valid(string tname){
        if(tname.size() > 20){
            cout << "Invalid Name!\nEnter a name within 20 characters!" << endl;
            return false;
        }
            else if(tname == ""){

            cout << "Invalid Name!\nName cannot be blank!" << endl;
            return false;

        }
            else
                return true;
    }

    bool mob_valid(string tmob){
        if(tmob.size() > 13 || tmob.size() < 10){
            cout << "Invalid mobile no.\nEnter a no. between 10 and 13 digits" << endl;
            return false;
        }
        else if(tmob == ""){
            cout << "Invalid mobile no.\nMobile no. cannot be blank" << endl;
            return false;
        }
        else
            return true;
    }


};

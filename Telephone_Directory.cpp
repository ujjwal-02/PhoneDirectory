#include <iostream>
#include <string>
#include <cstring>
#include <windows.h>
#include <bits/stdc++.h>

#include "Contacts.cpp"

using namespace std;


int k = 0;

    vector<string> name;
    vector<string> number;
    Contact *person = new Contact[100];

void start(){
    system("Color 0A");

    cout << "\n\n\n\n\n\n\n\n\n";
    cout << "\t\t\t\t\t\t_____________________\n";
    cout << "\t\t\t\t\t\t#TELEPHONE DIRECTORY#\n";
    cout << "\t\t\t\t\t\t_____________________\n";

    cout << "\n\t\t\t\t\t\tLoading...";

    char x = 219;

    for(int i = 0; i < 35; i++){
         cout << x;
         if(i < 10){
            Sleep(300);
         }
         if(i >= 10 && i < 20){
            Sleep(150);
         }
         if(i > 10){
            Sleep(25);
         }
    }

    system("cls");
}

int inbox(){

    system("Color B4");
    cout << "\n\n\n\n\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t||---------------------------------||\n";
    cout << "\t\t\t\t\t\t\t\t||      :::PHONE BOOK:::           ||\n";
    cout << "\t\t\t\t\t\t\t\t||---------------------------------||\n";
    cout << "\t\t\t\t\t\t\t\t||                                 ||\n";
    cout << "\t\t\t\t\t\t\t\t||   [1] Create Contact            ||\n";
    cout << "\t\t\t\t\t\t\t\t||   [2] Display All Contacts      ||\n";
    cout << "\t\t\t\t\t\t\t\t||   [3] Search by Number          ||\n";
    cout << "\t\t\t\t\t\t\t\t||   [4] Search by Name            ||\n";
    cout << "\t\t\t\t\t\t\t\t||   [5] Edit Contact              ||\n";
    cout << "\t\t\t\t\t\t\t\t||   [6] Delete Contact            ||\n";
    cout << "\t\t\t\t\t\t\t\t||   [7] Delete All                ||\n";
    cout << "\t\t\t\t\t\t\t\t||   [8] Number of Contacts        ||\n";
    cout << "\t\t\t\t\t\t\t\t||                                 ||\n";
    cout << "\t\t\t\t\t\t\t\t||---------------------------------||\n";
    cout << "\t\t\t\t\t\t\t\t||   [9] Close Phone Book          ||\n";
    cout << "\t\t\t\t\t\t\t\t||---------------------------------||\n";

    int num;
    cout << "........................Choose a number to do any of the application"<< endl;
    cin >> num ;

    system("cls");
    return num;
}

void implementation(int check);


int main(){

    start();


    int check;

    check = inbox();
    implementation(check);

}

void implementation(int check){
    do{


        if(check == 1){

                int count = 0;
        bool flag = true, cancel_flag = false;
        string temp_name = "" ;
        string temp_mobnumber = "";


            cout << "\t\t\t\t\t\t\tAdd new Contanct\n\t\t\t\t\t\t\tpress $ to cancel" << endl;
            do{



                if(count){
                    cout << "\t\t\t\t\t\t\tAdd again\n\t\t\t\t\t\t\tpress $ to cancle" << endl;
                }

                count++;

                cout << "\t\t\t\t\t\t\tEnter Name : " <<endl;

                cin >> temp_name;

                if(temp_name == "$"){
                    cancel_flag = true;
                    break;
                }
                cout << "\t\t\t\t\t\t\tEnter Mobile Number : " <<endl;
                cin >> temp_mobnumber;

                /*for(int i = 0; i < k; i++){
                    if(person[i].name_exist(temp_name)){
                        cout << "\t\t\t\t\t\t\t\tName already exist please enter distinct name : " << endl;
                        flag = true;
                        break;
                    }
                }*/

                Contact x;


                 if(x.add(temp_name, temp_mobnumber))
                {
                    person[k] = x;
                    cout << "\t\t\t\t\t\t\tContact added successfully!" << endl;
                    flag = 1;
                    k++;

                }

            if(!flag)
                cout << "\t\t\t\t\t\t\tMemory full! Delete some contacts first." << endl;




            }while( flag );

    }




        else if(check == 2){
                bool flag = false;
                for(int i = 0; i < k; i++){
                        if(person[i].show()){
                            flag = true;
                        }
                }

            if(k == 0)
                cout << "\t\t\t\t\t\t\tThere are no contacts in your phonebook!" << endl;

        }
        else if(check == 5){
                string temp_name;
                cout << "\t\t\t\t\t\t\t Enter name to update contact : " << endl;
                cin >> temp_name;
                bool flag = 0;

                 for(int i=0; i<100; i++){
                    if(person[i].edit(temp_name)){
                    cout << "Edited Successfully!" << endl;
                    flag = 1;
                    break;
                   }


            }
             if(!flag)
                cout << "Contact name not found!" << endl;

        }

        else if(check == 4){
             string temp_name;
            cout << "\t\t\t\t\t\t\t Enter name to search : " << endl;
            cin >> temp_name;
            bool flag = 0;

            for(int i=0; i<100; i++)
                    if(person[i].show(temp_name))
                    {
                        flag = 1;
                        break;
                    }

                if(!flag)
                    cout << "Contact name not found" << endl;
        }

        else if(check == 6){
            string temp_name;
            cout << "\t\t\t\t\t\t\t Enter name to delete : " << endl;
            cin >> temp_name;
            bool flag = 0, cancle_flag = 0;
             /*for(int i=0; i<100; i++){
                 if(person[i].name_exists(temp_name))
                {
                    flag = 1;
                    cout << "\t\t\t\t\t\tAre you sure you want to delete? (1/0)"
                    << endl;
                    int yes;
                    cin >> yes;
                    if(!yes)
                    {
                        system("cls");
                        cancel_flag = 1;
                    }
                    break;
                }

                if(!flag)
                    cout << "\t\t\t\t\t\t\tContact name not found!" << endl;

                if(cancel_flag)
                    break;
             }*/
             if(flag)
                {
                    for(int i=0; i<100; i++)
                        if(person[i].erase(temp_name))
                        {
                            cout << "Deleted successfully!" << endl;
                            break;
                        }
                }


        }
        check = inbox();
    }while(check != 9);


}

/*void implementation(int check){


    do{
        if(check == 1){
            string fullname;
            cout << "\t\t\t\t\t\t\t\t Name :"<< endl;
            cin >> fullname;
            name.push_back(fullname);
            cout << "\t\t\t\t\t\t\t\t Mobile Number :"<< endl;
            string mob;
            cin >> mob;
            number.push_back(mob);
            k++;
        }
        else if(check == 2){
                if(k == 0){
                    cout << "THERE IS NO CONTACT IN YOUR PHONE BOOK" << endl;
                }else{
                     for(int i = 0; i < k; i++){
                        cout << "\t\t\t\t\t\t\t Name : " << name[i] << endl;
                        cout << "\t\t\t\t\t\t\t Mobile Number : " << number[i] << endl;
                     }
                }

        }
        else if(check == 3){
            string temp;
            cout << "\t\t\t\t\t\t\t Enter number to search : " << endl;
            cin >> temp;
            int index = -1;

            for(int i =0; i < k; i++){
                if(number[i] == temp){
                    index = i;
                    break;
                }
            }
            if(index != -1){
                cout << "\t\t\t\t\t\t Name : " << name[index] << endl;
                cout << "\t\t\t\t\t\t Number : " << number[index] << endl;
            }else{
                cout << "\t\t\t\t\t\t No such number exist" << endl;
            }
        }
        else if(check == 6){
            string temp;
            cout << "\t\t\t\t\t\t\t Enter name to delete : " << endl;
            cin >> temp;
            int index = -1;

            for(int i =0; i < k; i++){
                if(name[i] == temp){
                    index = i;
                    string temp = name[k - 1];
                    name[k - 1] = name[i];
                    name[i] = temp;
                    name.pop_back();

                    temp = number[k -1];
                    number[k - 1] = number[i];
                    number[i] = temp;
                    number.pop_back();
                    k--;
                    break;
                }
            }
            if(index != -1){
                cout << "\t\t\t\t\t\t Delete successful. "  << endl;
            }else{
                cout << "\t\t\t\t\t\t No such person exist" << endl;
            }
        }
        else if(check == 5){
                string temp;
                cout << "\t\t\t\t\t\t\t Enter name to update contact : " << endl;
                cin >> temp;
                int index = -1;

            for(int i =0; i < k; i++){
                if(name[i] == temp){
                    index = i;
                    string x;
                    cout << "\t\t\t\t\t\t Enter new name : " << endl;
                    cin >> x;
                    name[index] = x;
                    cout << "\t\t\t\t\t\t Enter new number : " << endl;
                    cin >> x;
                    number[index] = x;
                }
            }
            if(index != -1){
                cout << "\t\t\t\t\t\t contact updated "  << endl;
            }else{
                cout << "\t\t\t\t\t\t No such person exist" << endl;
            }

        }
        else if(check == 4){
             string temp;
            cout << "\t\t\t\t\t\t\t Enter name to search : " << endl;
            cin >> temp;
            int index = -1;

            for(int i =0; i < k; i++){
                if(name[i] == temp){
                    index = i;
                    break;
                }
            }
            if(index != -1){
                cout << "\t\t\t\t\t\t Name : " << name[index] << endl;
                cout << "\t\t\t\t\t\t Number : " << number[index] << endl;
            }else{
                cout << "\t\t\t\t\t\t No such person exist" << endl;
            }
        }
        else if(check == 7){
                while(k != 0){
                    name.pop_back();
                    number.pop_back();
                    k--;
                }
                cout << "\t\t\t\t\t\t All contact deleted " << endl;
        }
        else if(check == 8){

                cout << "\t\t\t\t\t\t Total Number of contact in the contact book are : " << k << endl;
        }

        check = inbox();


    }while(check != 9);
}*/




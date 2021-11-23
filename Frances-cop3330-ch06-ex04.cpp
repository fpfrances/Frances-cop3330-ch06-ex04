/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Filipe Frances
 */
#include "Header.h"


void getData(){
    std::cout << "Please enter a Name(Press enter), then enter the score(Press enter). To stop input type '0' in name field and 0 in score field.\n";
    Name_value data; //variable to hold string and int pair
    char loop = 'y';

    //get names and scores
    while (loop == 'y'){
        std::cout << "\nName: ";
        std::cin >> data.name;
        std::cout << "Score: ";
        std::cin >> data.score;
        for (int i = 0; i < n_s.size(); ++i){
            while (n_s[i].name == data.name){
                std::cout << "Sorry, that name has already been entered. Please Re-Name it: \n" << std::endl;
                std::cin >> data.name;
            }
        }
        if (data.name == "0" && data.score == 0){
            loop = 'n';
        }
        n_s.push_back(data); //push string and int pair into the vector
    }
}

void printData(){
    std::cout << '\n';

    //print
    for (int x = 0; x < n_s.size() - 1; ++x){
        std::cout << n_s[x].name<< '\t' << n_s[x].score << '\n';
    }
}

int main(){
    getData();
    printData();
    system("pause>0");
}
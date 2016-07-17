/*
 * =====================================================================================
 *
 *       Filename:  ex_528.cpp
 *
 *    Description:  Exercise 5.28 - 12 Days of Christmas
 *
 *        Version:  1.0
 *        Created:  07/04/16 23:49:06
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

std::string getDay(int);
void printVerse(int);

int main(int argc, const char *argv[]){
    for(int i=1; i<=12; i++){
        std::cout << "\nOn the " << getDay(i) <<  " day of Christmas my true love sent to me\n";
        printVerse(i);
    }
    return 0;
}
std::string getDay(int day){
    switch(day){
        case 1:
            return "First";
            break;
        case 2:
            return "Second";
            break;
        case 3:
            return "Third";
            break;
        case 4:
            return "Fourth";
            break;
        case 5:
            return "Fifth";
            break;
        case 6:
            return "Sixth";
            break;
        case 7:
            return "Seventh";
            break;
        case 8:
            return "Eighth";
            break;
        case 9:
            return "Nineth";
            break;
        case 10:
            return "Tenth";
            break;
        case 11:
            return "Eleventh";
            break;
        case 12:
            return "Twelveth";
            break;
        default:
            break;
    }
}
void printVerse(int day){
    switch(day){
        case 12:
            std::cout << "Twelve Drummers Drumming" << std::endl;
        case 11:
            std::cout << "Eleven Pipers Piping" << std::endl;
        case 10:
            std::cout << "Ten Lords a-Leaping" << std::endl;
        case 9:
            std::cout << "Nine Ladies Dancing" << std::endl;
        case 8:
            std::cout << "Eight Maids a-Milking" << std::endl;
        case 7:
            std::cout << "Seven Swans a-Swimming" << std::endl;
        case 6:
            std::cout << "Six Geese a-Laying" << std::endl;
        case 5:
            std::cout << "Five Gold Rings" << std::endl;
        case 4:
            std::cout << "Four Calling Birds" << std::endl;
        case 3:
            std::cout << "Three French Hens" << std::endl;
        case 2:
            std::cout << "Two Turtle Doves" << std::endl;
        case 1:
            printf("%s Partridge in a Pear Tree\n", (day > 1) ? "and a " : "a ");
        default:
            break;
    }
}

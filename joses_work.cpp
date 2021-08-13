// Primer programa de ejemplo en C++
 
#include <iostream>
#include <ctime>
#include <vector>
#include <conio.h>
#include<string.h>
#include <sstream>
#include<Windows.h>
#include <fstream>


using namespace std;

int main (int argc, char *argv[]) 

{
    while(true){

 
    time_t now = time(0);
    

    tm * time = localtime (&now);
    int year = 1900 + time->tm_year;
    int mes = time->tm_mon+1;
    int day = time->tm_mday;
    int year2 = 1900 + time->tm_year-2000;

    int hour= time->tm_hour;
    int min= time->tm_min;
    int sec= time->tm_sec;



    ostringstream fecha;

     fecha << year <<"-"<< mes <<"-"<< day <<"-"<<hour <<":"<<min<<":"<<sec <<"  " << year2 <<","<< mes <<","<< day<<"," <<hour <<"."<<min<<"."<<sec;

    cout << fecha.str()<< endl;


    Sleep(1000);

   
    fstream archivo2;
    archivo2.open("lectura.txt",fstream::out);

    archivo2 << fecha.str(); 
    archivo2.close();
    

    }

    return 0;
}


    
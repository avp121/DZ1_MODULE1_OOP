#pragma once
#include <time.h>
#include "choise.h"

#define NumOfRandSurnames		10
#define NumOfRandNames			10
#define NumOfRandSecNames		10

#define NumOfRandStreets		10
#define NumOfRandTypes			6
#define NumOfRandStructures		10
#define MaxHouses				3
#define MinHouses				5

 /*
 char Surnames[10][100] = {"Komarov\0", "Volkov\0", "Sinicin\0", "Galitskiy\0", "Petrosyan\0", "Vinnik\0", "Pavlov\0", "Soloviev\0", "Sidorov\0", "Polevoy\0"};
 char Names[10][100] = {"Dmitriy\0", "Vladimir\0", "Simeon\0", "Petr\0", "Anton\0", "Sergey\0", "Victor\0", "Svyatoslav\0", "Oleg\0", "Emelyan\0"};
 char SecNames[10][100] = {"Lvovich\0", "Alexandrovich\0", "Nikolayevich\0", "Vardanovich\0", "Danilovich\0", "Kirillovich\0", "Petrovich\0", "Afanasyevich\0", "Timurovich\0", "Olegovich\0"};
 char Streets[10][100] = {"Zelenaya\0", "Solnechnaya\0", "Revolucionerov\0", "Prikanalnaya\0", "Kosmonavtov\0", "Ingenernaya\0", "Bolotistaya\0", "Tixaya\0", "Oblachnaya\0", "Rechnaya\0"};
 char StreetTypes[6][100] = ("Avenue\0", "Boulevard\0", "Highway\0", "Prospect\0", "Square\0", "Street\0");
 char Structures[10] = {'a', 'b', 'c', 'd', 'e', '1', '2', '3', '4', '5'};
 */

 char ArrOfSurnames[10][256] = {"Komarov\0", "Volkov\0", "Sinicin\0", "Galitskiy\0", "Petrosyan\0", "Vinnik\0", "Pavlov\0", "Soloviev\0", "Sidorov\0", "Polevoy\0"};
 char ArrOfNames[10][256] = {"Dmitriy\0", "Vladimir\0", "Simeon\0", "Petr\0", "Anton\0", "Sergey\0", "Victor\0", "Svyatoslav\0", "Oleg\0", "Emelyan\0"};
 char ArrOfSecNames[10][256] = {"Lvovich\0", "Alexandrovich\0", "Nikolayevich\0", "Vardanovich\0", "Danilovich\0", "Kirillovich\0", "Petrovich\0", "Afanasyevich\0", "Timurovich\0", "Olegovich\0"};
 char ArrOfStreets[10][256] = {"Zelenaya\0", "Solnechnaya\0", "Revolucionerov\0", "Prikanalnaya\0", "Kosmonavtov\0", "Ingenernaya\0", "Bolotistaya\0", "Tixaya\0", "Oblachnaya\0", "Rechnaya\0"};
 char ArrOfStreetTypes[6][256] = {"Avenue\0", "Boulevard\0", "Highway\0", "Prospect\0", "Square\0", "Street\0"};
 //char StreetTypes[6][256] = ("Avenue\0", "Boulevard\0", "Highway\0", "Prospect\0", "Square\0", "Street\0");
 char ArrOfStructures[10][256] = {'a', 'b', 'c', 'd', 'e', '1', '2', '3', '4', '5'};


void RandStreet (Street *, bool);
void RandHome (Home *, bool);
void RandVoter (Voter *);



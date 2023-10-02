#include <iostream>
#include <string>
#include <cstdlib>
#include <array>
#include <algorithm>
#include <vector>
#include "functions.hpp"
#include <stack>

using namespace std;

void DealHand(std::vector<Player> tablePlayers) {

    int dealer, smallBlind, bigBlind = setDealerAndBlinds(0, 1, 2, sizeof(tablePlayers));
    std::vector<std::string> shuffDeck = shuffleDeck(deck);

    for (auto player: tablePlayers) {
        std::string card1 = shuffDeck.back();
        shuffDeck.pop_back();
        std::string card2 = shuffDeck.back();
        shuffDeck.pop_back();
        player.setCards(card1, card2);
    }

    

}

std::vector<std::string> deck = {
    "AS", "2S", "3S", "4S", "5S", "6S", "7S", "8S", "9S", "10S", "JS", "QS", "KS",
    "AH", "2H", "3H", "4H", "5H", "6H", "7H", "8H", "9H", "10H", "JH", "QH", "KH",
    "AC", "2C", "3C", "4C", "5C", "6C", "7C", "8C", "9C", "10C", "JC", "QC", "KC",
    "AD", "2D", "3D", "4D", "5D", "6D", "7D", "8D", "9D", "10D", "JD", "QD", "KD",
};

int chips[] = {1, 5, 10, 25, 50, 100, 250, 500, 1000, 5000, 10000};

int pot = 0;

int main() {
    cout << "Welcome to Texas Hold'em.\n\n ";
    rules (); 
    int players;
    std::string name;
    cout << "Pick the Number of Players (1 to 8) : ";
    cin >> players;
    cout << "What is your Name : ";
    cin >> name;
    cout << "\n\n\n";
    std::string names[10] = {"Matt", "Jack", "James", "Cal", "Fin", "Freddie", "Sikky"};


    std::vector<Player> tablePlayers = getRoster(names, players);

    Player me;
    me.setName(name);

    tablePlayers.push_back(me);

    cout << "Welcome to all poker players!!!\n\n";

    for (auto i : tablePlayers) {
         std::cout << i.getName() << "\n";
    }

    cout << "All players must deal in £50,000. ";

    char ans;

    cout << "Are you ready to proceeed? Enter Y or N.";
    cin >> ans;
    if (ans ='N') {
        return;
    }

    players += 1;






return 0;
}



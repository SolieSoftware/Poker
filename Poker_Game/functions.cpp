
#include "functions.hpp"
#include <string>
#include <vector>

using namespace std;

    void Player::setName(std::string new_name) {
        name = new_name;
    }

    void Player::setCards(std::string new_firstCard, std::string new_secondCard) {
        firstCard = new_firstCard;
        secondCard = new_secondCard;
    }

    void Player::removeCards() {
        firstCard = "";
        secondCard = "";

    }

    std::string Player::showCards() {
        return firstCard, secondCard;
    }

    std::string Player::getName() {
        return name;
    }

    void Player::betMoney(int amount) {
        money -= amount;
    }


void rules() {
    cout << "Each player is dealt two cards, each round. \n";
    cout << "At the start of the round the players dealt to first have to put in a large blind and a small blind.\n ";
    cout << "Blah Blah Blah! \n";
};

std::vector<Player> getRoster(std::string names[], int players) {
    std::vector<Player> roster;

    for (int i=0; i < sizeof(names); i++) {
        Player player;
        player.setName(names[i]);
        roster.push_back(player);

    }

    return roster;
};



int setDealerAndBlinds(int dealer, int smallBlind, int bigBlind, int players) {
    dealer += 1;
    smallBlind += 1;
    bigBlind += 1;
    if (dealer >= players) {
        dealer = 0;
    } 
    else if (smallBlind >= players) {
        smallBlind = 0;
    }
    else if (bigBlind >= players) {
        bigBlind = 0;
    }
    return dealer, smallBlind, bigBlind;
};


std::vector<std::string> shuffleDeck(std::vector<std::string> deck) {
    int size = deck.size();
    for (int i = 0; i < size; i++) {
        int j = i + rand() % (size - i);
        swap(deck[i], deck[j]);
    }
    return deck;
};
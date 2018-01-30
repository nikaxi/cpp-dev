#include <iostream>
using namespace std;


class GameBoard {
    public:
    GameBoard(){ cout << "GameBoard()\n";}
    GameBoard(const GameBoard&) {
        cout << "GameBoard(const GameBoard&)\n";
    }

    GameBoard& operator=(const GameBoard&) {
        cout << "GameBoard::operator=()\n";
        return *this;
    }
    ~GameBoard() { cout << "~GameBoard()\n";}
};

class Game {
    GameBoard gb;
    public:
    Game() { cout << "Game()\n";}
    Game(const Game&) {
        cout << "Game(const Game&)\n";
    }

    Game& operator=(const Game& g) {
        gb = g.gb;
        cout << "Game::operator=()\n";
        return *this;
    }

    Game(int) { cout << "Game(int)\n";}
    class Other {};
    operator Other() const {
        cout << "Game::operator Other()\n";
        return Other();
    }
    ~Game() { cout << "~Game()\n";}
};


class Chess : public Game {};


void f(Game::Other) {}

class Checkers : public Game {
    public:
    Checkers() { cout << "Checkers()\n";}
    Checkers(const Checkers&c): Game(c) {
        cout << "Checkers(const Checkers&)\n";
    }

    Checkers& operator=(const Checkers& c) {
        Game::operator=(c);
        cout << "Checkers::operator=()\n";
        return *this;
    }
};


int main() {
    Chess d1;
    Chess d2(d1);
    d1 = d2;
    f(d1);
    Game::Other go;
    Checkers c1, c2(c1);
    c1 = c2;
}
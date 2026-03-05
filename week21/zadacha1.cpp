#include <iostream>
#include <string>

using namespace std;

class GameManager {
private:
    bool isPaused = false;
    GameManager() {}
    GameManager(const GameManager&) = delete;
    GameManager& operator=(const GameManager&) = delete;

public:
    static GameManager& getInstance() {
        static GameManager instance;
        return instance;
    }

    bool getPause() {
        return this->isPaused;
    }


    void togglePause() {
        if (!this->isPaused) {
            this->isPaused = true;
            cout << "Game is now running!" << endl;
        } else {
            this->isPaused = false;
            cout << "Game is now paused" << endl;
        }
    }
};

int main() {
    GameManager& gameManager1 = GameManager::getInstance();
    GameManager& gameManager2 = GameManager::getInstance();


    gameManager1.togglePause();
    gameManager2.togglePause();
    gameManager1.togglePause();

    if (&gameManager1 == &gameManager2) {
        cout << "SUCCESS: Both variables point to the same GameManager instance.." << endl;
    }
}

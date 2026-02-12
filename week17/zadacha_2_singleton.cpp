#include <iostream>
#include <string>
#include <map>

using namespace std;

class Configuration {
private:
    map<string, string> settings;
    Configuration() {}
    Configuration(const Configuration&) = delete;
    Configuration& operator = (const Configuration&) = delete;

public:
    static Configuration& getInstance() {
        static Configuration instance;
        return instance;
    }

    void setSettings(string key, string value) {
        this->settings[key] = value;
    }

    string getSetting(string key) {
        return this->settings[key];
    }
};

int main() {
    Configuration& configuration1 = Configuration::getInstance();
    Configuration& configuration2 = Configuration::getInstance();

    configuration1.setSettings("username", "Rosen");
    configuration2.setSettings("theme", "White");

    cout << "Username: " << configuration1.getSetting("username") << endl;
    cout << "Theme: " << configuration2.getSetting("theme") << endl;

    cout << "Config 1 address: " << &configuration1 << endl;
    cout << "Config 2 address: " << &configuration2 << endl;
}
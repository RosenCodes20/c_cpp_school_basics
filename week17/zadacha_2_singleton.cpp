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
    void setSettings(string key, string value) {
        this->settings[key] = value;
    }

    string getSetting(string key) {
        return this->settings[key];
    }
};
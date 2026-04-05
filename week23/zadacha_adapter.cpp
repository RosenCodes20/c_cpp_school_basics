#include <iostream>
#include <string>
using namespace std;

class PhoneCharger
{
    public:
    virtual void chargeWith5V() = 0;
    virtual ~PhoneCharger() = default;
};

class WallOutlet
{
    public:
        void provide220V() const
        {
            cout << "[WallOutlet] Providing 220V AC\n";
        }
};

class ChargerAdapter: public PhoneCharger {
private:
    WallOutlet outlet;

    void stepDown220To5V() const
    {
        cout << "[ChargerAdapter] Converting 220V AC -> 5V DC\n";
    }

    void regulateAndProtect() const
    {
        cout<<"[ChargerAdapter] Regulating voltage and providing overcurrent protection\n";
    }
public:
    void chargeWith5V() override
    {
        outlet.provide220V();
        stepDown220To5V();
        regulateAndProtect();
        cout << "[ChargerAdapter] Phone is charging at 5V\n";
    }
};

int main()
{
    ChargerAdapter charger;
    charger.chargeWith5V();
    return 0;

}

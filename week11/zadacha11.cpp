#include <iostream>

using namespace std;

class Item {
    private:
        static int item_count;
        int id;

    public:
        Item() {
            item_count++;
        }

        ~Item() {
            item_count--;
            cout << "Reducing item count...." << endl;
        }

        static int getCount() {
            return item_count;
        }

        int getId() const {
            return this->id;
        }

        void setId(int id) {
            this->id = id;
        }
};

int Item::item_count = 0;

template <typename T>
bool is_equal(T a, T b) {
    if (a == b) {
        return true;
    } else {
        return false;
    }
}

int main() {
    cout << "Items count: " << Item::getCount() << endl;

    Item i1;
    Item i2;

    cout << "Items count: " << Item::getCount() << endl;

    {
        Item i3;
        cout << "Items count: " << Item::getCount() << endl;
    }

    cout << "Items count: " << Item::getCount() << endl;

    const Item i_const;

    cout << "Item id: " << i_const.getId() << endl;

    // i_const.setId(20); // zakomentirano, zashtoto hvurlq greshka, ako iskate da go probvate - ctrl + / ili command + /  :)

    // Greshka: i_const e konstanten obekt (const Item), a setId ne e const metod.
    // Nekonstanten metod ne moje da bude izvikan vurhu const obekt, zashtoto bi promenil sustoqnieto mu, a nie ne celim tova...

    cout << "Is equal: " <<  is_equal(10, 10) << endl;
    cout << "Is equal: " << is_equal(10.2, 10.2) << endl;
    cout << "Is equal: " << is_equal("hi", "hi") << endl;
}
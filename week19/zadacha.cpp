#include <iostream>

using namespace std;

class Warrior {
public:
    virtual void attack() = 0;
    virtual ~Warrior() = default;
};

class Archer {
public:
    virtual void attack() = 0;
    virtual ~Archer() = default;
};

class Mage {
public:
    virtual void attack() = 0;
    virtual ~Mage() = default;
};

class CharacterFactory {
public:
    virtual Warrior* createWarrior() = 0;
    virtual Archer* createArcher() = 0;
    virtual Mage* createMage() = 0;
    virtual ~CharacterFactory() = default;
};

class ElfWarrior : public Warrior {
public:
    void attack() override {
        cout << "Elf warrior strikes fast!" << endl;
    }
};

class ElfArcher : public Archer {
    public:
    void attack() override {
        cout << "Elf archer fires precise arrows!" << endl;
    }
};

class ElfMage : public Mage {
    public:
    void attack() override {
        cout << "Elf mage cast nature spell!" << endl;
    }
};

// ORCS

class OrcWarrior : public Warrior {
    public:
    void attack() override {
        cout << "Orc warrior smashes brutally!" << endl;
    }
};

class OrcArcher : public Archer {
    public:
    void attack() override {
        cout << "Orc archer shoots crute arrows!" << endl;
    }
};

class OrcMage : public Mage {
    public:
    void attack() override {
        cout << "Orc mage unleashes dark magic!" << endl;
    }
};

class ElfFactory : public CharacterFactory {
public:
    Warrior* createWarrior() override {
        return new ElfWarrior();
    }

    Archer* createArcher() override {
        return new ElfArcher();
    }

    Mage* createMage() override {
        return new ElfMage();
    }
};

class OrcFactory : public CharacterFactory {
public:
     Warrior* createWarrior() override {
        return new OrcWarrior();
    }

    Archer* createArcher() override {
        return new OrcArcher();
    }

    Mage* createMage() override {
        return new OrcMage();
    }

};

// Human
class HumanWarrior : public Warrior {
    public:
    void attack() override {
        cout << "Human warrior smashes brutally!" << endl;
    }
};

class HumanArcher : public Archer {
    public:
    void attack() override {
        cout << "Human archer shoots crute arrows!" << endl;
    }
};

class HumanMage : public Mage {
    public:
    void attack() override {
        cout << "Human mage unleashes dark magic!" << endl;
    }
};

class HumanFactory : public CharacterFactory {
public:
     Warrior* createWarrior() override {
        return new HumanWarrior();
    }

    Archer* createArcher() override {
        return new HumanArcher();
    }

    Mage* createMage() override {
        return new HumanMage();
    }

};

void createParty(CharacterFactory& factory) {
    Warrior* warrior = factory.createWarrior();
    Archer* archer = factory.createArcher();
    Mage* mage = factory.createMage();

    warrior -> attack();
    archer->attack();
    mage->attack();

    delete warrior;
    delete archer;
    delete mage;
}

int main() {
    cout << "ELF PARTY" << endl;
    ElfFactory ef;
    createParty(ef);

    cout << "\nORC PARTY" << endl;
    OrcFactory of;
    createParty(of);

    cout << "\nHUMAN PARTY" << endl;
    HumanFactory hf;
    createParty(hf);
}

class Bird {
private: // all birds have these members
    int age;
    string name;

public:
    Bird(const string &name_in)
        : age(0), name(name_in) { 
        cout << "Bird ctor" << endl;
    }

    string getName() const { 
        return name; 
    }

    int getAge() { 
        return age; 
    }

    void haveBirthday() { 
        ++age; 
    }
    
    void talk() const {
        cout << "tweet" <, endl;
    }
};

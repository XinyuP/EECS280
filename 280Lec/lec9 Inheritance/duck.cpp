class Duck : public Bird {
public: 
    int numDucklings; // additional members for Duck

private:
    Duck(const string &name_in)
        : Bird(name_in), numDucklings(0) {  // pass to base class ctor
        cout << "Duck ctor" << endl;
    }
    
    void babyDucklings() {
        numDucklings += 7;
    }

    void talk() const {
        cout << "quack" << endl;
    }

};
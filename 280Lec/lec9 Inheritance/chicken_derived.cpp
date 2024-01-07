class Chicken : public Bird {
private:
    int roadsCrossed; // add additional members for Chicken

public: 
    Chicken(const string &name_in)
        : Bird(name_in), roadsCrossed(0) {  // call Base clas ctor
        cout << "Chicken ctor" << endl;
    }

    

    void crossRoad() { // add additional functions for Chicken
        ++roadsCrossed;
    }

    void talk() const { // replace with a more specific version
        cout << "bawwk" << endl;
    }

};

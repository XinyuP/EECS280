class Chicken {
private:
    int age;
    string name;
    int roadsCrossed;

public: 
    Chicken(const string &name_in, int age_in, int roadsCrossed_in)
        : age(age_in), name(name_in), roadsCrossed(roadsCrossed_in) { 
            assert(check_invariants());
            cout << "Chicken ctor" << endl;
        }

    Chicken(const string &name_in)
        : Chicken(name_in, 0, 0) { }

    const string & getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    void crossRoad() {
        ++roadsCrossed;
    }

    void talk() const {
        cout << "bawwk" << endl;
    }

private:
    check_invariants(){
        return age > 0 && roadsCrossed > 0;
    }


};
class Professor {
private: 
    string name; // a class from std internally representing text
    vector<string> students; // vector default ctor creates an empty vector // vector is a class from std representing lists or sequence of elements 
    Coffee favCoffee; 
    Triangle favTriangle; // Triangle default ctor creates a 1x1x1 triangle
    // all classes 


public:
    Professor(const string &name)
    : name(name), favCoffee(0,0,false) { 
        // favCoffee initialized using the coffee ctor with : 

    }

}


class Coffee {
private:
    int creams;
    int sugars;
    bool isDecaf;

public:
    Coffee(int creams, int sugars);
    Coffee(int creams, int sugars, bool isDecaf);

    void addCream();
    void addSugar();
    void print() const; 

}
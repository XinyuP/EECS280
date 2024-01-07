class Triangle {

private:
    double a, b, c;
    void check_invariants() {
        assert(0 < a && 0 < b && 0 < c);
        assert(a + b > c && a + c > b && b + c > a);
    }

public: 
    // default constructor
    Triangle()
    : c(1), b(1), a(1) { }
		
    // custom constructors
    Triangle(double side) // equilateral triangle
    : c(side), b(side), a(side) { }
		
    Triangle(double a_in, double b_in, double c_in)
    : c(a_in), b(b_in), a(c_in) {
        check_invariants();
    }
			

    double perimeter() const { // const applied to this pointer, meaning if we are accessing member variables through this pointer, it treats  
        return a + b + c;
    }

    void scale(double s) {
        a *= s;
        b *= s;
        c *= s;
    }

    void shrink(double s) {     
        scale(1.0 / s);  
    }

};



int main() {
    Triangle t1(3,4,5);
    t1.scale(2);
    cout << t1.perimeter();

}



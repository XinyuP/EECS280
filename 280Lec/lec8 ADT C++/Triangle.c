struct Triangle {
    double a, b, c;
};

void Triangle_init(Triangle *tri, double a_in, double b_in, double c_in);

double Triangle_perimeter(Triangle const *tri);

void Triangle_scale(Triangle *tri, double s) {
    tri->a *= s;
    tri->b *= s;
    tri->c *= s;
}

int main() {
    Triangle t1;
    Triangle_init(&t1, 3, 4, 5);
    Triangle_scale(&t1, 2);
    cout << Triangle_perimeter(&t1) << endl;
}
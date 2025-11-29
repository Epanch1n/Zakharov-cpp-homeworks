#include <iostream>
using namespace std;
class Rectangle {
private:
	double width;
	double height;
	double coeff;
public:
	Rectangle() {
		width = 0;
		height = 0;
		coeff = 1;
	}
	Rectangle(double _width, double _height, double _coeff) :width(_width), height(_height), coeff(_coeff) {

	}

	double getWidth() const {
		return width;
	}
	double getHeight() const {
		return height;
	}
	double getCoeff() const {
		return coeff;
	}

	void setWidth(double _width) {
		width = _width;
	}
	void setHeight(double _height) {
		height = _height;
	}
	void setCoeff(double _coeff) {
		coeff = _coeff;
	}

	double area() {
		return width * height;
	}
	void scale(double coeff) {
		setWidth(width * coeff);
		setWidth(height * coeff);
	}
	void Show() {
		cout << "Width: " << width << endl;
		cout << "Height: " << height << endl;
		cout << "Square: " << area() << endl;
	}
};
int main() {
	Rectangle rect(4.0, 3.0,1);
	rect.Show();
	cout << endl;

	rect.setWidth(5.5);
	rect.setHeight(2.5);

	cout << "New width: " << rect.getWidth() << endl;
	cout << "New height: " << rect.getHeight() << endl;
	cout << endl;

	return 0;
}
#include <iostream>
using namespace std;
class Rectangle {
private:
	double width;
	double height;
public:
	Rectangle() {
		width = 0;
		height = 0;
	}
	Rectangle(double _width, double _height):width(_width), height(_height) {

	}

	double getWidth() const {
		return width;
	}
	double getHeight() const {
		return height;
	}

	void setWidth(double _width) {
		width = _width;
	}
	void setHeight(double _height) {
		height = _height;
	}

	void Show() {
		cout << "Ширина: " << width << endl;
		cout << "Высота: " << height << endl;
	}
};
int main() {
	Rectangle rect(4.0, 3.0);
	rect.Show();
	cout << endl;

	rect.setWidth(5.5);
	rect.setHeight(2.5);

	cout << "New width: " << rect.getWidth() << endl;
	cout << "New height: " << rect.getHeight() << endl;
	cout << endl;

	return 0;
}
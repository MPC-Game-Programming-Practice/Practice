#include <iostream>
using namespace std;

// 以下に、和とスカラー倍の定義されたベクトルを表す構造体 Vector を定義する

// Vector構造体のメンバ変数を書く
struct Vector {
	double x;
	double y;
	Vector(double argx, double argy) {
		x = argx;
		y = argy;
	}
	Vector multiply(double a) {
		double argx = a * x;
		double argy = a * y;
		Vector v(argx, argy);
		return v;
	}
	Vector plus(Vector v) {
		double argx = v.x + x;
		double argy = v.y + y;
		Vector nv(argx, argy);
		return nv;
	}
	void print() {
		cout << x << " " << y << endl;
		return;
	}
};



int main() {
	// 入力を受け取る
	double x0, y0, x1, y1, a;
	cin >> x0 >> y0 >> x1 >> y1 >> a;

	// Vector構造体のオブジェクトを宣言
	Vector v0(x0, y0), v1(x1, y1);

	// v0、v1を表示
	cout << "v0" << endl;
	v0.print();
	cout << "v1" << endl;
	v1.print();

	Vector v2 = v0.multiply(a);
	cout << "v2" << endl;
	v2.print();

	Vector v3 = v0.plus(v1);
	cout << "v3" << endl;
	v3.print();
}

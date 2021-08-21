#include <iostream>
using namespace std;

// 以下に、和とスカラー倍の定義されたベクトルを表す構造体 Vector を定義する
struct Vector {
	// Vector構造体のメンバ変数を書く
	//   double x x座標を表す
	//   double y y座標を表す
	double x;
	double y;
	// コンストラクタの定義を書く
	//   引数：double argX, double argY (それぞれx座標の値、y座標の値を表す)
	//   コンストラクタの説明：メンバー変数xにargXを代入し、メンバー変数yにargYを代入する。
	Vector(double argX, double argY) {
		x = argX;
		y = argY;
	}

	// メンバ関数 multiply の定義を書く
	//   関数名：multiply
	//   引数：double a
	//   返り値：Vector
	//   関数の説明：
	//   新たにVector型の構造体を生成して返す。
	//   ただし、生成する構造体のx座標とy座標は以下の通り。
	//   x座標：元のメンバ変数xと引数で受け取った実数aの積
	//   y座標：元のメンバ変数yと引数で受け取った実数aの積
	Vector multiply(double a) {
		return Vector(x * a, y * a);
	}

	// メンバ関数 plus の定義を書く
	//   関数名：plus
	//   引数：Vector v
	//   返り値：Vector
	//   関数の説明：
	//   新たにVector型の構造体を生成して返す。
	//   ただし、生成する構造体のx座標とy座標は以下の値となるようにする。
	//   x座標：元のメンバ変数xと引数で受け取ったベクトルvのメンバ変数xの和
	//   y座標：元のメンバ変数yと引数で受け取ったベクトルvのメンバ変数yの和
	Vector plus(Vector v) {
		return Vector(x + v.x, y + v.y);
	}

	//メンバ関数数 print の定義を書く
	//　関数名：print
	//　引数：なし
	//　返り値：なし
	//　関数の説明：この構造体が持つメンバ変数xとyを空白区切りで出力し、最後に改行する。
	void print() {
		cout << x << " " << y << endl;
	}
};
// -------------------
// ここから先は変更しない
// -------------------

int main() {
	// 入力を受け取る
	double x0, y0, x1, y1, a;
	cin >> x0 >> y0 >> x1 >> y1 >> a;

	// Vector構造体のオブジェクトを宣言
	Vector v0(x0, y0);
	Vector v1(x1, y1);

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


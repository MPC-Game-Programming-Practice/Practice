# include <Siv3D.hpp>

void Main()
{
	Circle circle(400, 300, 100);
	Circle child1(300, 300, 100);
	Circle child2(500, 300, 100);
	bool flag=false;
	while (System::Update())
	{
		if (circle.leftClicked()) {
			flag = true;
		}

		if (flag) {
			child1.draw(Palette::Lightgreen).drawFrame();
			child2.draw(Palette::Lightgreen).drawFrame();
		}
		else {
			circle.draw(Palette::Blue).drawFrame();
		}
	}
}

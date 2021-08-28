# include <Siv3D.hpp>

void Main()
{
	Array<Circle> circles;
	circles << Circle(Scene::Center(), 100);
	while (System::Update())
	{
		for (auto circle : circles) {
			if (circle.leftClicked()) {
				circles.remove(circle);
				double rad = Random(180_deg);
				circles << Circle(OffsetCircular(circle.center, circle.r / Sqrt(2), rad), circle.r / Sqrt(2));
				circles << Circle(OffsetCircular(circle.center, circle.r / Sqrt(2), rad + 180_deg), circle.r / Sqrt(2));
				break;
			}
		}
		for (auto it = circles.end();it!=circles.begin();) {
			it--;
			it->draw(Palette::Blue).drawFrame();
		}
	}
}

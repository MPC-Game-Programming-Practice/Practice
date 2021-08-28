# include <Siv3D.hpp>

void Main()
{
	Array<Circle> circles;
	circles << Circle(Scene::Center(), 50);
	while (System::Update())
	{
		for (auto circle : circles) {
			if (circle.leftClicked()) {
				circles.remove(circle);
				circles << Circle(circle.center.x + circle.r, circle.y, circle.r);
				circles << Circle(circle.center.x - circle.r, circle.y, circle.r);
				break;
			}
		}
		for (auto it = circles.end();it!=circles.begin();) {
			it--;
			it->draw(Palette::Blue).drawFrame();
		}
	}
}

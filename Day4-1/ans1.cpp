
# include <Siv3D.hpp>

void Main()
{
	const Texture Lock(Icon(0xf023, 80));
		while (System::Update())
	{
			Lock.drawAt(100,300);
			Lock.scaled(0.5).drawAt(200, 300);
			Lock.scaled(2.0).rotated(Scene::Time() * 90_deg).drawAt(400,300);
	}
}

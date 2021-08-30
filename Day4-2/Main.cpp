# include <Siv3D.hpp>

void Main()
{
	Scene::SetBackground(ColorF(0.8, 0.9, 1.0));

	const Font font(25, Typeface::Bold);

	const Texture dog(Emoji(U"🐶"));
	const Texture pig(Emoji(U"🐷"));
	const Texture fox(Emoji(U"🦊"));

	constexpr Point dogPos(100, 100);
	constexpr Point pigPos(100, 300);
	constexpr Point foxPos(100, 500);

	const String dogTalk = U"犬：豚は嘘をついていない";
	const String pigTalk = U"豚：犬は嘘をついていない";
	const String foxTalk = U"狐：この中の一人だけが嘘をついている";

	const Rect dogArea = dog.regionAt(dogPos);
	const Rect pigArea = pig.regionAt(pigPos);
	const Rect foxArea = fox.regionAt(foxPos);
	
	bool dogTalking = false;
	bool pigTalking = false;
	bool foxTalking = false;

	while (System::Update())
	{
		dog.drawAt(dogPos);
		pig.drawAt(pigPos);
		fox.drawAt(foxPos);

		if (dogArea.mouseOver() || pigArea.mouseOver() || foxArea.mouseOver()) {
			Cursor::RequestStyle(CursorStyle::Hand);
		}

		if (dogArea.leftClicked()) {
			dogTalking = !dogTalking;
		}
		if (pigArea.leftClicked()) {
			pigTalking = !pigTalking;
		}
		if (foxArea.leftClicked()) {
			foxTalking = !foxTalking;
		}

		if (dogTalking) {
			font(dogTalk).draw(dogPos.x + 100, dogPos.y, Palette::Black).drawFrame(1, Palette::Black);
		}
		if (pigTalking) {
			font(pigTalk).draw(pigPos.x + 100, pigPos.y, Palette::Black).drawFrame(1, Palette::Black);
		}
		if (foxTalking) {
			font(foxTalk).draw(foxPos.x + 100, foxPos.y, Palette::Black).drawFrame(1, Palette::Black);
		}

	}
}

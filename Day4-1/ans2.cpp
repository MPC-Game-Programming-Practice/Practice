
# include <Siv3D.hpp>

void Main()
{
  //自分の画像のパスを入力する
	const Texture MPC(U"C:/Users/SeiyaT/source/repos/OpenSiv3D(0.4.3)1/MPC.png", TextureDesc::Mipped);
	while (System::Update()) {
		const double scale = 0.02 + Periodic::Triangle0_1(10s) * 0.4;
		MPC.scaled(scale).drawAt(200, 300);
		MPC.scaled(scale).rotated(Scene::Time() * 90_deg).drawAt(400, 300);
	}
}

# include <Siv3D.hpp>

void Main()
{
    Scene::SetBackground(Color(255, 255, 255));
    const Texture discord(Icon(0xf392,80));

    while (System::Update())
    {
        // 2 倍に拡大して描画
        discord.scaled(2.0).drawAt(200, 300,Color(114,137,218));

        // 1 倍で描画
        discord.scaled(1.5).drawAt(400, 300, Color(114, 137, 218));

        // 半分のサイズに縮小したもの中心を軸に回転させて描画
        discord.scaled(0.5).rotated(Scene::Time()*90_deg).drawAt(600, 300, Color(114, 137, 218));
    }
}

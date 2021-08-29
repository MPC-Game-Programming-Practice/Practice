# include <Siv3D.hpp>

void Main()
{
    Scene::SetBackground(ColorF(0.8, 0.9, 1.0));

    const Texture sample(U"C:/Users/SeiyaT/source/repos/OpenSiv3D(0.4.3)/OpenSiv3D(0.4.3)/Image/Sample.png",  TextureDesc::Mipped);
    //Pathは各自で適するものを用いる。

    while (System::Update())
    {
        // 2 倍に拡大して描画
        sample.resized(160).drawAt(200, 300);

        // 1 倍で描画
        sample.resized(80).drawAt(400, 300);

        // 半分のサイズに縮小したもの中心を軸に回転させて描画
        sample.resized(40).rotated(Scene::Time()*90_deg).drawAt(600, 300);
    }
}

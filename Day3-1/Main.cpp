# include <Siv3D.hpp>

void Main()
{
    Scene::SetBackground(Palette::White);

    Vec2 position = Scene::Center();// 円の位置をウィンドウの真ん中に設定する．
    
    while (System::Update())
    {
        double deltaTime = Scene::DeltaTime();// 直前のフレームからの経過時間 (秒)
        double velocity = 50;// 円が移動するときの速さ (ピクセル/秒)
        double move = velocity * deltaTime;// 円の移動距離 (ピクセル)
        
        // マウスカーソルがウィンドウの左側ある場合
        if (Cursor::Pos().x < Scene::Center().x)
        {
            // 円の位置を左に移動させる
            position.moveBy(-move, 0);
        }
        // マウスカーソルがウィンドウの右側ある場合
        else
        {
            // 円の位置を右に移動させる
            position.moveBy(move, 0);
        }

        // 円を描画する
        Circle(position, 100).draw(Palette::Tomato);
    }
}

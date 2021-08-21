# include <Siv3D.hpp>

void Main()
{
    while (System::Update())
    {
        // 正方形
        Rect(100, 200, 80).draw(Palette::Orange);

        // 三角形
        Triangle(400, 100, 80, 15_deg).draw(Palette::Seagreen);
        
        // 四角形
        Quad(Vec2(300, 400), Vec2(500, 100), Vec2(600, 200), Vec2(500, 500)).draw(Palette::Skyblue);
        
        // 楕円
        Ellipse(600, 400, 50, 150).draw(Palette::Azure);
        
        // 角丸長方形
        Rect(300, 200, 80).rounded(40).draw(Palette::Tomato);
        
        // 3 次ベジェ曲線
        Bezier3(Vec2(300, 400), Vec2(400, 400), Vec2(400, 100), Vec2(500, 100))
            .draw(4, Palette::Greenyellow);

    }
}

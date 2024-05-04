#include <bits/stdc++.h>

class Point
{
  private:
    int x;
    int y;
  public:
    Point(int=0,int=0);
};

class BattleShip
{
  private:
    string name;
    Punkt start;
    Punkt end;
  public:
    BattleShip(string = "brak", Punkt={0,0}, Punkt{0,1});
    void load_from_file();
    void load_default();
};

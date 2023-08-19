#ifndef HQ_H
#define HQ_H
#include<vector>
#include<raylib.h>
void mapmake(int seed,int length);
std::vector<int> getpos(int x,int size);
void Tc(Image &img,int x,int y);
bool IsMouseTouchActor(Image &img,int x,int y);
int hy(int a,int b);
bool IsMouseTouchT(Texture &img,int x,int y);
#endif

//此处代码为角色碰撞监测系统，但是部分代码是用于开发者开发使用
//总之，这是一个侦测攻击的文件   
#include"hq.h"
#include<raylib.h>
#include<cmath>
#include<iostream>
bool IsMouseTouchImg(Image &img,int x,int y){
	if(CheckCollisionPointRec((Vector2){GetMouseX(),GetMouseY()},(Rectangle){x,y,img.width,img.height})){
		return true;
	}else{
		return false;
	}
}
bool IsMouseTouchT(Texture &img,int x,int y){
	if(CheckCollisionPointRec((Vector2){GetMouseX(),GetMouseY()},(Rectangle){x,y,img.width,img.height})){
		return true;
	}else{
		return false;
	}
}
bool IsMouseTouchActor(Image &img,int x,int y){
	if(CheckCollisionPointRec((Vector2){GetMouseX(),GetMouseY()},(Rectangle){x,y,img.width,img.height})){
		if(GetImageColor(img,GetMouseX()-x,GetMouseY()-y).a!=0)return true;
		else return false;
	}else{
		return false;
	}
}
void Tc(Image &img,int x,int y){
	if(IsMouseTouchImg(img,x,y)){
		printf("x+=%d,y+=%d",GetMouseX()-x,GetMouseY()-y);
	}
}
int hy(int a,int b){
 	return round(sqrt((a*a+b*b)));
}
//void BloodBar(Rectangle rec,short blood,int min,int max,Color color){}

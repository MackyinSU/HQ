/*
  激战华强-游戏源代码
  使用 MinGW-w64 GCC 11.2.0 64-bit编译
  Made by Macky（程序编写），HJQ（材质制作），Hidrag（程序编写）
  激战华强游戏开源许可证
  您对“软件”的复制、使用、修改及分发受本许可证的如下条款的约束：
  
  0. 定义
  
  “软件”是指由“贡献”构成的许可在“本许可证”下的程序和相关文档的集合。
  
  “贡献”是指由任一“贡献者”许可在“本许可证”下的受版权法保护的作品。
  
  “贡献者”是指将受版权法保护的作品许可在“本许可证”下的自然人或“法人实体”。
  
  “法人实体”是指提交贡献的机构及其“关联实体”。
  
  “关联实体”是指，对“本许可证”下的行为方而言，控制、受控制或与其共同受控制的机构，此处的控制是指有受控方或共同受控方至少50%直接或间接的投票权、资金或其他有价证券。
  
  1. 授予版权许可
  
  每个“贡献者”根据“本许可证”授予您永久性的、全球性的、免费的、非独占的、不可撤销的版权许可，您可以在非盈利的前提下复制、使用、修改、分发其“贡献”，不论修改与否。如果用作盈利，软件作者和“贡献者”有保留追究责任的权利
  
  2. 授予专利许可
  
  每个“贡献者”根据“本许可证”授予您永久性的、全球性的、免费的、非独占的、不可撤销的（根据本条规定撤销除外）专利许可，供您制造、委托制造、使用、许诺销售、销售、进口其“贡献”或以其他方式转移其“贡献”。前述专利许可仅限于“贡献者”现在或将来拥有或控制的其“贡献”本身或其“贡献”与许可“贡献”时的“软件”结合而将必然会侵犯的专利权利要求，不包括对“贡献”的修改或包含“贡献”的其他结合。如果您或您的“关联实体”直接或间接地，就“软件”或其中的“贡献”对任何人发起专利侵权诉讼（包括反诉或交叉诉讼）或其他专利维权行动，指控其侵犯专利权，则“本许可证”授予您对“软件”的专利许可自您提起诉讼或发起维权行动之日终止。
  
  3. 无商标许可
  
  “本许可证”不提供对“贡献者”的商品名称、商标、服务标志或产品名称的商标许可，但您为满足第4条规定的声明义务而必须使用除外。
  
  4. 分发限制
  
  您可以在任何媒介中将“软件”以源程序形式或可执行形式重新分发，不论修改与否，但您必须向接收者提供“本许可证”的副本，并保留“软件”中的版权、商标、专利及免责声明。
  
  5. 免责声明与责任限制
  
  “软件”及其中的“贡献”在提供时不带任何明示或默示的担保。在任何情况下，“贡献者”或版权所有者不对任何人因使用“软件”或其中的“贡献”而引发的任何直接或间接损失以及引发的法律后果承担责任，不论因何种原因导致或者基于何种法律理论，即使其曾被建议有此种损失的可能性。 
  
  6. 语言
  “本许可证”以中英文双语表述，中英文版本具有同等法律效力。如果中英文版本存在任何冲突不一致，以中文版为准。
  
  上面文字为中文版本，以下是英文版本
  
  The OPEN-SOURCE LICENSE of the game "Fierce Battle of HuaQiang"
  
  Your copying, use, modification, and distribution of the Software are subject to the following terms of this license:
  
  0. Definition
  
  "Software" refers to the collection of programs and related documents licensed under this License consisting of "Contributions".
  
  Contribution "refers to a work licensed by any" contributor "under this license and protected by copyright law.
  
  "Contributor" refers to a natural person or "legal entity" who licenses a work protected by copyright law under this license.
  
  "Legal entity" refers to the institution and its "affiliated entities" that submit contributions.
  
  Related entity "refers to an institution controlled, controlled, or jointly controlled by the parties under this license, where control refers to having at least 50% of the direct or indirect voting rights, funds, or other securities of the controlled party or jointly controlled party.
  
  1. Grant Copyright License
  
  Each Contributor grants you a permanent, global, free, non-exclusive, and irrevocable copyright license under this License, allowing you to copy, use, modify, and distribute their Contributions without profit, whether modified or not. If used for profit, software authors and "contributors" reserve the right to pursue responsibility
  
  2. Grant Patent License
  
  Each Contributor grants you a permanent, global, free, non-exclusive, and irrevocable (except for those revoked in accordance with this section) patent license under this License to manufacture, commission, use, promise to sell, sell, import, or otherwise transfer their Contributions. The aforementioned patent license is limited to patent claims that the "contributor" now or in the future owns or controls its "contribution" itself or that will inevitably be infringed by the combination of its "contribution" and the "software" at the time of licensing the "contribution", and does not include modifications to the "contribution" or other combinations containing the "contribution". If you or your "affiliated entities" directly or indirectly initiate patent infringement litigation (including counterclaims or cross litigation) or other patent protection actions against anyone regarding the "software" or its "contributions", accusing them of infringing patent rights, then the patent license granted to you by "this license" shall terminate from the date of filing the lawsuit or initiating the protection action.
  
  3. No trademark license
  
  This license does not provide a trademark license for the product name, trademark, service mark, or product name of the Contributor, unless you are required to use it in order to fulfill your declaration obligations under Article 4.
  
  4. Distribution Restrictions
  
  You may redistribute the Software in source program or executable form in any medium, whether modified or not, but you must provide a copy of this License to the recipient and retain the copyrights, trademarks, patents, and disclaimers in the Software.
  
  5. Disclaimer and Limitation of Liability
  
  The software and its contributions are provided without any express or implied warranties.
  
  6. Language
  
  This license is expressed in both Chinese and English, and the Chinese and English versions have equal legal effect. If there is any conflict or inconsistency between the Chinese and English versions, the Chinese version shall prevail.
 */ 
#define RAYGUI_IMPLEMENTATION
#define GROUND 600
#define JF -30.0f//jumpforce  
#define RI false
#define LE true     
#define BW 80
#define HQ_HEI 335
#define KNIFE 3 
#define AIR 0
#define PX ((int)(GetScreenWidth()/2)-110)
#define GetMobY(map_mobx,px) (GROUND+BW*(submap[(floor(GetScreenWidth()/BW)/2)]-submap[floor((PX+BW*(map_mobx-px)))/BW]))
#define KILL_AURA 350
#define MAPSIZE 1500  
#include<iostream>
#include<raygui.h>
#include"hq.h"
#include<fstream>
#include<ctime>
#include<raylib.h> 
#include<random>
#include<thread>
using namespace std;
bool Isjump=false;
string died_reason;
vector<int> submap;
struct Speed{
	float x;
	float y;
};
class Timer{    
	int starttime;	
public:
	bool cantime=true;
	void start(){
		if(cantime)starttime=clock();
	}
	bool IsTimeUp(const int ms){
		cantime=false;
		int EndTime=clock();
		if((EndTime-starttime)>=ms){
			cantime=true;
			return true;
		}else{
			return false;
		} 
	}
};
class SItem{//static item,such as drops
	Timer timer;
public:
	int x;
	int y;
	int id;
	bool Isdestory=false;//true is delete this SItem
	Texture txt;
	short count;
	SItem(int posx,int idin,short countin){//posx is mapX
		id=idin;
		count=countin;
		x=posx;
	}
	SItem(int idin,short countin){
		id=idin;
		count=countin;
	}
	void Update(){
		timer.start();
		if(timer.IsTimeUp(300000))Isdestory=true;
		switch(id){
		case 0:
			txt=LoadTexture("hq/item/jiu.png");
			break;
		case 1:
			txt=LoadTexture("hq/item/mb.png");
			break;
		case 2:
			txt=LoadTexture("hq/item/jr.png");
			break;
		case 3:
			txt=LoadTexture("hq/item/knife.png"); 
			break;
		}
	}
};
vector<SItem> sitem;
class Item{
public:
	int x=0;//位移量x
	int y=0;//位移量y
	Speed speed;
	int id;
	Texture txt;
	Item(int idin,int yf){
		id=idin;
		speed.y=yf;    //y的初速度
	}
	void Update(){
		switch(id){
		case 0:
			txt=LoadTexture("hq/item/jiu.png");
			break;
		case 1:
			txt=LoadTexture("hq/item/lq.png");
			break;
		case 2:
			txt=LoadTexture("hq/item/egg.png");
			break;
		}
	}
	
};
class HuaQiang{
	short copyblood=20000;
	Timer forhurt;
	Timer forbuff;
public:
	int x;
	int y;
	bool Forward=false;//true is left,false is right
	Speed speed;
	short zt=1 ;//to set the cartoon of HuaQiang
	float jumpForce = JF;
	Rectangle TouchBox;
	short iteminhand;
	bool Isattack;
	vector<SItem> item;
	short blood;
	Color color;
	short buff;
	void hurt(){
		TouchBox={PX+110,y+42,130,294};
		if(copyblood>blood){
			color=RED;
			copyblood=blood;
		}
		if(buff==1){
			forbuff.start();
			if(forbuff.IsTimeUp(3000))buff=0;
			DrawRectangle(0,0,GetScreenWidth(),GetScreenHeight(),(Color){ 0, 228, 48, 114 });
		}
		if(blood>20000)blood=20000;
		forhurt.start();
		if(forhurt.IsTimeUp(400)){
			if(buff==0){
				color=WHITE;
			}else{
				color=GREEN;
			}
		}
	}
	HuaQiang(){
		buff=0;
		color=WHITE;
		item.push_back(SItem(3,1));
		blood=20000;
	}
};
class Actor{
public:
	Image* ptr=NULL; // 指向图片数组的指针
	//	float frameTime;
	Timer timer;
	Timer forhurt;
	bool Forward;
	Color color;
	short int blood;
	int currentFrame;
	short zt=0;
	int x=0;
	bool Isattack;
	/*Actor(float time, Image* imageFrames) {
	  frameTime = time;
	  currentFrame = 0;
	  frames = imageFrames; // 存储图片数组的指针
	  }*/   
	Image Frame;
	Texture txt;
	void Draw(){
		Frame = ImageCopy(*(ptr+currentFrame)); // 创建图像副本
		if(Forward==RI)ImageFlipHorizontal(&Frame);
		txt=LoadTextureFromImage(Frame);
		UnloadImage(Frame);
	}
	inline void Update() {
		currentFrame++;
		if (currentFrame >= 10){
			currentFrame = 0;
		}     
	}
};
class Jiege:public Actor{
	bool CanChange=false;
public:
	Jiege(int posx){
		Isattack=false;
		x=posx;
		blood=120;
		color=WHITE;
		zt=0;
	}
	void hurt(int jgx,HuaQiang &p){
		switch(p.iteminhand){
			case KNIFE:    
			if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)&&hy((p.y-GetMobY(x,p.x)+350),(jgx-PX))<=KILL_AURA){
				if((p.Forward==LE&&jgx<=PX)||(p.Forward==RI&&jgx>=PX)){
					color=RED;
					blood-=(Isjump?100:80);
					if(p.x>=x)x-=2;
					else x+=2;
				}
			}
			forhurt.start();
			if(forhurt.IsTimeUp(500))color=WHITE;
			break; 
		}
	}
	void rwkk(int jgx,HuaQiang &p){//let me see♂
		if(jgx<=PX)Forward=RI;
		else Forward=LE;
		timer.start();
		if(timer.IsTimeUp(2100)){
			currentFrame=0;
			CanChange=true;
			zt=0;
		}
		if((p.x-x)>=GetRandomValue(4,6))x+=1;//follow the player
		if(Isattack){
			//	if (!IsSoundPlaying(srwkk))
			//	PlaySound(srwkk);
			//	printf("zt:%d Isattack:%d\n",zt,Isattack);	
			timer.start();
			if(timer.IsTimeUp(2000)){
				Isattack=false;
				CanChange=false;
			} 
			DrawLineEx(Vector2{jgx+156,GetMobY(x,p.x)-350+132},Vector2{PX+165,p.y+138},10,RED);
			DrawLineEx(Vector2{jgx+177,GetMobY(x,p.x)-350+138},Vector2{PX+165,p.y+138},10,RED);
			DrawCircleGradient(jgx+156,GetMobY(x,p.x)-350+132,12.5,WHITE,RED);
			DrawCircleGradient(jgx+177,GetMobY(x,p.x)-350+138,12.5,WHITE,RED);
			currentFrame=10;
			Forward=LE;
			p.blood-=10;
			died_reason="登dua郎！";
			//	if (!IsSoundPlaying(srwkk))PlaySound(srwkk);
		}else{
			if(!CanChange)zt=1;
			else if(currentFrame>=9)Isattack=true;
			//	if (!IsSoundPlaying(qjr))PlaySound(qjr);
		} 
	}
};
class Awei:public Actor{
	int L=150;
	int r=0;
public:
	Awei(int posx){
		Isattack=false;
		x=posx;
		blood=150;
		color=WHITE;
		zt=0;
	}
	vector<Item> item; 
	void hurt(int awx,HuaQiang &p){
		switch(p.iteminhand){
		case KNIFE:
			if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)&&hy((p.y-GetMobY(x,p.x)+350),(awx-PX))<=KILL_AURA){
				if((p.Forward==LE&&awx<=PX)||(p.Forward==RI&&awx>=PX)){
					color=RED;
					blood-=(Isjump?100:80);
					if(p.x>=x)x-=2;
					else x+=2;
				}
			}
			forhurt.start();
			if(forhurt.IsTimeUp(500))color=WHITE;
			break; 
		}
	}
	void Attack(Jiege &j,int awx,HuaQiang &p){
		if((p.x-x)>=GetRandomValue(7,9))x+=1;//follow the player
		//----
		if(awx<=PX){
			Forward=RI; 
		}else{
			Forward=LE;
		}
		timer.start();
		if(timer.IsTimeUp(2000)){//stop time
			Isattack=true;
		}
		if(Isattack){
			timer.start();
			if(j.blood>0){
				zt=0;  
				timer.start();
				if(timer.IsTimeUp(1500)){//抛掷冷却时间
					item.push_back(Item(0,L/2));
				}
				for(int i=0;i<item.size();i++){
					item[i].y+=item[i].speed.y;
					if(item[i].speed.y>=1){
						item[i].speed.y/=2;
					}else{
						if(item[i].speed.y>=0)item[i].speed.y*=-1;
						item[i].speed.y*=2;
					}
					item[i].speed.x=(80*(abs(p.x-x)))/10;
					if(Forward==LE){
						item[i].x-=item[i].speed.x;
					}else{
						item[i].x+=item[i].speed.x;
						item[i].x+=19;
					}
					//	cout<<"item:"<<item.size()<<'\t'<<item[i].speed.y<<'\n'; 
				}
			}else{
				zt=1;
				r+=100;
				DrawCircleGradient(awx+175,GetMobY(x,p.x)-350+40,r,BLANK,BLUE);
				if(r>=GetScreenWidth())r=0;
				if(CheckCollisionCircleRec(Vector2{awx+175,GetMobY(x,p.x)-350+40},r,p.TouchBox)){
					p.blood-=5;
					died_reason="阿伟：逊呐！";
				}
			}
			for(int i=0;i<item.size();i++){
				if((GetMobY(x,p.x)-350-item[i].y)<=GetScreenHeight()){
					item[i].Update();
					DrawTexture(item[i].txt,awx+item[i].x,GetMobY(x,p.x)-350-item[i].y+50,WHITE); 
					if(CheckCollisionRecs(p.TouchBox,Rectangle{awx+item[i].x,GetMobY(x,p.x)-350-item[i].y+50,item[i].txt.width,item[i].txt.width})){
						item.erase(item.begin()+i);
						p.blood-=150;
						p.buff=1;
						died_reason="阿伟：逊呐！";
					} 
				}
				if((GetMobY(x,p.x)-350-item[i].y)>=GetScreenHeight()){   
					item.erase(item.begin()+i);
				}
			}
		}    
	}
};    
class Cxk:public Actor{
	void moving(int hq_x, int speed) {
		int distance = GetRandomValue(hq_x+3,hq_x-3) - x;
		if (distance > 0) {
			x += speed;
		}
		if (distance < 0) {
			x -= speed;
		}
		if(abs(distance)>=20)x=hq_x-5;
	}
public:
	vector<Item> item;
	int y;
	bool attack;
	Timer t;
	Cxk(int posx, int posy){
		Isattack=false;
		x=posx;
		y=posy;
		blood=200;
		color=WHITE;
		zt=0;
	}
	void Attack(int sx,HuaQiang &p){
		switch(p.iteminhand){
		case KNIFE:
			if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)&&hy((p.y-GetMobY(x,p.x)+350),(sx-PX))<=KILL_AURA){
				if((p.Forward==LE&&sx<=PX)||(p.Forward==RI&&sx>=PX)){
					color=RED;
					blood-=(Isjump?100:80);
				}
			}
			forhurt.start();
			if(forhurt.IsTimeUp(500))color=WHITE;
			break; 
		}
		if(sx<=PX){
			Forward=LE; 
		}else{
			Forward=RI;
		}
		t.start();
		if(t.IsTimeUp(1500)){//stop time
			if(GetRandomValue(0,1)==0){
				attack=true;
			}else{
				attack=false;
			}
			Isattack=true;
			currentFrame=0;
		}
		if(Isattack){
			if(attack){
				if(y>=-40)y-=60;
				zt=1;
				moving(p.x,3);
				timer.start();
				if(timer.IsTimeUp(400)){
					item.push_back(Item(2,50));
				}
				for(int i=0;i<item.size();i++){
					if(item[i].id==1)item.erase(item.begin()+i);    
					item[i].y-=item[i].speed.y;
				}
			}else{
				zt=0;
				if(y<=(GetMobY(x,p.x)-350))y+=10;
				timer.start();      
				if(timer.IsTimeUp(400)){
					item.push_back(Item(1,floor((y-p.y)/5)));
				}
				for(int i=0;i<item.size();i++){
					if(item[i].id==2)item.erase(item.begin()+i);
					item[i].speed.x=(80*(abs(p.x-x)))/5; 
					if(Forward==LE)item[i].x+=item[i].speed.x;
					else item[i].x-=item[i].speed.x;
					item[i].y+=item[i].speed.y;
				}
			}	
			for(int i=0;i<item.size();i++){
				if((GetMobY(x,p.x)-350-item[i].y)<=GetScreenHeight()){
					item[i].Update();
					if(attack)DrawTexture(item[i].txt,sx+item[i].x+175,y-item[i].y+50,WHITE); 
					else DrawTexture(item[i].txt,sx+item[i].x+175,GetMobY(x,p.x)-350-item[i].y+50,WHITE);
					if(CheckCollisionRecs(p.TouchBox,Rectangle{sx+item[i].x+175,y- item[i].y+50,item[i].txt.width,item[i].txt.width})){
						item.erase(item.begin()+i);
						if(!attack){
							if(Forward==LE)p.x+=1;
							else p.x-=1;
							p.blood-=350;    
							died_reason="寄你抬没";
						}else{
							p.blood-=200;
							died_reason="寄你抬没";
						}
						
					} 
				}else{   
					item.erase(item.begin()+i);
				}
			}
		}
	}
};
void make(bool Isread){
	Isread=false;
	if(Isread){
		//read save
	}else{
		//make save
		default_random_engine e;
		mapmake(e(),MAPSIZE);
	}  
}
int main(){
	InitAudioDevice();
	short MusicVolume=50;
	Music jntm=LoadMusicStream("hq/music/jntm.wav");
	bool Pause=false;
	SetRandomSeed(time(NULL));
	unsigned short posofgb=1;
	unsigned short GameState=0;//the state of game,0 is the start meun
	SetConfigFlags(FLAG_WINDOW_RESIZABLE);
	InitWindow(1200,800,"激战华强");
	SetTargetFPS(60);
	SetTraceLogLevel(LOG_ERROR);
	SetConfigFlags(FLAG_WINDOW_TRANSPARENT);
	int CodePointsCount;
	int *CodePoints=LoadCodepoints("你赢了主菜单开始游戏华强激战正在返回加载回血中再逝一次1234567890醉了音量回血寄你抬没登dua郎！阿伟：逊呐  ……",&CodePointsCount);
	Font font=LoadFontEx("hq/simhei.ttf",64,CodePoints,CodePointsCount);
	UnloadCodepoints(CodePoints);
	GuiSetFont(font);
	GuiSetStyle(DEFAULT,TEXT_SIZE,50);
	HuaQiang player1;
	//character list
	vector<Cxk> cxk;
	vector<Jiege> jiege;
	vector<Awei> awei;
	player1.x=0;
	player1.y=GROUND-HQ_HEI;
	player1.speed.x=0;
	player1.speed.y=0;
	player1.Forward=true;
	player1.iteminhand=KNIFE;
	short num;//Get the key pressed number
	short frame=0;
	Image hqwalk[11];
	Image hqstand[11];        
	Image hqstandwithknife[11];
	Image hqcdzl[11];//walk with knife
	Image hqcdhk[11];
	Image jg[11];
	Image tsk[11];
	Image jgdmb[11];
	Image awrbx[11];
	Image awnh[11];
	Image kqs[11];
	for(int i=0;i<=10;i++){
		hqwalk[i]=LoadImage(TextFormat("hq/hqwalk/hqzl (%d).png",i));//walk
		hqstand[i]=LoadImage(TextFormat("hq/hqstand/hqdj (%d).png",i));//stand
		hqstandwithknife[i]=LoadImage(TextFormat("hq/hqcddj/hqcddj(%d).png",i));//stand with knife
		hqcdzl[i]=LoadImage(TextFormat("hq/hqcdzl/hqcdzl(%d).png",i));//walk with knife
		hqcdhk[i]=LoadImage(TextFormat("hq/hqcdhk/hqcdhk(%d).png",i));//attrack
		jg[i]=LoadImage(TextFormat("hq/jcfy/jg(%d).png",i));
		jgdmb[i]=LoadImage(TextFormat("hq/jgdmb/jgdmb(%d).png",i));
		tsk[i]=LoadImage(TextFormat("hq/tsk/tsk(%d).png",i));
		awrbx[i]=LoadImage(TextFormat("hq/awrbx/awrbx(%d).png",i));
		awnh[i]=LoadImage(TextFormat("hq/awnh/awnh(%d).png",i));
		kqs[i]=LoadImage(TextFormat("hq/kqs/kqs(%d).png",i));
	}
	Image *ptr;
	Image I1;
	Timer foreat;
	Image bgimg=LoadImage("hq/ico/jzhq.png");
	Image winico=LoadImage("hq/ico/jzhqico.png");
	SetWindowIcon(winico);
	UnloadImage(winico);
	//  Music jntm=LoadMusicStream("hq/music/jntm.mp3");
	Sound srwkk=LoadSound("hq/music/rwkk.mp3");//让我看看！
	Sound awdnh=LoadSound("hq/music/nh.mp3");//阿伟♂呐喊
	Sound rbx=LoadSound("hq/music/rbx.mp3");//辱彬逊
	Sound qjr=LoadSound("hq/music/qjr.mp3");//帮助一些翘家人
	PlayMusicStream(jntm);
	while(!WindowShouldClose()){
		Texture set=LoadTexture("hq/ico/setting.png");
		Texture Thuaqiang;
		Texture block=LoadTexture("hq/block/grass.png");
		Texture soil=LoadTexture("hq/block/soil.png");
		Texture wpl=LoadTexture("hq/item/wpl.png");//item saver
		Texture wplgb=LoadTexture("hq/item/wplgb.png"); 
		Texture bgtxt=LoadTextureFromImage(bgimg);
		num=GetKeyPressed();
		frame++;
		if (frame>=10)frame=0; 
		BeginDrawing();
		if(GetFPS()>=30)WaitTime(0.02);
		else if(GetFPS()>=20)WaitTime(0.01);
		//	else if(GetFPS()>=11)WaitTime(0.01);
		submap=getpos(player1.x,floor(GetScreenWidth()/block.height));
		//cartoon ctrl---------------
		switch (player1.zt){
		case 0:
			ptr=hqwalk;
			break;
		case 1:
			ptr=hqstand;
			break;
		case 2:
			ptr=hqstandwithknife;
			break;
		case 3:
			ptr=hqcdzl;
			break;
		case 4:
			ptr=hqcdhk;
			break;
		}
		//-----------------------------
		I1=ImageCopy(*(ptr+frame));
		if(player1.Forward==RI){
			ImageFlipHorizontal(&I1);
		}
		ClearBackground(SKYBLUE);
		if(player1.item.size()>=posofgb)player1.iteminhand=player1.item[posofgb-1].id;
		else player1.iteminhand=0;
		if(GameState==0){
			for(int i=0;i<jiege.size();i++)jiege.erase(jiege.begin()+i);
			for(int i=0;i<awei.size();i++)awei.erase(awei.begin()+i);
			for(int i=0;i<cxk.size();i++)cxk.erase(cxk.begin()+i);
			for(int i=0;i<player1.item.size();i++)player1.item.erase(player1.item.begin()+i);
			DrawTexture(bgtxt,0,0,WHITE);
			DrawTextEx(font,"激战华强",(Vector2){GetScreenWidth()/2-240,50},72,72,BLACK);
			if(GuiButton((Rectangle){GetScreenWidth()/2-150,300,300,80},"开始游戏")){
				GuiTextBox(Rectangle{600,300,GetScreenWidth()/2-300,GetScreenHeight()/2-150},"正在加载中……",32,false);
				make(false);
				player1.blood=20000;
				player1.x=0;
				player1.buff=0;
				player1.item.push_back(SItem(3,1));
				GameState=1;
			}
		}else if(GameState==1){
			if(IsKeyPressed(KEY_P)){
				if(Pause)Pause=false;
				else Pause=true;
			}
			if(!Pause){
				if(cxk.size()>0){
					UpdateMusicStream(jntm);
				}
				Thuaqiang=LoadTextureFromImage(I1);
				//---------Draw Texture
				for(int i=0;i<=floor(GetScreenWidth()/block.height);i++){//横行
					DrawTexture(block,i*block.height,GROUND+BW*(submap[(floor(GetScreenWidth()/block.height)/2)]-submap[i]),WHITE);//公式:GR+bw(submap[*(the base of the map)]-submap[i])=y
					for(int j=1;j<=floor((GetScreenHeight()-(GROUND+BW*(submap[(floor(GetScreenWidth()/block.height)/2)]-submap[i]))-BW)/BW)+1;j++){//公式:j=CS(y)=floor((SCRHEI-y-bw)/bw):floor((SCRHEI-GROUND+BW*(submap[(floor(GetScreenWidth()/block.height)/2)]-submap[i])-BW)/BW)
						DrawTexture(soil,i*block.height,GROUND+BW*(submap[(floor(GetScreenWidth()/block.height)/2)]-submap[i])+BW*j,WHITE);//y2=y+bw*j
					}
				}
				for(int i=0;i<awei.size();i++){
					awei[i].Update();
					switch(awei[i].zt){
					case 0:
						awei[i].ptr=awrbx;
						break;
					case 1:
						awei[i].ptr=awnh;
						break; 
					}
					awei[i].Attack(jiege[i],(PX+BW*(awei[i].x-player1.x)),player1);
					awei[i].hurt((PX+BW*(awei[i].x-player1.x)),player1);
					awei[i].Draw(); 
					if(awei[i].zt==0){
						if(!Pause)if (!IsSoundPlaying(rbx))PlaySound(rbx);
					}else{
						if(!Pause)if (!IsSoundPlaying(awdnh))PlaySound  (awdnh);
					}
					DrawTexture(awei[i].txt,(PX+BW*(awei[i].x-player1.x)),GetMobY(awei[i].x,player1.x)-350,awei[i].color);
					if(awei[i].blood<=0){
						sitem.push_back(SItem(GetRandomValue(awei[i].x-1,awei[i].x+1),0,1));
						awei.erase(awei.begin()+i);  
					}
				}
				DrawTexture(Thuaqiang,(int)(GetScreenWidth()/2)-110,player1.y,player1.color);//draw the character
				//	cout<<player1.blood<<'\n';
				for(int i=0;i<jiege.size();i++){
					if(!jiege[i].Isattack)jiege[i].Update();
					switch(jiege[i].zt){
					case 0:
						jiege[i].ptr=jg;
						break;
					case 1:
						jiege[i].ptr=jgdmb;
						break;
					}
					jiege[i].Draw();
					if(jiege[i].zt==1){
						if(!Pause)if (!IsSoundPlaying(qjr))PlaySound(qjr);
					}else{
						if(!Pause)if (!IsSoundPlaying(srwkk))PlaySound(srwkk);
					}
					DrawTexture(jiege[i].txt,(PX+BW*(jiege[i].x-player1.x)),GetMobY(jiege[i].x,player1.x)-350,jiege[i].color);//Actor screen X:s(mapx)=PX+BW*(Actor.mapx-player.mapx)
					jiege[i].rwkk(((int)(GetScreenWidth()/2)-110+BW*(jiege[i].x-player1.x)),player1); 
					jiege[i].hurt(((int)(GetScreenWidth()/2)-110+BW*(jiege[i].x-player1.x)),player1);
					if(jiege[i].blood<=0){
						sitem.push_back(SItem(GetRandomValue(jiege[i].x-1,jiege[i].x+1),1,GetRandomValue(1,3)));/*GetRandomValue(1,3)*/
						jiege.erase(jiege.begin()+i);
					}
				}
				for(int i=0;i<cxk.size();i++){
					cxk[i].Update();
					switch(cxk[i].zt){
					case 0:
						cxk[i].ptr=tsk ;
						break;
					case 1:
						cxk[i].ptr=kqs;
						break;
					}
					cxk[i].Draw();
					cxk[i].Attack((PX+BW*(cxk[i].x-player1.x)),player1);
					if(cxk[i].attack)DrawTexture(cxk[i].txt,(PX+BW*(cxk[i].x-player1.x)),cxk[i].y,cxk[i].color);
					else DrawTexture(cxk[i].txt,(PX+BW*(cxk[i].x-player1.x)),GetMobY(cxk[i].x,player1.x)-350,cxk[i].color);
					if(cxk[i].blood<=0){
						sitem.push_back(SItem(GetRandomValue(cxk[i].x-1,cxk[i].x+1),2,GetRandomValue(1,4)));//调整掉落物的生成数量
						cxk.erase(cxk.begin()+i);
					}  
				}
				for(int i=0;i<sitem.size();i++){
					sitem[i].Update();
					DrawTexture(sitem[i].txt,(PX+BW*(sitem[i].x-player1.x)),GetMobY(sitem[i].x,player1.x)-80,WHITE);
					if(CheckCollisionRecs(player1.TouchBox,Rectangle{(PX+BW*(sitem[i].x-player1.x)),GetMobY(sitem[i].x,player1.x)-80,sitem[i].txt.width,sitem[i].txt.width})){
						short ad=0;
						for(int j=0;j<player1.item.size();j++){
							if(player1.item[j].id==sitem[i].id){
								player1.item[j].count+=sitem[i].count;
								sitem.erase(sitem.begin()+i);
							}else{
								ad++;
							}
						}
						if(ad>=player1.item.size())player1.item.push_back(SItem(sitem[i].id,0));
					}
					if(sitem[i].Isdestory)sitem.erase(sitem.begin()+i);
				}
				//----------
				if(num>='1'&&num<='9'){
					posofgb=(num-48);
				}
				// 	DrawRectangleLinesEx(player1.TouchBox,3,WHITE); 
				DrawTexture(wpl,(GetScreenWidth()-wpl.width)/2,(GetScreenHeight()-wpl.height),WHITE);
				for(int i=0;i<player1.item.size();i++){
					player1.item[i].Update();
					DrawTextureEx(player1.item[i].txt,Vector2{(i+1)*80+((GetScreenWidth()-wpl.width)/2)-64,(GetScreenHeight()-wpl.height+16)},0.0f,0.7,WHITE);
					string str;
					if(player1.item[i].count>1){
						if(player1.item[i].count<=99)str=to_string((int)player1.item[i].count); 
						else str="99+"; 
					}
					DrawText(str.c_str(),(i+1)*80+((GetScreenWidth()-wpl.width)/2)-15,(GetScreenHeight()-wpl.height+60),24,RAYWHITE);
				}
				DrawTexture(wplgb,((GetScreenWidth()-wpl.width)/2+(posofgb-1)*(wpl.height-5)),(GetScreenHeight()-wpl.height),WHITE);
				string str=to_string((int)round(player1.blood/100));
				GuiProgressBar(Rectangle{(GetScreenWidth()/2)-358,(GetScreenHeight()-108),680,24},NULL,NULL,player1.blood,0,20000);
				DrawText(str.c_str(),(GetScreenWidth()/2)+324,(GetScreenHeight()-108),20,YELLOW);
				player1.hurt();
				if(IsMouseTouchT(set,GetScreenWidth()/2-32,0)){
					DrawTexture(set,GetScreenWidth()/2-32,0,WHITE);
					if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
						Pause=true;
					}
				}else{
					DrawTexture(set,GetScreenWidth()/2-32,0,RAYWHITE);
				}
				if(GetRandomValue(0,50)==25){//每一帧1/50的刷怪概率
					if(jiege.size()+awei.size()+cxk.size()<=25){
						int x=GetRandomValue(player1.x+30,player1.x+50);
						jiege.push_back(Jiege(x));
						awei.push_back(Awei(x+5));
						cxk.push_back(Cxk(x-2,player1.y-200));  
					}
				}
				if(player1.x>=(MAPSIZE-4))GameState=3;
				string jd=to_string(player1.x);
				DrawText(jd.c_str(),0,15,30,WHITE);
				//-------------------Key&Mouse ctrl----------------
				if(posofgb-GetMouseWheelMove()>0){
					if(posofgb-GetMouseWheelMove()<9)posofgb-=GetMouseWheelMove();
					else posofgb=1;
				}else{   
					posofgb=9;
				}
				if(GetCharPressed()==0){
					switch (player1.iteminhand) {
					case KNIFE:
						player1.zt=2;
						break;
					default:
						player1.zt=1;
						break;
					}
					if(GetMouseX()<(PX+175))player1.Forward=LE;
					else player1.Forward=RI;
				}
				if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
					player1.Isattack=true;
					frame=0;
					posofgb=1;
				}
				if(IsMouseButtonDown(MOUSE_BUTTON_RIGHT)){
					foreat.start();
					if(player1.blood<20000){
						switch(player1.iteminhand){
						case 0:
							if(foreat.IsTimeUp(1800)){
								player1.blood+=4000;//1.8秒吃完
								if(GetRandomValue(1,3)==2)player1.buff=1;
								for(int j=0;j<player1.item.size();j++){
									if(player1.item[j].id==0){
										player1.item[j].count--;
										if(player1.item[j].count<=0)player1.item.erase(player1.item.begin()+j);
									}
								}
							}
							break;
						case 1:
							if(foreat.IsTimeUp(1100)){
								for(int j=0;j<player1.item.size();j++){
									if(player1.item[j].id==1){
										player1.item[j].count--;
										if(player1.item[j].count<=0)player1.item.erase(player1.item.begin()+j);
									}
								}
								player1.blood+=3000;//1.1秒吃完
							}
							break;
						case 2:
							if(foreat.IsTimeUp(1800)){
								for(int j=0;j<player1.item.size();j++){
									if(player1.item[j].id==2){
										player1.item[j].count--;
										if(player1.item[j].count<=0)player1.item.erase(player1.item.begin()+j);
									}
								}
								player1.blood+=3500;//1.8秒吃完
							}
							break;
						}
						if(player1.iteminhand!=3)DrawTextEx(font,"回血中……",Vector2{0,100},35,1,RED);
					}
				}else{
					foreat.cantime=true;
				}
				if(player1.Isattack){
					player1.zt=4;
					if(frame>=9)player1.Isattack=false;
				}
				if(IsKeyDown(KEY_D)){
					if(player1.buff==0){
						if(-(((GROUND+BW*(submap[(floor(GetScreenWidth()/block.height)/2)]-submap[(floor(GetScreenWidth()/block.height)/2)+1]))-player1.y-HQ_HEI)/BW)<2)player1.x+=1;
					}else{
						if(-(((GROUND+BW*(submap[(floor(GetScreenWidth()/block.height)/2)]-submap[(floor(GetScreenWidth()/block.height)/2)-1]))-player1.y-HQ_HEI)/BW)<2)player1.x-=1;
					}
					
					if(!player1.Isattack){
						if(player1.iteminhand==KNIFE)player1.zt=3;
						else player1.zt=0;
					}
					player1.Forward=RI;
				}
				if(IsKeyDown(KEY_A)){
					if(player1.buff==1){
						if(-(((GROUND+BW*(submap[(floor(GetScreenWidth()/block.height)/2)]-submap[(floor(GetScreenWidth()/block.height)/2)+1]))-player1.y-HQ_HEI)/BW)<2)player1.x+=1;
					}else{
						if(-(((GROUND+BW*(submap[(floor(GetScreenWidth()/block.height)/2)]-submap[(floor(GetScreenWidth()/block.height)/2)-1]))-player1.y-HQ_HEI)/BW)<2)player1.x-=1;
					}
					if(!player1.Isattack){
						if(player1.iteminhand==KNIFE)player1.zt=3;
						else player1.zt=0;
					}
					player1.Forward=LE;
				}
				if(IsKeyDown(KEY_SPACE)||IsKeyDown(KEY_W))Isjump=true;
				if(Isjump){
					player1.speed.y=player1.jumpForce;
					player1.y+=player1.speed.y;
					if((GROUND-player1.y-HQ_HEI)>=120){
						player1.jumpForce*=-1;
					}
					if((player1.y+HQ_HEI)>=GROUND){
						player1.jumpForce =JF;
						player1.speed.y=0;
						Isjump=false;
					}
				}
				if(player1.blood<=0){
					GameState=2;
					//Unload all the mob and the item
				}
				//---------------key ctrl-------------------------- 
			}else{
				for(int i=0;i<=floor(GetScreenWidth()/block.height);i++){//横行
					DrawTexture(block,i*block.height,GROUND+BW*(submap[(floor(GetScreenWidth()/block.height)/2)]-submap[i]),WHITE);//公式:GR+bw(submap[*(the base of the map)]-submap[i])=y
					for(int j=1;j<=floor((GetScreenHeight()-(GROUND+BW*(submap[(floor(GetScreenWidth()/block.height)/2)]-submap[i]))-BW)/BW)+1;j++){//公式:j=CS(y)=floor((SCRHEI-y-bw)/bw):floor((SCRHEI-GROUND+BW*(submap[(floor(GetScreenWidth()/block.height)/2)]-submap[i])-BW)/BW)
						DrawTexture(soil,i*block.height,GROUND+BW*(submap[(floor(GetScreenWidth()/block.height)/2)]-submap[i])+BW*j,WHITE);//y2=y+bw*j
					}
				}
				for(int i=0;i<cxk.size();i++){
					cxk[i].Draw();         
					if(cxk[i].attack)DrawTexture(cxk[i].txt,(PX+BW*(cxk[i].x-player1.x)),cxk[i].y,cxk[i].color);
					else DrawTexture(cxk[i].txt,(PX+BW*(cxk[i].x-player1.x)),GetMobY(cxk[i].x,player1.x)-350,cxk[i].color);
				}
				for(int i=0;i<jiege.size();i++){
					jiege[i].Draw();
					DrawTexture(jiege[i].txt,(PX+BW*(jiege[i].x-player1.x)),GetMobY(jiege[i].x,player1.x)-350,jiege[i].color);//Actor screen X:s(mapx)=PX+BW*(Actor.mapx-player.mapx)
				}
				for(int i=0;i<awei.size();i++){
					awei[i].Draw();
					DrawTexture(awei[i].txt,(PX+BW*(awei[i].x-player1.x)),GetMobY(awei[i].x,player1.x)-350,awei[i].color);
				}
				DrawRectangle(GetScreenWidth()/2-200,GetScreenHeight()/2-200,400,400,LIGHTGRAY);
				string mv=to_string(MusicVolume);
				float mvf=MusicVolume;
				MusicVolume=GuiSlider(Rectangle{GetScreenWidth()/2-100,GetScreenHeight()/2-50,210,30},NULL,NULL,MusicVolume,0,100);
				DrawTextEx(font,"音量",Vector2{GetScreenWidth()/2-200,GetScreenHeight()/2-50},40,2,BLACK);
				DrawText(mv.c_str(),GetScreenWidth()/2+150,GetScreenHeight()/2-50,40,RAYWHITE); 
				SetMasterVolume((mvf/100));
				if(GuiButton(Rectangle{GetScreenWidth()/2-100,GetScreenHeight()/2-190,230,70},"返回游戏"))Pause=false;
				if(GuiButton(Rectangle{GetScreenWidth()/2-100,GetScreenHeight()/2+115,230,70},"主菜单")){
					GameState=0;
					Pause=false;
				}
			}
		}else if(GameState==2){
			DrawTextEx(font,died_reason.c_str(),(Vector2){GetScreenWidth()/2-240,50},72,72,BLACK);
			if(GuiButton((Rectangle){GetScreenWidth()/2-150,300,300,80},"再逝一次")){
				GameState=0;
			}
		}else if(GameState==3){
			DrawTextEx(font,"你赢了！",(Vector2){GetScreenWidth()/2-240,50},72,72,BLACK);
			if(GuiButton((Rectangle){GetScreenWidth()/2-150,300,300,80},"再逝一次")){
				GameState=0;
			}
		}
		DrawFPS(0,0);
		EndDrawing();
		UnloadImage(I1);
		UnloadTexture(bgtxt);
		for(int i=0;i<sitem.size();i++){
			UnloadTexture(sitem[i].txt);
		}
		for(int i=0;i<awei.size();i++){
			UnloadTexture(awei[i].txt);
			for(int j=0;j<awei[i].item.size();j++){
				UnloadTexture(awei[i].item[j].txt); 
			}
		}
		for(int i=0;i<jiege.size();i++){
			UnloadTexture(jiege[i].txt);
		}
		for(int i=0;i<cxk.size();i++){
			UnloadTexture(cxk[i].txt);
			for(int j=0;j<cxk[i].item.size();j++){
				UnloadTexture(cxk[i].item[j].txt); 
			}
		}
		for(int i=0;i<player1.item.size();i++){
			UnloadTexture(player1.item[i].txt);
		}
		UnloadTexture(Thuaqiang);   
		UnloadTexture(block);
		UnloadTexture(soil);
		UnloadTexture(wpl);
		UnloadTexture(wplgb);
	}
	UnloadSound(srwkk);
	UnloadSound(qjr);
	UnloadSound(awdnh);
	UnloadSound(rbx);
	UnloadMusicStream(jntm);
	CloseWindow();
	CloseAudioDevice();
	return 0;
}

/*
  地图生成
 */
#include<iostream>
#include<random>
#include<cmath>
#include"hq.h"
#include<fstream>
#include<ctime>
#include<cstring>
using namespace std;
inline void lerp(int &a, int &b)
{
	default_random_engine e;
	uniform_int_distribution<int> u(1,2);
	if(b-a>2){
		b=a+u(e);
	}else if(a-b>2){
		b=a-u(e);
	}
}
void mapmake(int seed, int length)
{
	std::vector<int> noise(length);
	// seed
	std::ofstream inputsave("save.txt",ios::in|ios::binary|ios::trunc);
	std::mt19937 seed2(seed);
	std::uniform_real_distribution<float> distribution(0, 1);
	// get perlin noise
	for (int i = 0; i < length; ++i)noise[i] = distribution(seed2)*100;
	for (int i = 0; i < length - 1; ++i){ 
		lerp(noise[i], noise[i + 1]);
		if(inputsave.is_open()){
			inputsave<<noise[i]<<" ";//input all the value into the .txt
			//std::cout<<"aaa!";
		}else{
			std::cout<<"fail to open"; 	
		}
	}
	inputsave.close();
}
vector<int> getpos(int x,int size){
	vector<int> savepos(size);
	ifstream readsave("save.txt",ios::out|ios::binary);
	readsave.seekg(x*3);
	for(int i=0;i<=size-1;i++){
		readsave>>savepos[i];
	}
	readsave.close();
	return savepos;
}

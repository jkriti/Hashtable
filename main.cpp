#include<cstdlib>
#include<iostream>
#include<string>
using namespace std;
#include"hash.h"




int main(int argc, char** argv) {
hash Hashy;
string name = "";
//Hashy.PrintTable();
Hashy.AddItem("Paul","Locha");
Hashy.AddItem("Kim","Iced Mocha");
Hashy.AddItem("Emma","Strawberry Smooty");
Hashy.AddItem("Sarah","Passion Tea");
Hashy.AddItem("Pepper","Caramel Mocha");
Hashy.AddItem("Mike","Chai Tea");
Hashy.AddItem("Steve","apple cider");
Hashy.AddItem("Bill","Root beer");
Hashy.AddItem("Marie","Skinney Latte");
Hashy.AddItem("Susan","Water");
Hashy.AddItem("Joe","Green Tea");

//Hashy.PrintTable();

Hashy.PrintItemsInIndex(2);

while(name!="exit")
{
	cout<<"Remove here ";
	cin>>name;
	if(name!="exit")
	{
		Hashy.RemoveItem(name);
	}
	
}
Hashy.PrintItemsInIndex(2);
	return 0;
}

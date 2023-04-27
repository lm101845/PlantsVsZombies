/*
* 2023年4月27日21:26:34
* 开发日志：
* 1.创建新项目(空项目模板)使用vs的任意版本
* 2.导入素材
* 3.实现最开始的游戏场景
* 
* 
* 
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<graphics.h>   //easyx图形库的头文件，需要安装easyx图形库
#define WIN_WIDTH 900
#define WIN_HEIGHT 600


IMAGE imgBg;   //表示背景图片


void gameInit() {
	//加载游戏背景图片
	//把字符集修改为"多字节字符集"
	loadimage(&imgBg, "res/bg.jpg");

	//创建游戏的图形窗口
	initgraph(WIN_WIDTH, WIN_HEIGHT);
}

void updateWindow() {
	//把图片渲染出来
	putimage(0, 0, &imgBg);
}

int main()
{
	gameInit();   //游戏初始化
	updateWindow();
	system("pause");
	return EXIT_SUCCESS;
}

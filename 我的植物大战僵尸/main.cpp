/*
* 2023��4��27��21:26:34
* ������־��
* 1.��������Ŀ(����Ŀģ��)ʹ��vs������汾
* 2.�����ز�
* 3.ʵ���ʼ����Ϸ����
* 
* 
* 
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<graphics.h>   //easyxͼ�ο��ͷ�ļ�����Ҫ��װeasyxͼ�ο�
#define WIN_WIDTH 900
#define WIN_HEIGHT 600


IMAGE imgBg;   //��ʾ����ͼƬ


void gameInit() {
	//������Ϸ����ͼƬ
	//���ַ����޸�Ϊ"���ֽ��ַ���"
	loadimage(&imgBg, "res/bg.jpg");

	//������Ϸ��ͼ�δ���
	initgraph(WIN_WIDTH, WIN_HEIGHT);
}

void updateWindow() {
	//��ͼƬ��Ⱦ����
	putimage(0, 0, &imgBg);
}

int main()
{
	gameInit();   //��Ϸ��ʼ��
	updateWindow();
	system("pause");
	return EXIT_SUCCESS;
}

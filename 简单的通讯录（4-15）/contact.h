#pragma once

//���ڵ�����
//1.һ��ֻ������һ��
//2.���ݶ��Ƿŵ��ڴ���ģ�һ������������ݾ�û��---�����ļ����
//3.���ܼ��������ָ������ϵ��
//4.������ϵ��ֻ���ܼ�������
//5.�Ǿ�̬�汾������ֻ��һ��
#include<string.h>
#include<stdio.h>
#include<assert.h>
#include <stdlib.h>
#define MAX 100//�������
#define MAA_NAME 20//���ֳ���
#define MAX_SEX 10//�Ա��ַ����ĳ���
#define MAX_ADDR 100//��ַ����
#define MAX_TILE 20//�绰����
//���͵�����
//���˵���Ϣ
typedef struct PEOPLE
{
	char name[MAA_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TILE];
	char addr[MAX_ADDR];
}PEOPLE;

//ͨѶ¼
typedef struct CONTACT
{
	PEOPLE data[100];//��Ÿ�������
	int count;//ͳ��ͨѶ¼������
}CONTACT;

//��ʼ��ͨѶ¼��0��
void InitCONTACT(CONTACT* pc);

//������ϵ��
void AddCONTACT(CONTACT* pc);

//��ӡͨѶ¼
void ShowCONTACT(const CONTACT*pc);//����ֻ��ӡ���ǲ����޸ģ�Ϊ�˷�ֹ���ݱ��޸ģ���const

//ɾ��ָ����ϵ��
void DelCONTACT(const CONTACT*pc);

//�����ֲ���ָ����ϵ��
void SearchByName(CONTACT*pc);

//�޸�ָ����ϵ��
void ModifyCONTACT(CONTACT* pc);

//������������
void SortByName(CONTACT* pc);
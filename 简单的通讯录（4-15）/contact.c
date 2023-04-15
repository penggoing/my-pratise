#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

//����ʵ��
// 
//��������
int  FindByName(CONTACT *pc, char name[MAA_NAME])
{
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		if (0 == strcmp(pc->data[i].name, name))
		{
			return i;
		}
	}
	return -1;
	
}

//��ʼ��ͨѶ¼
void InitCONTACT(CONTACT* pc)
{
	assert(pc);//�ж�pc�Ƿ�Ϊ�� https://www.cnblogs.com/lvchaoshun/p/7816288.html
	pc->count = 0;
	memset(pc->data, 0, sizeof(pc->data));//memset���� http://c.biancheng.net/view/231.html

}

//�����ϵ��
void AddCONTACT(CONTACT* pc)
{
	assert(pc);
	//�ж�ͨѶ¼�Ƿ����������˾ͷŲ�����
	if (pc->count == MAX)
	{
		printf("!!!ͨѶ¼�������޷���ӣ�����\n	");
		return;//�൱�� ʲôҲ�����أ���ʾ�˳�������//��ѭ�����break����

	}
	printf("����������:>");
	scanf("%s", pc->data[pc->count].name);//name�Ǻ���������Ҫȡ��ַ
	printf("����������:>");
	scanf("%d", &(pc->data[pc->count].age));
	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->count].sex);
	printf("������绰:>");
	scanf("%s", pc->data[pc->count].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[pc->count].addr);

	pc->count++;
	printf("��ӳɹ���");
}

//��ӡ��Ϣ
void ShowCONTACT(const CONTACT* pc)
{
	assert(pc);
	int i = 0;
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n",
		"����", "����", "�Ա�", "�绰", "��ַ");//ע���ӡ����Ҫ���ַ���
	for (i = 0; i < pc->count; i++)
	{
		
		printf("%-20s\t%-3d\t%-5s\t%-12s\t%-30s\n",  pc->data[i].name,
												pc->data[i].age,
												pc->data[i].sex,
												pc->data[i].tele,
												pc->data[i].addr);//̫���ˣ����кÿ�
	}
}

//ɾ��ָ����ϵ��
void DelCONTACT( CONTACT* pc)
{
	char name[MAA_NAME] = { 0 };
	
	assert(pc);
	
	if (pc->count == 0)
	{
		printf("!!!ͨѶ¼Ϊ�գ�û����Ϣ��ɾ��\n");
		return;
	}
	printf("������Ҫɾ���˵�����:>");
	scanf("%s", name);
	//�����ж�
	int pos=FindByName(pc,name);
	
	//ɾ��
	int i = 0;
	for (i = pos; i < pc->count-1; i++)//count-1��Ϊ�˷�ֹ���Խ��
	{
		pc->data[i] = pc->data[i + 1];//�ú�����˵���Ϣ��ǰ����Ǹ��˵���Ϣ���ǣ��ﵽɾ����Ч��

	}
	pc->count--;//Ҫɾ�����һ��Ҳû���⣬������һ��ֱ�ӾͰ����һ���ų�ȥ��
	
}
#define _CRT_SECURE_NO_WARNINGS 1
//���벻�Ǵӵ�һ�л���д���Ƿ�ģ�飬��Ҫʲôдʲô
#include "contact.h"//�����Լ���ͷ�ļ���˫����
void menu()
{
	printf("\t���˵�\n");
	printf("=================================\n");
	printf("1.add\t\t2.del\n");
	printf("3.search\t4.modify\n");//��\t�����˸�λ������룬�����˸��Ҳ��ո�
	printf("5.show\t\t6.sort\n");
	printf("0.exit\n");
	printf("=================================\n");

}
int main()
{	
	int input = 0;
	CONTACT con;//ͨѶ¼---��������������Ϣ�Ľṹ���ͳ��������count
	//��ʼ��ͨѶ¼
	InitCONTACT(&con);//Ҫ�ı�ṹ�壬���Դ�ָ��
	

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			AddCONTACT(&con);
			break;
		case 2:
			DelCONTACT(&con);
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			ShowCONTACT(&con);
			break;
		case 6:
			break;
		case 0:
			break;
		default:
			printf("������ѡ����󣡣���\n");
			break;
		}
	} while (input);


}
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n, m, i, j, pos, sum, len, mlen = 0, t = 0;
    cin >> n;
    m = sqrt(n);
    int s[107374];
    for (i = 2; i <= m + 1; i++) //����������˺������ӣ���˷�����������ӿ϶�ֻ��2~sqrt(n)+1֮��
    {
        if (n % i == 0)
            s[t++] = i;
    }
    if (t == 0)//˵��������
        cout << '1' << endl << n << endl;
    else if (t == 1)//���ֻ��һ����������ô��������ӵĸ���Ϊ1����С�������������о�Ϊs[0]
        cout << '1' << endl << s[0] << endl;
    else//�����������������ѭ��
    {
        for (i = 0; i < t - 1; i++)
        {
            sum = s[i];
            len = 1;
            for (j = i; j < t - 1; j++)
            {
                if (s[j + 1] - s[j] == 1 && n % (sum * s[j + 1]) == 0)//�ж��Ƿ�����  �����Ļ��ж���˺��Ƿ�������
                {//��Ϊ��ĿҪ������������ӣ���Ҫ������������˺󻹵�������
                    sum = sum * s[j + 1];
                    len++;
                }
                else//������ֱ���������ж�����һ�����ӿ�ʼ�������Ƿ����
                    break;
            }
            if (len > mlen)//������ȴ�����󳤶����¼��ʼ����������
            {//��������򲻱䣬��Ϊ��ĿҪ����������������������������С��������
                mlen = len;//���������
                pos = i;
            }
        }
        cout << mlen << endl;//��Ҫ�����
        cout << s[pos];
        for (i = pos + 1; i < pos + mlen; i++)
            cout << '*' << s[i];
        cout << endl;
    }
    return 0;
}


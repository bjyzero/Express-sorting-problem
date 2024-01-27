#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;

    // ���￪map������������ֺͿ�ݵ��ţ�������Ϊstring����
    // ����һ�����в�ֹһ����ݵ��ţ����map�м�(����)��Ӧֵ(����)����Ϊvector<string>
    // �ٵ�����һ��vector����¼���е�˳��
    map<string, vector<string>> mp;
    vector<string> citys;

    while (n--)
    {
        string name, id;
        cin >> id >> name;

        //����ȷ��ÿ������ֻ��¼һ��
        if (!mp.count(name))
            citys.push_back(name);

        //����ʹ�����ַ�������map�д�ֵ
        mp[name].push_back(id);
    }

    //�������
    for (const auto &city : citys)
    {
        cout << city << ' ' << mp[city].size() << '\n';
        for (const auto &id : mp[city])
        {
            cout << id << '\n';
        }
    }
    
    return 0;
}
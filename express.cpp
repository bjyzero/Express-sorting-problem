#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;

    // 这里开map来储存城市名字和快递单号，两个都为string类型
    // 由于一个城市不止一个快递单号，因此map中键(城市)对应值(单号)类型为vector<string>
    // 再单独开一个vector来记录城市的顺序
    map<string, vector<string>> mp;
    vector<string> citys;

    while (n--)
    {
        string name, id;
        cin >> id >> name;

        //这里确保每个城市只记录一次
        if (!mp.count(name))
            citys.push_back(name);

        //可以使用这种方法来向map中存值
        mp[name].push_back(id);
    }

    //依次输出
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
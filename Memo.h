#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

class Memo
{
private:
    string filename;
    vector<string> memoList;

public:
    Memo();

    // メモ一覧表示
    void showMemo();
    // メモを作成
    void createMemo(string text);
    // メモを更新
    void updateMemo();
   // メモを削除
    void deleteMemo();

   // メモを保存
    void save();
};

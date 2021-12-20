#include <iostream>
#include "Memo.h"

using namespace std;

const string SPLIT_LINE = "------------------------------";

int main() {
    Memo *memo = new Memo();
    bool loop = true;

    while(loop) {
        int menu = 0;
        cout << "処理を選んでください" << endl;
        cout << "1. 一覧の表示" << endl;
        cout << "2. メモの追加" << endl;
        cout << "3. メモの編集" << endl;
        cout << "4. メモの削除" << endl;
        cout << "5. 保存" << endl;
        cout << "9. 終了" << endl;

        string menu_str = "";
        string memo_text = "";
        cout << ">> : ";

        string input;
        cout << "メニューを入力してください。"<< endl;
	    cin >> input;
	    cout << "input is " << input << endl;
        menu = stoi(input);

        cout << SPLIT_LINE << endl;
        switch(menu) {
            case 1:
                // TODO: メモ一覧を表示する
                memo->showMemo();
            break;
            case 2:
                // TODO: メモを追加する
                cout << ">> : ";
                cout << "内容を入力してください。"<< endl;
                cin >> memo_text;
                cout << "input is " << memo_text << endl;

                memo->createMemo(memo_text);
            break;
            case 3:
                // TODO: メモを更新する
                memo->updateMemo();
            break;
            case 4:
                // TODO: メモを削除する
                memo->deleteMemo();
            break;
            case 5:
                // TODO: メモの内容をテキストに保存する
                memo->save();
            break;
            case 9:
                loop = false;
            break;
            default:
                cout << "選択された番号が不正です" << endl;
            break;
        }
        cout << SPLIT_LINE << endl;
    }
    return 0;
}
#include "Memo.h"

const string SPLIT_LINE = "------------------------------";

Memo::Memo()
{
    // TODO: memo.txtファイルの読み込み
    this->filename = "./memo.txt";
    ifstream ifs(this->filename);
    string str;
    this->memoList.clear();
    // TODO: memo.txtの内容をメンバ変数「memoList」に代入
    while (getline(ifs, str)) {
        this->memoList.push_back( str );
    }
}
void Memo::showMemo()
{
    // TODO: メンバ変数「memoList」の一覧をcoutする
    for(int i = 0; i < this->memoList.size(); ++i) {
        cout << "# " << this->memoList[ i ] << endl;
    }
}
void Memo::createMemo(string text)
{
    // TODO: メンバ変数「memoList」に引数「text」の内容を追加する
    this->memoList.push_back( text );
}
void Memo::updateMemo()
{
    // TODO: メンバ変数「memoList」のうち指定した番号のindexの内容を更新する
    for(int i = 0; i < this->memoList.size(); ++i) {
        cout << i + 1 << ". " << this->memoList[ i ] << endl;
    }
    int index = 0;
    cout << ">> : ";
    string input;
    cout << "更新したい行番号を入力してください。"<< endl;
    cin >> input;
    cout << "input is " << input << endl;
    index = stoi(input) - 1;

    cout << SPLIT_LINE << endl;

    cout << ">> : ";
    string memo_text = "";
    cout << "内容を入力してください。"<< endl;
    cin >> memo_text;
    cout << "input is " << memo_text << endl;

    this->memoList[ index ] = memo_text;
}
void Memo::deleteMemo()
{
    // TODO: メンバ変数「memoList」のうち指定した番号のindexを削除する
    for(int i = 0; i < this->memoList.size(); ++i) {
        cout << i + 1 << ". " << this->memoList[ i ] << endl;
    }

    int index = 0;
    cout << ">> : ";
    string input;
    cout << "削除したい行番号を入力してください。"<< endl;
    cin >> input;
    cout << "input is " << input << endl;
    index = stoi(input) - 1;

    cout << SPLIT_LINE << endl;

    if (0 <= index && index < this->memoList.size()) {
        this->memoList.erase(this->memoList.begin() + index);
    }

    this->showMemo();
}
void Memo::save()
{
    // TODO: メンバ変数「memoList」の内容をmemo.txtファイルに書き込む
    ofstream writing_file;
    writing_file.open(this->filename, ios::out);
    for(int i = 0; i < this->memoList.size(); ++i) {
        string writing_text = this->memoList[ i ];
        writing_file << writing_text << endl;
    }
    writing_file.close();
}


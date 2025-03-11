#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;


//1. 三角形の底辺と高さを入力すると、その三角形の面積を出力する関数を作成してください
double menseki(double a, double h){
    return a*h/2;
}

/*"2.以下の条件を満たす関数を作成してください
1から30の数値を順にprintする 
ただし 
・3の倍数のときは数値の代わりにfizzをprintする
・7の倍数のときは数値の代わりにbazzをprintする
・3の倍数かつ7の倍数のときは数値の代わりにfizzbazzをprintする"*/

void fizzbazz(){
    for(int i = 1; i <= 30; i++){
        if(i % 3 == 0 && i % 7 == 0){
            cout << "fizzbazz" << ' ';
        }else if(i % 3 == 0){
            cout << "fizz" << ' ';
        }else if(i % 7 == 0){
            cout << "bazz" << ' ';
        }else{
            cout << i << ' ';
        }
    }
    cout << endl;
    return;
}

/*"3. 自己紹介をするクラスを作成してください
•名前と年齢と出身地をインスタンス変数としてもつクラスを作成
•そのクラスに自己紹介をするメソッドを作成
•インスタンスを作成し、自己紹介メソッドを実行すると「私は[名前]です。年齢は[年齢]歳です。[出身地]生まれです。」という文字列をprintする
•このようなインスタンスを2つ作成し、実行するインスタンスを変えることによって、2人の自己紹介ができるようにしてください"*/

class SelfIntroduction{
    public:
        string name;
        int age;
        string place;

        void introduce(){
            cout << "私は" << name << "です。年齢は" << age << "歳です。" << place << "生まれです。" << endl;
        }
};

/*"4.好きな食べ物と嫌いな食べ物をインスタンス変数としてもつクラスを作成してください  
•	インスタンスを作成し、自己紹介メソッドを実行すると「私は[名前]です。年齢は[年齢]歳です。[出身地]生まれです。好きな食べ物は[好きな食べ物]で、嫌いな食べ物は[嫌いな食べ物]です。」という文字列をprintする
•	ただし、名前、年齢、出身地はこのクラス内で定義してはいけません
•	このようなインスタンスを2つ作成し、実行するインスタンスを変えることによって、2人の自己紹介ができるようにしてください"
*/

class Food{
    public:
        string like;
        string hate;

        void introduce(string name, int age, string place){
            cout << "私は" << name << "です。年齢は" << age << "歳です。" << place << "生まれです。好きな食べ物は" << like << "で、嫌いな食べ物は" << hate << "です。" << endl;
        }
};

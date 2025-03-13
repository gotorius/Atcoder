#3. 自己紹介をするクラスを作成してください
#•名前と年齢と出身地をインスタンス変数としてもつクラスを作成
#•そのクラスに自己紹介をするメソッドを作成
#•インスタンスを作成し、自己紹介メソッドを実行すると「私は[名前]です。年齢は[年齢]歳です。[出身地]生まれです。」という文字列をprintする
#•このようなインスタンスを2つ作成し、実行するインスタンスを変えることによって、2人の自己紹介ができるようにしてください"


class Introduction: 
    def __init__(self, name, age, birthplace):
        self.name = name
        self.age = age
        self.birthplace = birthplace

    def introduce(self):
        print(f"私は{self.name}です。年齢は{self.age}歳です。{self.birthplace}生まれです。")

person1 = Introduction("山田太郎", 25, "東京")
person2 = Introduction("鈴木花子", 30, "大阪")

person1.introduce()
person2.introduce()


#"4.好きな食べ物と嫌いな食べ物をインスタンス変数としてもつクラスを作成してください  
#•	インスタンスを作成し、自己紹介メソッドを実行すると「私は[名前]です。年齢は[年齢]歳です。[出身地]生まれです。好きな食べ物は[好きな食べ物]で、嫌いな食べ物は[嫌いな食べ物]です。」という文字列をprintする
#•	ただし、名前、年齢、出身地はこのクラス内で定義してはいけません
#•	このようなインスタンスを2つ作成し、実行するインスタンスを変えることによって、2人の自己紹介ができるようにしてください"

class FoodPreferences:
    def __init__(self, favorite_food, disliked_food):
        self.favorite_food = favorite_food
        self.disliked_food = disliked_food

    def introduce(self, name, age, birthplace):
        print(f"私は{name}です。年齢は{age}歳です。{birthplace}生まれです。好きな食べ物は{self.favorite_food}で、嫌いな食べ物は{self.disliked_food}です。")

# インスタンスを2つ作成
person1 = FoodPreferences("寿司", "納豆")
person2 = FoodPreferences("ラーメン", "ピーマン")

# 自己紹介メソッドを実行
person1.introduce("山田太郎", 25, "東京")
person2.introduce("鈴木花子", 30, "大阪")
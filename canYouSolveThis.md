# 問題解析  
要は二次元配列の行ごとの配列と与えられた一次元配列の要素を決まった計算式に当てはめてそれが0より上なら正答とする。このような処理を実装すればよい。  
## 実装の流れ
まず入力を受け付ける。  
二次元配列の行に注目するように二重のループを組む。  
内部のループで計算式に当てはめて計算結果を保存。  
内部のループを脱出後（つまり二次元配列の一行の計算終了）、それにCを加えてその答えが0より大きいかをチェック。  
## 備考
独力で解けた。  
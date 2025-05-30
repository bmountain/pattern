# ビジターパターン

`std::variant`および`std::visit`を使う実装について記載する。

## 実装
型は具象クラスとして定義する。
処理はすべての具象クラスに対する処理をオーバーロードした関数オブジェクトとして定義する。

## 使用
`std::variant`により具象クラスの直和型が書ける。
そうして定義した型の変数と関数オブジェクトに対して`std::visit`を適用する。

## 長所
処理種別の追加を容易にする。
処理種別を追加する場合は、関数オブジェクト作成する。

## 短所
型の追加を困難にする。
型を追加した場合、すべての関数オブジェクトに渡る水平展開が発生する。

## オブジェクト指向との比較
オブジェクト指向では具象クラスが抽象クラスに依存していた。
このビジターパターンでは`std::variant`型が具象クラスに依存する。
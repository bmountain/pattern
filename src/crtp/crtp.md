# CRTPパターン
Curiously Reccuring Template Pattern

CRTPパターンは基底クラスと派生クラスの型引数が循環する実装パターン。
ここでは以下の循環がある。
- Addableは派生クラスを型引数に持つ
- StrongTypeは基底クラスを型引数に持つ

この応用により処理の静的な注入が可能。
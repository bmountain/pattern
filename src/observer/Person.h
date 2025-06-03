#ifndef PERSON_H
#define PERSON_H

#include "Observer.h"
#include <set>
#include <string>

class Person
{
public:
  enum StateChange {
    forenameChanged,
    surnameChanged,
    addressChanged
  };

  // Personを監視するオブザーバーは、Personの特定の変更を知る
  using PersonObserver = Observer<Person, StateChange>;

  explicit Person(std::string forname, std::string surname)
      : forename_(std::move(forname)), surname_(std::move(surname)){};

  // 登録
  bool attach(PersonObserver*);

  // 登録解除
  bool detach(PersonObserver*);

  // 変更を通知
  void notify(StateChange);

  // ゲッター
  std::string forename()
  {
    return forename_;
  };
  std::string surname()
  {
    return surname_;
  }
  std::string address()
  {
    return address_;
  }

  // 以下メソッドは実行時に通知が飛ぶ
  void forename(std::string);
  void surname(std::string);
  void address(std::string);

private:
  std::string forename_;
  std::string surname_;
  std::string address_;

  // オブザーバー一覧
  // 同一の属性を持つPersonObserverを識別するためポインタとして持つ
  std::set<PersonObserver*> observers_;
};
#endif /* PERSON_H */
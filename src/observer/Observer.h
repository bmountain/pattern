#ifndef OBSERVER_H
#define OBSERVER_H

/**
 * @file
 * 古典的オブザーバーの実装。このほかに具象クラスにupdate時のふるまいをstd::functionとして注入する方法もある。
 *
 */

/**
 * @brief オブザーバー抽象クラス
 *
 * @tparam Subject 監視の対象のクラス
 * @tparam StateTag 関心のある属性
 * @details Subjectが持つStateTagに関する変更を知る
 */
template <typename Subject, typename StateTag> class Observer
{
public:
  virtual ~Observer() = default;

  // 監視対象のインスタンスと属性
  virtual void update(const Subject& subject, StateTag property) = 0;
};

#endif /* OBSERVER_H */
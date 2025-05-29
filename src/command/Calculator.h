#ifndef CALCULATOR_H
#define CALCULATOR_H

#include "CalculatorCommand.h"
#include <memory>
#include <stack>

class Calculator
{
public:
  void compute(std::unique_ptr<CalculatorCommand> command);
  void undoLast();
  int result() const;
  void clear();

private:
  using CommandStack = std::stack<std::unique_ptr<CalculatorCommand>>;
  CommandStack stack_{};
  int current_{};
};

#endif /* CALCULATOR_H */
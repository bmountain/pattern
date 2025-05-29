#include "CalculatorCommand.h"

class Subtract : public CalculatorCommand
{
public:
  Subtract(int operand) : operand_(operand){};
  int execute(int n) const override { return n - operand_; }
  int undo(int n) const override { return n + operand_; }

private:
  int operand_{};
};
#include "CalculatorCommand.h"

class Add : public CalculatorCommand
{
public:
  Add(int operand) : operand_(operand){};
  int execute(int n) const override { return n + operand_; }
  int undo(int n) const { return n - operand_; }

private:
  int operand_{};
};
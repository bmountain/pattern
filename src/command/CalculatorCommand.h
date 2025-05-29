#ifndef CALCULATOR_COMMAND_H
#define CALCULATOR_COMMAND_H

class CalculatorCommand
{
public:
  CalculatorCommand() = default;
  virtual ~CalculatorCommand() = default;

  virtual int execute(int n) const = 0;
  virtual int undo(int n) const = 0;
};

#endif /* CALCULATOR_COMMAND_H */
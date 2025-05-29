#include "Add.h"
#include "Calculator.h"
#include "CalculatorCommand.h"
#include "Subtract.h"
#include <iostream>
#include <memory>
#include <vector>

void showValue(Calculator &calculator)
{
  std::cout << "current: " << calculator.result() << std::endl;
}

int main()
{
  using Commands = std::vector<std::unique_ptr<CalculatorCommand>>;
  Commands commands;
  commands.emplace_back(std::make_unique<Add>(1));
  commands.emplace_back(std::make_unique<Subtract>(2));
  commands.emplace_back(std::make_unique<Add>(3));

  Calculator calculator{};

  for (auto &command : std::move(commands)) {
    showValue(calculator);
    calculator.compute(std::move(command));
    showValue(calculator);
    std::cout << "\n";
  }

  calculator.undoLast();
  showValue(calculator);
}
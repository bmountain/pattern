#ifndef ENGINE_H
#define ENGINE_H

class Engine
{
public:
  virtual ~Engine() = default;
  virtual void start() const = 0;
  virtual void stop() const = 0;
};

#endif /* ENGINE_H */
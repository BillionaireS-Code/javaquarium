#ifndef __AQUARIUM_HPP__
#define __AQUARIUM_HPP__

#include <iostream>
#include <vector>
#include <memory>
#include "entity.hpp"
#include "fish.hpp"
#include "seaweed.hpp"

class Aquarium : public boost::noncopyable {
public:
  Aquarium();
  ~Aquarium();

  void add_entity(Entity &entity);

  std::size_t count_seaweed();

  void action();

private:
  std::vector<std::unique_ptr<Entity>> _entities;
};

#endif /* __AQUARIUM_HPP__ */
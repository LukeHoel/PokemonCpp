#ifndef pokedex_h
#define pokedex_h
#include <initializer_list>
#include <unordered_map>
#include <string>
#include "Move.h"
#include "../Config/Config.h"
struct Pokemon;
struct Pokedex{
  std::unordered_map<std::string, Move*> availableMoves;
  std::unordered_map<std::string, Pokemon*> availablePokemon;
};
Pokedex pokedex;
#endif
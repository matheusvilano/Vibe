//
// Created by matheusvilano on 2023-03-25.
//

#include <array>
#include <deque>
#include <list>
#include <map>
#include <memory>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <string>
#include <vector>

#ifndef VIBE_STDDEFS_H
#define VIBE_STDDEFS_H

// String typedefs/macros (for naming conventioon purposes).
using String = std::string;

// STD typedefs/macros (for naming convention purposes). Prefix "T" avoids issues with common names such as "Set".
#define TArray(Type, Length) std::array<Type, Length>
#define TDeque(Type) std::deque<Type>
#define TList(Type) std::list<Type>
#define TMap(KeyType, ValueType) std::map<KeyType, ValueType>
#define TMultiMap(KeyType, ValueType) std::multimap<KeyType, ValueType>
#define TMultiSet(Type) std::multiset<Type>
#define TQueue(Type) std::queue<Type>
#define TSet(Type) std::set<Type>
#define TStack(Type) std::stack<Type>
#define TVector(Type) std::vector<Type>

// Smart Pointer typedefs/macros (for naming convention purposes).
#define TUniquePtr(Type) std::unique_ptr<Type>
#define TSharedPtr(Type) std::shared_ptr<Type>
#define TWeakPtr(Type) std::weak_ptr<Type>

// Cast typedefs/macros (for naming convention purposes).
#define StaticCast(Type, Target) static_cast<Type>(Target)
#define DynamicCast(Type, Target)dynamic_cast<Type>(Target)
#define ReinterpretCast(Type, Target) reinterpret_cast<Type>(Target)

// Random typedefs/macros (for naming convention purposes).
using RandomDevice = std::random_device;
using UniformDistributionInt16 = std::uniform_int_distribution<int16_t>;
using MT19937 = std::mt19937;

#endif //VIBE_STDDEFS_H

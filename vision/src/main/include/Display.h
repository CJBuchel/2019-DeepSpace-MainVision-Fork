#pragma once

#include "Runnable.h"

class Display : public Runnable {
 public:
  void Init();
  void Periodic();
};
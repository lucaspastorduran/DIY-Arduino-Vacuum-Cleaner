#pragma once

#include <EngineController.h>

Class VacuumCleaner
{
  public:
    VacuumCleaner();
    ~VacuumCleaner();

    void runTick();

  private:
    EngineController* _engineController;
};

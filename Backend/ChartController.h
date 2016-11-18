#pragma once
#include <map>
#include <string>
#include <vector>
#include <ctime>
#include "Account.h"
#include "Error.h"

using namespace std;

class ChartController {
public:
  ChartController();
  void getBudgetPie(Error& err, map<string, float>&);
  void getBurndown(Error& err, vector<pair<time_t,float>>&); // daily
  void getBudgetBar(Error& err, map<string, float>&);
  void getHabitPie(Error& err, map<string, float>&);
}

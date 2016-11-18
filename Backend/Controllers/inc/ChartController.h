#include <map>
#include <string>

using namespace std;

class ChartController {
public:
  ChartController(Error& err); //set everything to null
  ChartController(Error& err, Budget, int); //int to specify for pie or bar
  ChartController(Error& err, Budget, period); //for burndown

  //accessors
  map<string, float>& getPie(Error& err); //1
  map<string, float>& getBar(Error& err); //2
  vector<pair<time_t,float>>& getBurndown(Error& err);

  //modifiers
  void setPie(Error& err, map<string, float>&);
  void setBurndown(Error& err, vector<pair<time_t,float>>& exp); // daily
  void setBudgetBar(Error& err, map<string, float>&);

private:
  map<string, float>& pieData;
  vector<pair<time_t,float>>& burnData;
  map<string, float>& barData;
}

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;



class LightController 
{

  public:
    LightController(int count)
    {
      cout<< "FileWriter: init" << endl;
      
      for (int i = 0; i < count; i++) { 
        lights.push_back(false);
      }
    }


    void turnLightOn(int position) {
      cout<< "Turned on light: " << position << endl;
      lights[position] = true;

    }

    void turnLightOff(int position) {
      cout << "Turned light " << position << " off" << endl;
      lights[position] = false;
    }

  private:
    vector<bool> lights;    
   
};



int main() {
  //Testing code
  LightController lc(4); 

  lc.turnLightOn(2);

  lc.turnLightOff(1);


}





#ifndef POLYGONIZER_H
#define POLYGONIZER_H

#include <array>
#include <vector>
#include <string>
#include <glm.hpp>

class Polygonizer
{
public:
  Polygonizer();
  ~Polygonizer();
  std::vector<glm::vec3> getPoints();
  std::vector<float> evaluate();
  void polygonize();

private:
  int m_size;
  int m_axisMin;
  int m_axisMax;
  int m_axisRange;
  std::string m_type;
  std::vector<glm::vec3> marchingCube( std::vector<glm::vec3> &_points, std::vector<float> &_values );
  glm::vec3 lerp( float _isolevel, glm::vec3 _p1, glm::vec3 _p2, float _val1, float _val2 );
};

#endif // POLYGONIZER_H

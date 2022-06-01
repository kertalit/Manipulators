#include <fstream>
#include <iostream>
#include <istream>

#include <string>

#include <sstream>
#include <regex>

struct Point3d
{
  double x = 0.;
  double y = 0.;
  double z = 0.;

  Point3d operator+(const Point3d& other) const
  {
    return { x + other.x, y + other.y, z + other.z };
  }
};

std::ostream& operator<<(std::ostream& stream, const Point3d& other)
{
  stream << other.x << ' ' << other.y << ' ' << other.z;
  return stream;
}

std::istream& operator>>(std::istream& stream, Point3d& other)
{
  stream >> other.x >> other.y >> other.z;
  return stream;
}

Point3d parserPoint(const std::string& line)
{
  std::stringstream ss(line);
  Point3d origin;

  ss >> origin;
  return origin;
}

void transform(std::string& line)
{
  const std::string toremove = "XxYyZz";
  auto pred = [&toremove](char current)
  {
    return toremove.find(current) != std::string::npos;
  };

  line.erase(std::remove_if(line.begin(), line.end(), pred), line.end());
  std::replace(line.begin(), line.end(), ';', ' ');
}

int main()
{
  std::ifstream file("path.txt");
  if (!file.is_open())
  {
    std::cout << "Fise is not open" << std::endl;
    return -1;
  }

  std::string line;
  std::getline(file, line);

  auto origin = parserPoint(line);

  while (!file.eof())
  {
    std::string line;
    std::getline(file, line);

    std::regex reg(" *[Xx]-?[0-9]*; *[Yy]-?[0-9]*; *[Zz]-?[0-9]*; *");

    std::smatch m;

    if ( !std::regex_match(line, m, reg) )
    {
      std::cout << origin << std::endl;
      std::cout << "error script" << std::endl;
      return -1;
    }

    transform(line);

    origin = origin + parserPoint(line);
  }
  
  std::cout << origin << std::endl;
}
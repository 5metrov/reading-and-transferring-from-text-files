#include <iostream>
#include <vector>
using namespace std;
#include <fstream> 
#include <string>
//для корректной работы кода нужны 2 текстовика: in.txt & out.txt
void osn(){
  vector<int> arrx; 
  vector<int> arry; 
  string line;

  ifstream in("in.txt"); // окрываем файл для чтения
  if (in.is_open())
  {
      int tmp_x = 0;
      int tmp_y = 0;
      while (!in.eof())
      {
        in >> tmp_x >> tmp_y;
        arrx.push_back(tmp_x);
        arry.push_back(tmp_y);
      }
  }
  in.close();     // закрываем файл

  ofstream out("out.txt");
  if (out.is_open())
  {
      int i = 0;
      out << "X: ";
      for (int a:arrx)
      {
        out << a << ' ';
      }
      out << '\n' << "Y: ";
      i = 0;
      for (int a:arry)
      {
        out << a << ' ';
      }
  }
}

int main(){
  osn();
  return 0;
}

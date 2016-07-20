#include <iostream>
#include <string>
using namespace std;

class Student
{
  //成员变量声明
public:
  std::string name2;
  //char* name;
  int age;
  int score;

  //声明成员函数
public:
  void say()
  {

    //printf("%s,的年龄是 %d，成绩是 %d\n", name, age, score);
    cout << name2 << endl;
    printf(" %d，成绩是 %d\n", age, score);
  }
};

class Student2
{
private:
  int age;
  string name;
  float score;

public:
  void setname(string name3)
  {
    name = name3;
    cout << name3 << endl;
  }
  void setage(int age3)
  {
    age = age3;
    cout << age3 << endl;
  }
  void setscore(int score3)
  {
    score = score3;
    cout << score3 << endl;
  }
};
class Student3
{
private:
  int age;
  string name;
  float score;

public:
  //Student3();
  Student3(string, int, float);
  void say2();
 };


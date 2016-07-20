#include <stdio.h>
#include <classes.h>

using namespace std;

Student3::Student3(string name4, int age4, float score4)
{
  name = name4;
  age = age4;
  score = score4;
}
void Student3::say2()
{
  cout << name << "的年龄是 " << age << "，成绩是 " << score << endl;
}
int main()
{
  Student stu1;
  stu1.name2 = "asdfasdf";
  //stu1.name = "abcd";
  stu1.age = 10;
  stu1.score = 90;
  stu1.say();

  Student2 stu2;
  stu2.setname("ffff");
  stu2.setage(30);
  stu2.setscore(99);

  Student3 stu3("ffffddd", 11, 91.00);
  stu3.say2();
}

#include <iostream>

using namespace std;

    struct Student
    {
        char name[50];
        int id;
        float score;
    };

    void input(Student *s)
    {
        cout << "请输入姓名、学号、成绩：" << endl;
        cin >> s->name >> s->id >> s->score;
    }

    void display(Student *s)
    {
        cout << "姓名：" << s->name << endl;
        cout << "学号：" << s->id << endl;
        cout << "成绩：" << s->score << endl;
    }

    int main()
    {
        Student  *s1= new Student;

        input(s1);
        display(s1);

        delete s1;
        return 0;
    }

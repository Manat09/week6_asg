#include "ACM.h"
#include "IEEE.h"
#include <algorithm>

struct Course{
    string courseName;
    int numberOfStudents;
    string lecturer;
};

template <class T>
class Student{
private:
    T studentName;
    T id;
    T age;
    T course;
    T activity;

    friend ostream &operator<<( ostream &output, const Student<T> &student ) {
        cout << "Name" << "\t\t" << "ID" << "\t\t" << "Age" << "\t\t" << "Courses" << "\t\t" << "Activities" <<endl;
        cout << "---------------------------------------------------------------------------" << endl;
        output << student.studentName << "\t\t" << student.id << "\t\t" << student.age << "\t\t" << student.course << "\t\t" << student.activity << endl;
        return output;
    }

    friend istream &operator>>( istream &input, Student<T> &student ) {
        input >> student.studentName >> student.id >> student.age >> student.course >> student.activity;
        return input;
    }

    Student& operator=(const Student& other){
        if (this->studentName != other.studentName && this->course != other.course && this->age != other.age &&
            this->id != other.id && this->activity != other.activity){
            this->studentName = other.studentName;
            this->course = other.course;
            this->age = other.age;
            this->id = other.id;
            this->activity = other.activity;
        }
    }

public:
    Student(T studentName, T id, T age, T course, T activity): studentName(studentName), id(id), age(age), course(course),
                                                               activity(activity){}
    Student(){}

    T getNameOfStudent() const {
        return studentName;
    }
    T getId() const {
        return id;
    }
    T getAge() const {
        return age;
    }
    T getCourse() const {
        return course;
    }
    T getActivity() const {
        return activity;
    }
    void setNameOfStudent(T nameOfStudent) {
        Student::studentName = nameOfStudent;
    }

    void setId(T id) {
        id = id;
    }

    void setAge(T age) {
        Student::age = age;
    }

    void setCourse(T course) {
        course = course;
    }

    void setActivity(T activity) {
        activity = activity;
    }

    bool operator==(const string other){
        return this->studentName == other;
    }
};
void setDefault(Student<string> &student){
    student.setActivity("Unknown");
    student.setAge("Unknown");
    student.setCourse("Unknown");
    student.setId("Unknown");
    student.setNameOfStudent("Unknown");
}

int main() {
    vector <Student<string>> student_objects[15];
    for (int i=0; i<6; i++) {
        student_objects->push_back(Student<string>("Manat", "00159", "18", "C++", "ACM"));
        student_objects->push_back(Student<string>("Yerasyl", "00923", "19", "Java", "IEEE"));
        student_objects->push_back(Student<string>("Abdulla", "00681", "19", "Python", "IEEE"));
    }
    /*====================================================================================================================================
     *====================================================================================================================================
     *====================================================================================================================================
     */
    Student<string> tempStudent;
    cin>>tempStudent;
    student_objects->push_back(tempStudent);

    for (int i=0; i<13; i++){
        cout << student_objects->at(i)<<endl;
    }

    for_each(student_objects->begin(), student_objects->end(), *setDefault);
    for (int i=0; i<2; i++){
        cout << student_objects->at(i)<<endl;
    }

}


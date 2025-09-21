#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// ===================== Student Class =====================
class Student
{
private:
    string name;
    int age;
    int numID;
    float GPA; 
    int gradeLevel;
    vector<string> enrolledCourses;

public:
    Student(string n, int a, int ni, float g, int gl)
    {
        name = n;
        age = a;
        numID = ni;
        GPA = g;
        gradeLevel = gl;
    }

    void setName(string n) { name = n; }
    void setAge(int a) { age = a; }
    void setNumID(int ni) { numID = ni; }
    void setGPA(float g) { GPA = g; }
    void setGradeLevel(int gl) { gradeLevel = gl; }
    
    string getName() const { return name; }
    int getAge() const { return age; }
    int getNumID() const { return numID; }
    float getGPA() const { return GPA; }
    int getGradeLevel() const { return gradeLevel; }
    vector<string> getEnrolledCourses() const { return enrolledCourses; }

    void addCourse(string courseName) 
    {
        enrolledCourses.push_back(courseName);
    }

    void displayStudentInfo() const
    {
        cout << "Student Name = " << name << "\n";
        cout << "Student Age = " << age << "\n";
        cout << "Student Number ID = " << numID << "\n";
        cout << "Student GPA = " << GPA << "\n";
        cout << "Student Grade Level = " << gradeLevel << "\n";
        cout << "Enrolled Courses: ";
        if (enrolledCourses.empty()) 
        {
            cout << "None";
        } 
        else 
        {
            for (size_t i = 0; i < enrolledCourses.size(); i++)
            {
                cout << enrolledCourses[i];
                if (i < enrolledCourses.size() - 1) cout << ", ";
            }
        }
        cout << "\n=================================\n";
    }

    void updateInteractive()
    {
        char choice;
        cout << "Do You Want Update The Name? (y/n): ";
        cin >> choice;
        if (choice == 'y' || choice == 'Y')
        {
            cout << "Enter New Name: ";
            cin.ignore();
            getline(cin, name);
        }
        cout << "Do You Want Update The Age? (y/n): ";
        cin >> choice;
        if (choice == 'y' || choice == 'Y')
        {
            cout << "Enter New Age: ";
            cin >> age;
        }
        cout << "Do You Want Update The ID? (y/n): ";
        cin >> choice;
        if (choice == 'y' || choice == 'Y')
        {
            cout << "Enter New ID: ";
            cin >> numID;
        }
        cout << "Do You Want Update The GPA? (y/n): ";
        cin >> choice;
        if (choice == 'y' || choice == 'Y')
        {
            cout << "Enter New GPA: ";
            cin >> GPA;
        }
        cout << "Do You Want Update The Grade Level? (y/n): ";
        cin >> choice;
        if (choice == 'y' || choice == 'Y')
        {
            cout << "Enter New Grade Level: ";
            cin >> gradeLevel;
        }

        cout << "Student Information Updated Successfully✅" << "\n";
    }
};

// ===================== Teacher Class =====================
class Teacher
{
private:
    string name;
    int age;
    int teacherID;
    string subject;
    int yearsOfExperience;

public:
    Teacher(string n, int a, int t, string s, int ye)
    {
        name = n;
        age = a;
        teacherID = t;
        subject = s; 
        yearsOfExperience = ye;
    }

    void setName(string n) { name = n; }
    void setAge(int a) { age = a; }
    void setTeacherID(int t) { teacherID = t; }
    void setSubject(string s) { subject = s; }
    void setYearsOfExperience(int ye) { yearsOfExperience = ye; }
    
    string getName() const { return name; }
    int getAge() const { return age; }
    int getTeacherID() const { return teacherID; }
    string getSubject() const { return subject; }
    int getYearsOfExperience() const { return yearsOfExperience; }

    void displayTeacherInfo() const
    {
        cout << "Teacher Name = " << name << "\n";
        cout << "Teacher Age = " << age << "\n";
        cout << "Teacher ID = " << teacherID << "\n";
        cout << "Teacher Subject = " << subject << "\n";
        cout << "Teacher Years Of Experience = " << yearsOfExperience << "\n";
        cout << "=================================\n";
    }

    void updateInteractive()
    {
        char choice;
        cout << "Do You Want Update The Name? (y/n): ";
        cin >> choice;
        if (choice == 'y' || choice == 'Y')
        {
            cout << "Enter New Name: ";
            cin.ignore();
            getline(cin, name);
        }
        cout << "Do You Want Update The Age? (y/n): ";
        cin >> choice;
        if (choice == 'y' || choice == 'Y')
        {
            cout << "Enter New Age: ";
            cin >> age;
        }
        cout << "Do You Want Update The ID? (y/n): ";
        cin >> choice;
        if (choice == 'y' || choice == 'Y')
        {
            cout << "Enter New ID: ";
            cin >> teacherID;
        }
        cout << "Do You Want Update The Subject? (y/n): ";
        cin >> choice;
        if (choice == 'y' || choice == 'Y')
        {
            cout << "Enter New Subject: ";
            cin.ignore();
            getline(cin, subject);
        }
        cout << "Do You Want Update The Years Of Experience? (y/n): ";
        cin >> choice;
        if (choice == 'y' || choice == 'Y')
        {
            cout << "Enter New Years Of Experience: ";
            cin >> yearsOfExperience;
        }

        cout << "Teacher Information Updated Successfully✅" << "\n";
    }
};

// ===================== Course Class =====================
class Course
{
private:
    string courseName;
    int courseCode;
    string teacherName;

public:
    Course(string cn, int cc, string tn)
    {
        courseName = cn;
        courseCode = cc;
        teacherName = tn;
    }

    void setCourseName(string n) { courseName = n; }
    void setCourseCode(int c) { courseCode = c; }
    void setTeacherName(string tn) { teacherName = tn; }


    string getCourseName() const { return courseName; }
    int getCourseCode() const { return courseCode; }
    string getTeacherName() const { return teacherName; }

    void displayCoursesInfo() const
    {
        cout << "Course Name = " << courseName << "\n";
        cout << "Course Code = " << courseCode << "\n";
        cout << "Teacher Name = " << teacherName << "\n";
        cout << "=================================\n";
    }
};

// ===================== SchoolSystem Class =====================
class SchoolSystem
{
private:
    vector<Student> Students;
    vector<Teacher> Teachers;
    vector<Course> Courses;

public:
    void addStudent()
    {
        string newName;
        int newAge, newID, newGradeLevel;
        float newGPA;

        cout << "Enter Student Name: ";
        getline(cin, newName);
        
        for (const auto &s : Students)
        {
            if (s.getName() == newName)
            {
                cout << "Error: Student With This Name Already Exists!" << endl;
                return;
            }
        }

        cout << "Enter Student Age: ";
        cin >> newAge;
        
        cout << "Enter Student ID: ";
        cin >> newID;
        
        for (const auto &s : Students)
        {
            if (s.getNumID() == newID)
            {
                cout << "Error: Student With This ID Already Exists!" << endl;
                return;
            }
        }

        cout << "Enter Student GPA: ";
        cin >> newGPA;
        
        cout << "Enter Student Grade Level: ";
        cin >> newGradeLevel;

        Student newStudent(newName, newAge, newID, newGPA, newGradeLevel);
        Students.push_back(newStudent);
        
        cout << "Student Added Successfully✅" << endl;
    }

    void addTeacher()
    {
        string newName, newSubject;
        int newAge, newID, newExperience;

        cout << "Enter Teacher Name: ";
        getline(cin, newName);
        
        for (const auto &t : Teachers)
        {
            if (t.getName() == newName)
            {
                cout << "Error: Teacher With This Name Already Exists!" << endl;
                return;
            }
        }

        cout << "Enter Teacher Age: ";
        cin >> newAge;
        
        cout << "Enter Teacher ID: ";
        cin >> newID;
        
        for (const auto &t : Teachers)
        {
            if (t.getTeacherID() == newID)
            {
                cout << "Error: Teacher With This ID Already Exists!" << endl;
                return;
            }
        }

        cout << "Enter Teacher Subject: ";
        cin.ignore();
        getline(cin, newSubject);
        
        cout << "Enter Years Of Experience: ";
        cin >> newExperience;

        Teacher newTeacher(newName, newAge, newID, newSubject, newExperience);
        Teachers.push_back(newTeacher);
        
        cout << "Teacher Added Successfully✅" << endl;
    }

    void addCourse()
    {
        string newCourseName, newTeacherName;
        int newCourseCode;

        cout << "Enter Course Name: ";
        getline(cin, newCourseName);
        
        cout << "Enter Course Code: ";
        cin >> newCourseCode;
        
        for (const auto &c : Courses)
        {
            if (c.getCourseCode() == newCourseCode)
            {
                cout << "Error: Course With This Code Already Exists!" << endl;
                return;
            }
        }

        cout << "Enter Teacher Name For This Course: ";
        cin.ignore();
        getline(cin, newTeacherName);
        
        bool teacherExists = false;
        for (const auto &t : Teachers)
        {
            if (t.getName() == newTeacherName)
            {
                teacherExists = true;
                break;
            }
        }
        
        if (!teacherExists)
        {
            cout << "Warning: Teacher not found in system, but course will be added anyway." << endl;
        }

        Course newCourse(newCourseName, newCourseCode, newTeacherName);
        Courses.push_back(newCourse);
        
        cout << "Course Added Successfully✅" << endl;
    }

    void enrollStudentInCourse()
    {
        string studentName, courseName;
        cout << "Enter student name: ";
        getline(cin, studentName);

        cout << "Enter course name: ";
        getline(cin, courseName);

        Student* foundStudent = nullptr;
        for (auto &s : Students)
        {
            if (s.getName() == studentName)
            {
                foundStudent = &s;
                break;
            }
        }

        if (!foundStudent)
        {
            cout << "Error: Student not found!" << endl;
            return;
        }

        Course* foundCourse = nullptr;
        for (auto &c : Courses)
        {
            if (c.getCourseName() == courseName)
            {
                foundCourse = &c;
                break;
            }
        }

        if (!foundCourse)
        {
            cout << "Error: Course not found!" << endl;
            return;
        }

        vector<string> enrolled = foundStudent->getEnrolledCourses();
        for (const string &course : enrolled)
        {
            if (course == courseName)
            {
                cout << "Error: Student is already enrolled in this course!" << endl;
                return;
            }
        }

        foundStudent->addCourse(foundCourse->getCourseName());
        cout << studentName << " enrolled in " << courseName
             << " with " << foundCourse->getTeacherName() << "!✅" << endl;
    }

    void displayAllStudent()
    {
        if (Students.empty())
        {
            cout << "No Students Found." << "\n";
            return;
        }
        cout << "----- Students List -----" << endl; 
        for (const auto &s : Students)
        {
            s.displayStudentInfo();
        }
    }

    void displayAllTeacher()
    {
        if (Teachers.empty())
        {
            cout << "No Teachers Found." << "\n";
            return;
        }
        cout << "----- Teachers List -----" << endl; 
        for (const auto &t : Teachers)
        {
            t.displayTeacherInfo();
        }
    }

    void displayAllCourses()
    {
        if (Courses.empty())
        {
            cout << "No Courses Found." << "\n";
            return;
        }
        cout << "----- Courses List -----" << endl; 
        for (const auto &c : Courses)
        {
            c.displayCoursesInfo();
        }
    }

    void updateStudent()
    {
        int searchId;
        cout << "Enter Student ID to update: ";
        cin >> searchId;

        for (auto &s : Students) 
        {
            if (s.getNumID() == searchId)
            {
                s.updateInteractive();
                return;
            }
        }
        cout << "Student Not Found!" << endl;
    }

    void updateTeacher()
    {
        int searchId;
        cout << "Enter Teacher ID to Update: ";
        cin >> searchId;

        for (auto &t : Teachers)
        {
            if (t.getTeacherID() == searchId)
            {
                t.updateInteractive();
                return;
            }
        }
        cout << "Teacher Not Found!" << endl;
    }

    void updateCourse()
    {
        int searchCode;
        cout << "Enter Course Code to Update: ";
        cin >> searchCode;

        for (auto &c : Courses)
        {
            if (c.getCourseCode() == searchCode)
            {
                string newCourseName, newTeacherName;
                int newCourseCode;

                cout << "Enter New Course Name: ";
                cin.ignore();
                getline(cin, newCourseName);

                cout << "Enter New Course Code: ";
                cin >> newCourseCode;
                cin.ignore();
                
                cout << "Enter New Teacher Name: ";
                getline(cin, newTeacherName);

                c.setCourseName(newCourseName);
                c.setCourseCode(newCourseCode);
                c.setTeacherName(newTeacherName);

                cout << "Course Updated Successfully✅" << endl;
                return;
            }
        }
        cout << "Course Not Found!" << endl;
    }
};

// ===================== Main Function =====================
int main()
{
    SchoolSystem School;
    int choice;

    do
    {
        cout << "\n===== School Management System =====" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Add Teacher" << endl;
        cout << "3. Add Course" << endl;
        cout << "4. Enroll Student In Course" << endl;
        cout << "5. Display All Students" << endl;
        cout << "6. Display All Teachers" << endl;
        cout << "7. Display All Courses" << endl;
        cout << "8. Update Student" << endl;
        cout << "9. Update Teacher" << endl;  
        cout << "10. Update Course" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter Choice: ";
        cin >> choice;
        cin.ignore();

        switch(choice)
        {
            case 1:
                School.addStudent();
                break;
            case 2:
                School.addTeacher();
                break;
            case 3:
                School.addCourse();
                break;
            case 4:
                School.enrollStudentInCourse();
                break;
            case 5:
                School.displayAllStudent();
                break;
            case 6:
                School.displayAllTeacher();
                break;
            case 7:
                School.displayAllCourses();
                break;
            case 8:
                School.updateStudent();
                break;
            case 9:
                School.updateTeacher();
                break;
            case 10:
                School.updateCourse();
                break;
            case 0:
                cout << "Thank You For Using School Management System!👋\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
            
    } while (choice != 0);
    
    return 0;
}
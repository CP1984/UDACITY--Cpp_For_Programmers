#pragmausing namespace std;

//main.h 

class Student
{
public:
	int studentID;
	int grades[10];

	void setStudentID(int id) {
		this->studentID = id;
	}

	void setGrade(int j, int grade) {
		this->grades[j] = grade;
	}

	int getGrade(int i) {
		return this->grades[i];
	}

	void printGrades() {
		for (int i = 0; i < 10; i++) {
			cout << grades[i] << ' ';
		}
	}

	int getMin() {
		int min;
		min = grades[0];
		for (int i = 1; i < 10; i++) {
			if (min > grades[i]) {
				min = grades[i];
			}
		}
		return min;
	}

	int getMax() {
		int max;
		max = grades[0];
		for (int i = 1; i < 10; i++) {
			if (max < grades[i]) {
				max = grades[i];
			}
		}
		return max;
	}

	double getAverageGrade() {
		float sum = 0.0;
		for (int i = 0; i < 10; i++) {
			sum = sum + grades[i];
		}
		return sum / 10.0;
	}
};

//********************
class CourseEnrollment
{
public:
	Student students[6];
	int courseMinGrade;
	int courseMaxGrade;
	float courseAvgGrade;
	int grades[60];

	void addStudents(Student* students) {
		for (int i = 0; i < 6; i++) {
			this->students[i] = students[i];
		}
	}

	int *getAllGrades() {
		int k = 0;
		for (int i = 0; i < 6; i++) {
			for (int j = 0; j < 10; j++) {
				this->grades[k] = this->students[i].getGrade(j);
				k = k + 1;
			}
		}
		return grades;
	}

	int *sortAllGrades()
	{
		for (int i = 0; i < 60; i++)
		{
			for (int j = 0; j < 59 - i; j++)
			{
				if (grades[j] > grades[j + 1])
				{
					int temp;
					temp = grades[j];
					grades[j] = grades[j + 1];
					grades[j + 1] = temp;
				}
			}
		}
		return grades;
	}

	int getMinGrade() {
		sortAllGrades();
		return grades[0];
	}

	int getMaxGrade() {
		sortAllGrades();
		return grades[59];
	}

	double getAvgGrade() {
		float sum = 0.0;
		for (int i = 0; i < 59; i++) {
			sum = sum + grades[i];
		}
		return sum / 60.0;
	}
};
once

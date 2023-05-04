package test01;

public class Student {
private String name;
private int korean;
private int english;
private int math;
private int science;
private float num;
public Student() {
}
public Student(String kim, int korean, int english, int math, int science) {
	super();
	this.name = kim;
	this.korean = korean;
	this.english = english;
	this.math = math;
	this.science = science;
}
public String getName() {
	return name;
}
public void setName(String name) {
	this.name = name;
}
public int getKorean() {
	return korean;
}
public void setKorean(int korean) {
	this.korean = korean;
}
public int getEnglish() {
	return english;
}
public void setEnglish(int english) {
	this.english = english;
}
public int getMath() {
	return math;
}
public void setMath(int math) {
	this.math = math;
}
public int getScience() {
	return science;
}
public void setScience(int science) {
	this.science = science;
}
public double getAvg()
{	num = (this.korean+this.english+this.math+this.science)/4.0f;
	return (this.korean+this.english+this.math+this.science)/4.0;
}
public String getGrade( )
{if (num<= 100 && num>=90) 
{
	return "A";}
	else if(num< 90 && num>=70) 
	{
	return "B";	
	}
	else if(num< 80 && num>=50) 
	{
	return "C";	
	}
	else if(num< 50 && num>=30) 
	{
	return "D";	
	}
	else {
	return "F";	
	}
}
	
}


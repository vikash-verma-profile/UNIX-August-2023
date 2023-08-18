class Person {
    String Name;

    public Person(String name) {
        this.Name = name;
    }
    @Override
    public String toString(){
       return "Name is : "+Name;
    }
}

class Student extends Person {
    public Student(String name) {
        super(name);
    }

    public void Study() {
        System.out.println("Student is Studying");
    }
}

class Teacher extends Person {
    public Teacher(String name) {
        super(name);
    }

    public void Explain() {
        System.out.println("Teacher is Explaining");
    }
}

public class Problem2 {
    public static void main(String args[]) {

        Person[] persons=new Person[3];
        for(int index=0;index<3;index++){
            if(index==0){
                persons[index]=new Teacher("Vikash Verma");
            }
            else{
                persons[index]=new Student("Ravi Kumar" + index);
            }
        }

        for (int i = 0; i < persons.length; i++) {
             if(i==0){
                ((Teacher)persons[i]).Explain();
            }
            else{
                ((Student)persons[i]).Study();
            }
        }
    }
}
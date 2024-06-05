class employee{
    private String name;
    private String designation;

    public employee(String name,String designation){
        this.name = name;
        this.designation  = designation;    
    }

    public String getname(){
        return name;
    }

    public void setname(String name){
        this.name = name;
    }

    public String get_designation(){
        return designation;
    }

    public void  set_designation(String designation){
        this.designation = designation;
    }

    public void get_details(){
        System.out.println("name:"+name);
        System.out.println("designation:"+designation);
    }

}

class emp_salary extends employee{
    private double salary;

    public emp_salary(String name,String designation, double salary){
        super(name,designation);
        this.salary = salary;

    }

    public double get_salary(){
        return salary;
    }

    public void set_salary(double salary){
        this.salary = salary;
    }


    public void get_details(){
        super.get_details();
        System.out.println("salary:"+salary);
    }

}

class emp{
    public static void main(String args[]){
        employee emp = new employee("vatsal","it");

        emp.get_details();

        emp_salary salary_employeed = new emp_salary("john","manger",10000);
        salary_employeed.get_details();
    }
}

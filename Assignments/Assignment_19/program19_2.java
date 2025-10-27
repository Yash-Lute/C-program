 class Logic
 {
    void displayGrade(int marks)
    {
        if (marks>=90) 
        {
            System.out.println("A+");
        }
        else if (marks>=80) {
            System.out.println("A");
        }
        else if (marks>=70) {
            System.out.println("B+");
        }
        else if (marks>=60) {
            System.out.println("B");
        }
        else if (marks>=50) {
            System.out.println("C");
        }
        else
        {
               System.out.println("F");
        }
    }
 }
 class program19_2 {
    public static void main(String[] args) 
    {
        Logic lobj=new Logic();
        lobj.displayGrade(82);
    }
}

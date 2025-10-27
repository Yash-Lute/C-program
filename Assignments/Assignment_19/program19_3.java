 class Logic
 {
    void checkDivisible(int marks)
    {
    if (marks%5==0&marks%11==0) 
    {
        System.out.println(marks+"  is divisible by 5 and 11");
    }
    else
    {
        System.out.println("is not divisible by 5 and 11");
    }
    }
 }
 class program19_3 {
    public static void main(String[] args) 
    {
        Logic lobj=new Logic();
        lobj.checkDivisible(55);
    }
}

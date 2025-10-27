 class Logic
 {
    void printDivisibleBy2and3(int num)
    {
          if (num%2==0&&num%3==0) 
          {
            System.out.println(num+"  is divisible by both 2 and 3");
          }
          else
          {
             System.out.println(num+"  is not divisible by both 2 and 3");
          }
     
      
       
    }
 }
 class program21_5
 {
    public static void main(String[] args) 
    {
        Logic lobj=new Logic();
        lobj.printDivisibleBy2and3(30);
    }
}


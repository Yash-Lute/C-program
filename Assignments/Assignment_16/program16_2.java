 class Logic
 {
    void checkEvenOdd(int num)
    { 
      if (num%2==0) 
      {
          System.out.println(num+"  is even number"); 
      }
      else
      {
         System.out.println(num+"   is odd number"); 
      }    
    }
 }
 class program16_2 
 {
 public static void main(String[] args) 
 {
    Logic lobj=new Logic();
    lobj.checkEvenOdd(7);
 }   
}

class Logic
 {
    void countDigits(int num)
    { 
       int iDigit=0,iCount=0;
       while (num!=0) 
       {
          iDigit=num%10;
          iCount++;
          num=num/10;
       }
       System.out.println(iCount);
       
    }
 }
public class program16_5 {
    public static void main(String[] args) {
        Logic lobj=new Logic();
        lobj.countDigits(7865);
    }
}

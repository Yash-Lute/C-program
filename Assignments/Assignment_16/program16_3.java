 class Logic
 {
    void findFactorial(int num)
    { 
        int iFactorial=1,iCnt=0;
        for(iCnt=num;iCnt>=1;iCnt--)
        {
            iFactorial=iFactorial*iCnt;
        }
        System.out.println(iFactorial);
    }
 }
class program16_3 
{
    public static void main(String[] args) {
        Logic lobj=new Logic();
    lobj.findFactorial(5);
    }
    
}

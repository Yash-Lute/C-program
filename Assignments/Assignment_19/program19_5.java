 class Logic
 {
    void calculatePower(int base,int exp)
    {
       int iCnt=0,imultiply=1;
       for(iCnt=1;iCnt<=exp;iCnt++)
       {
             imultiply= imultiply*base;
       }
       System.out.println(imultiply);
    }
 }
 class program19_5 {
    public static void main(String[] args) 
    {
        Logic lobj=new Logic();
        lobj.calculatePower(2,5);
    }
}

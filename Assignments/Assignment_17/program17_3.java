class Logic
{
    void findMax(int a,int b)
    {
        if (a>b) {
            System.out.println(a+"  is greater than "+b);
        }
        else
        {
            System.out.println(b+"  is greater than "+a);
        }
    }
}
class program17_3 {
    public static void main(String[] args) 
    {
        Logic obj=new Logic();
        obj.findMax(20, 15);
        
    }
}

class Logic
{
    void findMin(int a,int b,int c)
    {
        if (a<b&&a<c) 
        {
           System.out.println(a+"   is smallest");   
        }
        else if (b<c&&b<a) 
        {
             System.out.println(b+"   is smallest"); 
        }
        else
        {
             System.out.println(c+"   is smallest"); 
        }
    }
}
class program17_4 {
public static void main(String[] args) {
    Logic lobj=new Logic();
    lobj.findMin(3, 7, 2);
}    
}

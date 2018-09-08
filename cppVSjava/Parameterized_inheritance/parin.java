class stud
{
    public int sr_no;
    public stud(int no)
    {
        System.out.println("Super class constructor called...");
        sr_no=no;
    }
}
class marks extends stud
{
    public int er_no;
    public marks(int a,int b)
    {
        super(b);                                     //*****_________******//
        System.out.println("Subclass constructor called...");
        er_no=a;
    }
}
public class Parajav {
    public  static void main(String args[])
    {
        marks ob1=new marks(10,20);
    }
}


import java.util.*;

class StringDemo {
    public String str1 = null;
    public String str2 = null;
    public int iValue = 0;

    public StringDemo(String str1, String str2, int iValue) {
        this.str1 = str1;
        this.str2 = str2;
        this.iValue = iValue;
    }

    public String StrNCatX() {
        String sResult = null;

        if (iValue >= str2.length()) {
            return str1.concat(str2);
        } else {
            return str1.concat(str2.substring(0, iValue));
        }
    }
}

class Question1 {
    public static void main(String args[]) {
        Scanner sobj = new Scanner(System.in);
        String str1 = null;
        String str2 = null;
        String sRet = null;
        int iNo = 0;

        System.out.println("Enter the first String : ");
        str1 = sobj.nextLine();

        System.out.println("Enter the Second String : ");
        str2 = sobj.nextLine();

        System.out.println("Value for n : ");
        iNo = sobj.nextInt();

        StringDemo SDobj = new StringDemo(str1, str2, iNo);

        sRet = SDobj.StrNCatX();
        System.out.println("Result : " + sRet);

    }
}
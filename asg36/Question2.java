import java.util.*;

class StringDemo {
    public String str1 = null;
    public String str2 = null;

    public StringDemo(String str1, String str2) {
        this.str1 = str1;
        this.str2 = str2;
    }

    public boolean StrCmpX() {
        if (str1.equals(str2)) {
            return true;
        } else {
            return false;
        }
    }
}

class Question2 {
    public static void main(String args[]) {
        Scanner sobj = new Scanner(System.in);
        String str1 = null;
        String str2 = null;
        boolean bRet = false;

        System.out.println("Enter the first String : ");
        str1 = sobj.nextLine();

        System.out.println("Enter the Second String : ");
        str2 = sobj.nextLine();

        StringDemo SDobj = new StringDemo(str1, str2);

        bRet = SDobj.StrCmpX();
        if (bRet == true) {
            System.out.println("True");
        } else {
            System.out.println("False");
        }

    }
}
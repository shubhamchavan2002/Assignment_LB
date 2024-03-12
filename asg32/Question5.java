import java.util.*;

class StringDemo {
    public String str = null;

    public StringDemo(String str) {
        this.str = str;
    }

    public void Reverse() {
        char Arr[] = str.toCharArray();
        int iCnt = 0;
        for (iCnt = Arr.length - 1; iCnt >= 0; iCnt--) {
            System.out.print(Arr[iCnt]);
        }

    }
}

class Question5 {
    public static void main(String args[]) {
        Scanner sobj = new Scanner(System.in);
        String str = null;

        System.out.println("Enter the String : ");
        str = sobj.nextLine();

        StringDemo SDobj = new StringDemo(str);

        SDobj.Reverse();

        sobj.close();

    }
}
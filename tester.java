// overloading


class Registration {
    public static char[] getPassportNo;
    String customerName;
    String panCardNo;
    int voteId;
    String passportNo;
    int licenseNo;
    long[] telephoneNo;
    Registration(String customerName , String passportNo ,long[] telphoneNo){
        this.customerName=customerName;
        this.passportNo=passportNo;
        this.telephoneNo=telphoneNo;
        System.out.println("Congratulations " + customerName + "!!! you have been successfully registered for our services with the following details:");
        System.out.println("Passport number: " + passportNo);
        System.out.println("Phone numbers: ");
        for (long number : telephoneNo) {
            System.out.print(number);
            System.out.println();
        }
        System.out.println();
    }
    Registration(String customerName, int licenseNo,String panCardNo, long[] telphoneNo){
        this.customerName=customerName;
        this.licenseNo=licenseNo;
        this.panCardNo=panCardNo;
        this.telephoneNo=telphoneNo;
        System.out.println("Congratulations " + customerName + "!!! you have been successfully registered for our services with the following details:");
        System.out.println("LicesenseNo:"+ licenseNo);
        System.out.println("Pan card no:"+panCardNo);
        for(long number:telphoneNo){
            System.out.print(number);
            System.out.println();
        }
        System.out.println();
    }
    Registration(String customerName, int voteId, long[] telphoneNo){
        this.customerName=customerName;
        this.voteId=voteId;
        this.telephoneNo=telphoneNo;
        System.out.println("Congratulations " + customerName + "!!! you have been successfully registered for our services with the following details:");

    }
    Registration(String customerName,String panCardNo,int voteId,long[] telephoneNo){
        this.customerName=customerName;
        this.panCardNo=panCardNo;
        this.telephoneNo=telephoneNo;
        System.out.println("Congratulations " + customerName + "!!! you have been successfully registered for our services with the following details:");
    }
    String getCustomerName(){
        return customerName;
    }
    String getpanCardNo(){
        return panCardNo;
    }
    int getVoterId(){
        return voteId;
    }
    String getPassportNo(){
        return passportNo;
    }
    int getLicensenNo(){
        return licenseNo;
    }
    long[] getTelephoneNo() {
        return telephoneNo;
    }
}
public class tester {
    public static void main(String args[]){
        long [] telephoneNo1={9452425421L,7676765252L};
        Registration r=new Registration("princi", "MN123", telephoneNo1);
        Registration r1=new Registration("princi", 0,"782dd" ,telephoneNo1);
        System.out.println(r);
        System.out.println(r1);
    }
}

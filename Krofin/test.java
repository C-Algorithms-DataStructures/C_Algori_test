class A {
String name = "HELLO" ;
};
class B extends A {
int name = 30 ;
public void print(){
System.out.println(super.name) ;
System.out.println(name) ;
}
}
public class test {
public static void main(String args[]){
B b = new B() ;
b.print() ;
}
};

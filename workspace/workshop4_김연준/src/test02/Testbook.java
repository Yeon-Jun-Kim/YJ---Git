package test02;

public class Testbook {

	public static void main(String[] args) {
	Book sql = new Book("SQL Plus", 50000, 5.0);
	Book java = new Book("Java 2.0", 40000, 3.0);
	Book jsp = new Book("JSP Servlet", 60000, 6.0);
	
	System.out.printf("%s %.1f%% %d원 %.1f \n", sql.getBookName(),sql.getBookDiscountRate(), sql.getBookPrice(), sql.getBookPrice() * (100-sql.getBookDiscountRate()) /100.0  );
	System.out.printf("%s %.1f%% %d원 %.1f \n", java.getBookName(),java.getBookDiscountRate(), java.getBookPrice(), java.getBookPrice() * (100-java.getBookDiscountRate()) /100.0  );
	System.out.printf("%s %.1f%% %d원 %.1f \n", jsp.getBookName(),jsp.getBookDiscountRate(), jsp.getBookPrice(), jsp.getBookPrice() * (100-jsp.getBookDiscountRate()) /100.0  );
	
	
	




	}}

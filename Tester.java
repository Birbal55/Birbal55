//Observe the output for different values of customerType
class Tester {
	public static void main(String[] args) {
		double discount;
		String customerType = "Regular";
		switch (customerType) {
		case "Regular":
			 discount=5;

		case "Premium":
			 discount=10;

		default:
			discount = 0;
		}
		System.out.println("Customer has got discount of " + discount + "%");
	}
}
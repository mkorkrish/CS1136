#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int num_spools,
		num_readytoship,
		num_backordered;
	double spool_price,
		spool_charges,
		shipping,
		discount,
		total_charges,
		charge;

	
}
bool getOrder(int num_spools, double discount, char custom, double total_charges, double charge)
{
	cout << "Please enter the number of spools ordered: " << endl;
	cin >> num_spools;
	if (num_spools < 1)
	{
		cout << "Spools must be at least one.\n";
		return 0;
	}
	cout << "Enter the discount percentage for the customer: " << endl;
	cin >> discount;
	if (discount < 0)
	{
		cout << "The percentage cannot be negative.\n";
		return 0;
	}
	cout << "Does the order include custom shipping and handling charges? [Enter Y for Yes or N for No]: ";
	cin >> custom;
	if (custom != 'Y' && custom != 'N')
	{
		cout << "The response should be Y for Yes or N for No.\n";
		return 0;
		if (custom == 'Y')
		{
			cout << "Enter the shipping and handling charge: ";
			cin >> charge;
			if (charge < 0) {
				cout << "Shipping and handling cannot be negative.\n";
				return 0;
			}
			return 0;
		}
	}
}
double calculateSpoolCharges(int num_spools, double discount)
{
	const double STANDARD = 134.95;
	double spool_charges = num_spools * STANDARD;
	double discount_amount = spool_charges * (discount / 100);
	return spool_charges - discount_amount;
	
}
double calculateShippingCharges(int num_spools, char custom, double charge) {
	const double STANDARD_CHARGE = 15.0;
	double shipping_charges = num_spools * STANDARD_CHARGE;
	if (custom == 'Y') {
		shipping_charges = num_spools * charge;
	}
	return shipping_charges;
}
void displayOrderSummary(int num_backordered, int num_readytoship, double spool_charges, double shipping_charges, double total_charges, double discount) {
	cout << "\t\tOrder Summary\n";
	cout << "==============================\n";
	cout << num_backordered << " spools are on back order.\n";
	cout << num_readytoship << " spools are ready to ship.\n";
	cout << "The charges for " << num_readytoship << " spools (including a " << fixed << setprecision(1) << discount << "% discount): $" << fixed << setprecision(2) << spool_charges << endl;
	cout << "Shipping and handling for " << num_readytoship << " spools: $" << fixed << setprecision(2) << shipping_charges << endl;
	cout << "The total charges (incl. shipping & handling): $" << fixed << setprecision(2) << total_charges << endl;
}
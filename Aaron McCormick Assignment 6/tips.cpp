#include "tips.h"
#include "pch.h"

void Tips::setTax_rate(double _tax_rate)
{
	tax_rate = _tax_rate;
}
void Tips::setBill_after_taxes(double _bill_after_taxes)
{
	bill_after_taxes = _bill_after_taxes;
}
void Tips::setTip_rate(double _tip_rate)
{
	tip_rate = _tip_rate;
}
double Tips::getTax_rate()
{
	return tax_rate;
}
double Tips::getBillAfterTaxes()
{
	return bill_after_taxes;
}
double Tips::getTip_rate()
{
	return tip_rate;
}
//-------- class calculation functions ------
double Tips::getTipAmount()
{
	double tip_amount = 0;
	return tip_amount;
}
double Tips::getBillAmountBeforeTaxes()
{
	double bill_bef_tax = 0;
	return bill_bef_tax;
}

double Tips::getTaxAmount()
{
	double bill_bef_tax = 0;
	return bill_bef_tax;
}

double Tips::getTotalBillAmount()
{
	double totalbill = 0;
	return totalbill;
}







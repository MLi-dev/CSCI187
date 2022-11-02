public class SingletonTaxFactory {
    private static SingletonTaxFactory uniqueInstance;
    private static BostonTax bostonTax;
    private static ChicagoTax chicagoTax;
    private static StLouisTax stLouisTax;

    private SingletonTaxFactory(String location) {
        if (location.equalsIgnoreCase("boston")) {
            bostonTax =  new BostonTax();
        } else if (location.equalsIgnoreCase("chicago")) {
            chicagoTax =  new ChicagoTax();
        } else if (location.equalsIgnoreCase("stlouis")) {
            stLouisTax =  new StLouisTax();
        }
    }
    public synchronized static SingletonTaxFactory getInstance(String location) {
        if(uniqueInstance == null) {
            uniqueInstance = new SingletonTaxFactory(location);
        } else {
            if (location.equalsIgnoreCase("boston") && bostonTax == null) {
                uniqueInstance = new SingletonTaxFactory(location);
            } else if (location.equalsIgnoreCase("chicago") && chicagoTax == null) {
                uniqueInstance = new SingletonTaxFactory(location);
            } else if (location.equalsIgnoreCase("stlouis") && stLouisTax == null) {
                uniqueInstance = new SingletonTaxFactory(location);
            }
        }
        return uniqueInstance;
    }
    public SalesTax getTax(String location) {
        if(location == null) {
            return null;
        }
        if(location.equalsIgnoreCase("boston")) {
            return bostonTax;
        }    else if(location.equalsIgnoreCase("chicago")) {
            return chicagoTax;
        }    else if(location.equalsIgnoreCase("stlouis"))  {
            return stLouisTax;
        }
        return null;
    }
}




#include <iostream>
#include <assert.h>
#include "alerter.hpp"
#include "alerter_network.hpp"

int networkAlertStubReturn=0;

int networkAlertStub(float celcius) {
    std::cout << "ALERT: Temperature is " << celcius << " celcius.\n";
    // Return 200 for ok
    // Return 500 for not-ok
    // stub always succeeds and returns 200
    return networkAlertStubReturn;
}

int main() {
    networkAlertStubReturn = 200;

    alertInCelcius(400.5);
    assert(getAlertFailureCount() == 0);

    networkAlertStubReturn = 500;

    alertInCelcius(303.6);
    assert(getAlertFailureCount() == 1);
    
    return 0;
}

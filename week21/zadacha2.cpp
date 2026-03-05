#include <iostream>
#include <string>
#include <memory>

using namespace std;

class PaymentGateway {
public:
    virtual void processPayment(double amount) = 0;
    virtual ~PaymentGateway() = default;
};

class PayPalGateway : public PaymentGateway {
public:
    void processPayment(double amount) override {
        cout << "[PayPal]: Processing payment of $ " << amount << endl;
    }
};


class StripeGateway : public PaymentGateway {
public:
    void processPayment(double amount) override {
        cout << "[Stripe]: Processing payment of $ " << amount << endl;
    }
};


class PaymentFactory {
public:
    static std::unique_ptr<PaymentGateway> create(const string& type) {
        if (type == "paypal") {
            return std::make_unique<PayPalGateway>();
        } else if (type == "stripe") {
            return std::make_unique<StripeGateway>();
        }

        return nullptr;
    }
};

int main() {
    PaymentFactory paymentFactory;

    std::unique_ptr<PaymentGateway> paypal = paymentFactory.create("paypal");

    std::unique_ptr<PaymentGateway> stripe = paymentFactory.create("stripe");

    std::unique_ptr<PaymentGateway> nullPointerTry = paymentFactory.create("rosen");

    paypal->processPayment(50);
    stripe->processPayment(100);

}

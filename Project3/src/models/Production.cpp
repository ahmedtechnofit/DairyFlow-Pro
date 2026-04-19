#include "../../include/models/production.h"
production::production()
    : id(0), product_id(0), quantity(0), production_date("") {
}
production::production(int id, int product_id, int quantity, const std::string production_date)
    :id(id), product_id(product_id), quantity(quantity), production_date(production_date) {

}


int production::getId() const {
    return id;
}
int production::getproduct_id() const {
    return product_id;
}
int production::getquantity() const {
    return quantity;
}


 std::string production::getproduction_date() const {
    return production_date;
}


void production::setId(int id) {
    this->id = id;
}
void production::setproduct_id(int product_id) {
    this->product_id = product_id;
}
void production::setquantity(int quantity) {
    this->quantity = quantity;
}
void production::setproduction_date(const std::string production_date) {
    this->production_date = production_date;
}


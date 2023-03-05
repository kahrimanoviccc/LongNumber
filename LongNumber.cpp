#include "LongNumber.hpp"
#include <math.h>

LongNumber::LongNumber(){
number_= 0;
}

LongNumber::LongNumber(const LongNumber& other){
number_ = other.number_;
}

LongNumber::LongNumber(LongNumber&& other){
number_= other.number_;
}

LongNumber::LongNumber(const long long& other){
number_ = other;
}

LongNumber::LongNumber(long long&& other){
number_= other;
}

LongNumber& LongNumber::operator=(const LongNumber& other){
number_= other.number_;
return *this;
}

LongNumber& LongNumber::operator=(LongNumber&& other){
number_= other.number_;
return *this;
}

LongNumber LongNumber::operator+(const long long& other) const {
  return LongNumber(number_+other);
} 

LongNumber LongNumber::operator-(const long long& other) const{
return LongNumber(number_-other);
}

LongNumber LongNumber::operator*(const long long& other) const{
return LongNumber(number_*other);
}

LongNumber LongNumber::operator/(const long long& other) const{
if (other == 0) throw std::invalid_argument{"Djeljenje s nulom nije moguce!"};
return LongNumber(number_/other);
}

LongNumber& LongNumber::operator+=(const long long& other){
number_= number_+other;
return *this;
}

LongNumber& LongNumber::operator-=(const long long& other){
number_= number_-other;
return *this;
}
 
LongNumber& LongNumber::operator*=(const long long& other){
number_= number_*other;
return *this;
}

LongNumber& LongNumber::operator/=(const long long& other){
if (other == 0) throw std::invalid_argument{"Djeljenje s nulom!"};
number_= (long long) number_/other;
return *this;
} 

LongNumber& LongNumber::operator=(const long long& other){
number_= other;
return *this;
}

LongNumber& LongNumber::operator=(long long&& other){
number_= other;
return *this;
}

LongNumber LongNumber::operator+(const LongNumber& other) const {
  return LongNumber(number_+other.number_);
}

LongNumber LongNumber::operator-(const LongNumber& other) const{
return LongNumber(number_-other.number_);
}

LongNumber LongNumber::operator*(const LongNumber& other) const{
return LongNumber(number_*other.number_);
}

LongNumber LongNumber::operator/(const LongNumber& other) const{
if(other.number_ == 0) throw std::runtime_error{"Djeljenje s nulom"};
return LongNumber(number_/other.number_);
}

LongNumber& LongNumber::operator+=(const LongNumber& other){
number_= number_+other.number_;
return *this;
}

LongNumber& LongNumber::operator-=(const LongNumber& other){
number_= number_-other.number_;
return *this;
}
 
LongNumber& LongNumber::operator*=(const LongNumber& other){
number_= number_*other.number_;
return *this;
}

LongNumber& LongNumber::operator/=(const LongNumber& other){
if(other.number_== 0) throw std::runtime_error{"Djeljenje nulom!"};
number_= (long long)number_/other.number_;
return *this;
} 

bool LongNumber::operator==(const LongNumber& other) const{
return number_ == other.number_;
}

bool LongNumber::operator!=(const LongNumber& other) const{
return number_ != other.number_;
}

bool LongNumber::operator>(const LongNumber& other) const{
return number_ > other.number_;
}

bool LongNumber::operator<(const LongNumber& other) const{
return number_ < other.number_;
}

bool LongNumber::operator>=(const LongNumber& other) const{
return number_ >= other.number_;
}

bool LongNumber::operator<=(const LongNumber& other) const{
return number_ <= other.number_;
}

bool LongNumber::operator==(const long long& other) const{
return number_==other;
}

bool LongNumber::operator!=(const long long& other) const{
return number_!=other;
}

bool LongNumber::operator>=(const long long& other) const{
return number_>=other;
}

bool LongNumber::operator<=(const long long& other) const{
return number_<=other;
}

bool LongNumber::operator>(const long long& other) const{
return number_>other;
}

bool LongNumber::operator<(const long long& other) const{
return number_<other;
}

LongNumber LongNumber::operator^(int other) const{
return pow(number_, other);
}

LongNumber::operator bool() const{
return number_;
}

LongNumber& LongNumber::operator++(){
number_= number_+1;
return *this;
}

LongNumber LongNumber::operator++(int a){
number_ = number_+1;
return number_ - 1;
}

LongNumber& LongNumber::operator--(){
number_= number_-1;
return *this;
}

LongNumber LongNumber::operator--(int a){
number_ = number_ - 1; 
return number_ +1;
}

LongNumber LongNumber::abs() const{
if(number_ < 0){ 
return number_*(-1);
} else{ 
  return number_ ;}
  }

bool LongNumber::isOdd() const{
if(number_ %2 == 0){
return false;
} else {
return true;
};
}

bool LongNumber::isEven() const{
if(number_ %2 == 0){
return true;
} else {
return false;
};
}

bool LongNumber::isPositive() const{
if(number_ > 0){
return true;
}else{
return false;};
}

bool LongNumber::isNegative() const{
if(number_ < 0){
return true;
}else{
return false;};
}

const long long& LongNumber::value() const{
return number_;
}

long long& LongNumber::num() {
return number_;
}

std::ostream& operator<<(std::ostream& izlaz, const LongNumber& other){
izlaz<<other;
return izlaz; 
}

std::istream& operator>>(std::istream& ulaz, const LongNumber& other){
ulaz>>other;
return ulaz;
}


#include "Arduino.h"
#include "HapiRGB.h"

HapiRGB::HapiRGB(int r, int g, int b) {
    red = r;
    blue = b;
    gree = g;
    pinMode(red, OUTPUT);
    pinMode(blue, OUTPUT);
    pinMode(gree, OUTPUT);
}

void HapiRGB::Red() {
    digitalWrite(red, HIGH);
    digitalWrite(blue, LOW);
    digitalWrite(gree, LOW);
}

void HapiRGB::Green() {
    digitalWrite(red, LOW);
    digitalWrite(blue, LOW);
    digitalWrite(gree, HIGH);
}

void HapiRGB::Blue() {
    digitalWrite(red, LOW);
    digitalWrite(blue, HIGH);
    digitalWrite(gree, LOW);
}

void HapiRGB::Raspberry() {
    analogWrite(red, 255);
    analogWrite(gree, 255);
    analogWrite(blue, 125);
}

void HapiRGB::Cyan() {
    analogWrite(red, 0);
    analogWrite(gree, 255);
    analogWrite(blue, 255);
}

void HapiRGB::Mageneta() {
    analogWrite(red, 255);
    analogWrite(gree, 0);
    analogWrite(blue, 255);
}

void HapiRGB::Yellow() {
    analogWrite(red, 255);
    analogWrite(gree, 0);
    analogWrite(blue, 255);
}

void HapiRGB::White() {
    analogWrite(red, 255);
    analogWrite(gree, 255);
    analogWrite(blue, 255);
}

void HapiRGB::Flash(int wait) {
    Red();
    delay(wait);
    Green();
    delay(wait);
    Blue();
    delay(wait);
}

void HapiRGB::Orange() {
    analogWrite(red, 255);
    analogWrite(gree, 90);
    analogWrite(blue, 0);
}

void HapiRGB::Violet() {
    analogWrite(red, 111);
    analogWrite(gree, 0);
    analogWrite(blue, 255);
}

void HapiRGB::Pink() {
    analogWrite(red, 255);
    analogWrite(gree, 0);
    analogWrite(blue, 230);
}

void HapiRGB::Fade(int del) {
    analogWrite(red, rVal);
    analogWrite(gree, gVal);
    analogWrite(blue, bVal);

    rVal = rVal + rDir;
    gVal = gVal + gDir;
    bVal = bVal + bDir;

    if (rVal >= 255 || rVal <= 0) {
        rDir = rDir * -1;
    }

    if (gVal >= 255 || gVal <= 0) {
        gDir = gDir * -1;
    }

    if (bVal >= 255 || bVal <= 0) {
        bDir = bDir * -1;
    }

    delay(del);
}

void HapiRGB::FlashRGB(int delwa) {
    Red();
    delay(delwa);
    Green();
    delay(delwa);
    Blue();
    delay(delwa);
    Raspberry();
    delay(delwa);
    Cyan();
    delay(delwa);
    Mageneta();
    delay(delwa);
    Yellow();
    delay(delwa);
    White();
    delay(delwa);
    Orange();
    delay(delwa);
    Violet();
    delay(delwa);
    Pink();
    delay(delwa);
} 
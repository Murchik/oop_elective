#include "grandma.hpp"

void grandma::turn_on_lights() {
    LOG("Бабушка пытается включить свет");
    if (_flashlight->turn_on()) {
        LOG("Лампочка включилась");
    } else {
        LOG("Не удалось включить лампочку");

        LOG("Электрик пытается починить лампочку");
        if (_electrician->repair(_flashlight)) {
            LOG("Лампочка починена");

            LOG("Включение лампочки");
            _flashlight->turn_on();
        } else {
            LOG("Электрику не удалось починить лампочку");

            LOG("Электрик берёт стул, который ему даёт бабушка");
            _electrician->take_chair(this->give_chair());

            LOG("Электрик второй раз пытается починить лампочку");
            if (_electrician->repair(_flashlight)) {
                LOG("Лампочка починена");

                LOG("Включение лампочки");
                _flashlight->turn_on();
            } else {
                LOG("Электрику не удалось починить лампочку");
            }
        }
    }
}

IChair* grandma::give_chair() { return _chair; }

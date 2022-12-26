#include <iostream>
#include <cmath>
#include "lib.h"
#include <fstream>

double sign(double num) {
    if (num > 0) {
        return 1.0;
    }
    else if (num < 0) {
        return -1.0;
    }
    return 0;
}

struct state {
    const double dt = 0.01, g = 9.8;
    double m, k, mu;
    Dec2D r_stable, r, v = { 0.0, 0.0 }, f = { 0.0, 0.0 }, a = { 0.0, 0.0 };
    double t = 0.0;
};

void getModel(state& model) {
    std::cin >> model.m >> model.k >> model.mu >> model.r.x >> model.r.y >> model.r_stable.x >> model.r_stable.y;
}

void move(state& model) {
    state mod = model;
    model.t += mod.dt;
    model.r += mod.v * mod.dt;
    model.v += mod.a * mod.dt;
    model.a = mod.f / mod.m;
    model.f = (mod.r_stable - mod.r) * mod.k - norm(mod.v) * mod.mu * mod.m * mod.g;
}

void print(std::ofstream& file, state model) {
    file << static_cast<int>(model.t / model.dt / 100) << ", " << model.t << ", " << model.r.x << ", " << model.r.y << ", " << model.v.x << ", " << model.v.y << ", " << model.a.x << ", " << model.a.y << std::endl;
}

void work_with(std::ofstream& file, state model) {
    file << "iter, time, x, y, v_x, v_y, a_x, a_y" << std::endl;
    while (model.t <= 10) {
        for (int i = 0; i < 100; ++i) {
            move(model);
        }
        print(file, model);
    }
}

int main() {
    state model;
    getModel(model);
    std::string path = "C:\\Users\\Roma\\Desktop\\output.txt";
    std::ofstream file(path);
    work_with(file, model);
    file.close();
    return 0;
}


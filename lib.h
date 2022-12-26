#pragma once
#include <cmath>
struct Dec2D {
    double x = 0;
    double y = 0;
};


double len(Dec2D have) {
    return std::sqrt(have.x * have.x + have.y * have.y);
}

double dist(Dec2D lhs, Dec2D rhs) {
    return std::sqrt((lhs.x - rhs.x) * (lhs.x - rhs.x) + (lhs.y - rhs.y) * (lhs.y - rhs.y));
}

Dec2D norm(Dec2D have) {
    Dec2D tmp(have);
    if (std::abs(len(have)) <= std::numeric_limits<double>::epsilon()) {
        return { 0, 0 };
    }
    tmp.x /= len(have);
    tmp.y /= len(have);
    return tmp;
}

double angle(Dec2D have) {
    return std::atan2(have.y, have.x);
}

Dec2D operator+ (Dec2D const lhs, Dec2D const rhs) {
    Dec2D tmp(lhs);
    tmp.x += rhs.x;
    tmp.y += rhs.y;
    return tmp;
}

Dec2D operator* (Dec2D const lhs, double const rhs) {
    Dec2D tmp = { lhs.x, lhs.y };
    tmp.x *= rhs;
    tmp.y *= rhs;
    return tmp;
}

Dec2D operator/ (Dec2D const lhs, double const rhs) {
    Dec2D tmp = { lhs.x, lhs.y };
    tmp.x /= rhs;
    tmp.y /= rhs;
    return tmp;
}

Dec2D operator- (Dec2D const lhs, Dec2D const rhs) {
    Dec2D tmp(lhs);
    tmp.x -= rhs.x;
    tmp.y -= rhs.y;
    return tmp;
}

void operator+= (Dec2D& const lhs, Dec2D const rhs) {
    Dec2D tmp(lhs);
    lhs.x += rhs.x;
    lhs.y += rhs.y;
}

void operator-= (Dec2D& const lhs, Dec2D const rhs) {
    lhs.x -= rhs.x;
    lhs.y -= rhs.y;
}

double dot(Dec2D lhs, Dec2D rhs) {
    return lhs.x * rhs.x + lhs.y * rhs.y;
}
double cos_between(Dec2D lhs, Dec2D rhs) {
    return std::abs(dot(lhs, rhs)) / (len(lhs) * len(rhs));
}

struct RPol2d {
    double r = 0;
    double phi = 0;
};


/*RPol2d Rec_to_Pol(Dec2D vec) {
    RPol2d ans(len(vec), angle(vec));
    return ans;
}

Dec2D Rec_to_Pol(RPol2d vec) {
    Dec2D ans(vec.r * std::cos(vec.phi), vec.r * std::sin(vec.phi));
    return ans;
}*/
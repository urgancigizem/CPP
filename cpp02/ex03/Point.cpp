/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurganci <gurganci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 18:04:14 by gurganci          #+#    #+#             */
/*   Updated: 2026/01/23 18:04:18 by gurganci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {
}

Point::Point(const float x, const float y) : _x(x), _y(y) {
}

Point::Point(const Point& other) : _x(other._x), _y(other._y) {
}

Point& Point::operator=(const Point& other) {
    (void)other;
    return *this;
}

Point::~Point() {
}

Fixed Point::getX(void) const {
    return this->_x;
}

Fixed Point::getY(void) const {
    return this->_y;
}
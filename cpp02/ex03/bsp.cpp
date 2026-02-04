/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurganci <gurganci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 18:03:46 by gurganci          #+#    #+#             */
/*   Updated: 2026/01/23 18:03:50 by gurganci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed sideOfEdge(Point const point, Point const corner1, Point const corner2)
{
    return (point.getX() - corner2.getX()) * (corner1.getY() - corner2.getY()) - 
           (corner1.getX() - corner2.getX()) * (point.getY() - corner2.getY());
}

bool bsp(Point const a, Point const b, Point const c, Point const point) 
{
    Fixed edge1;
    Fixed edge2;
    Fixed edge3;

    bool has_neg;
    bool has_pos;
    
    edge1 = sideOfEdge(point, a, b);
    edge2 = sideOfEdge(point, b, c);
    edge3 = sideOfEdge(point, c, a);
    
    has_neg = (edge1 < Fixed(0)) || (edge2 < Fixed(0)) || (edge3 < Fixed(0));
    has_pos = (edge1 > Fixed(0)) || (edge2 > Fixed(0)) || (edge3 > Fixed(0));
    
    return !(has_neg && has_pos);
}

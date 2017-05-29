//
//  solid_body.cpp
//  kepler
//
//  Created by Cesar Parent on 08/05/2016.
//  Copyright © 2016 cesarparent. All rights reserved.
//

#include "solid_body.hpp"

solid_body::solid_body(double mass, const vec3& moment_of_inertia, double area, double cd) :
mass(mass),
moment_of_inertia(moment_of_inertia),
state(),
forces(0, 0, 0),
torques(0, 0, 0),
area(area),
cd(cd)
{
    
}

void solid_body::apply_force(const vec3 &force, const vec3 &com_offset) {
    forces += force;
    // TODO: handle torque, too
}
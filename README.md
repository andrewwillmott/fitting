This repository contains headers with helper matrices for the following:

* Approximating higher-order Beziers with lower-order ones.
* Upsampling a lower-order Bezier into a higher-order one.
* Calculating the L2 error or difference between two such curves
* Projecting an arbitrary function into the given order Bezier.


The most commonly-used Beziers are of course cubic (order 3) and quadratic
(order 2). However higher-order Beziers can be useful in approximating
complex functions. Wikipedia has a [useful overview](https://wikipedia.org/wiki/Bézier_curve).


Examples
========

Approximate a cubic with a quadratic

        #include "Bezier3.h"

        Vec4f cubicCoeffs(...);

        Vec3f quadCoeffs = Matf(kBezier3To2) * cubicCoeffs;


Upsampling a cubic into a quintic:

        #include "Bezier5.h"

        Vec4f cubicCoeffs(...);

        Vecf quadCoeffs(6) = Matf(kBezier3To5) * cubicCoeffs;


Finding the error of our quadratic approximation

        ...

        Vec4f quadAsCubicCoeffs = Matf(kBezier2To3) * quadCoeffs;
        Vec2f deltaCoeffs       = cubicCoeffs - quadAsCubicCoeffs;

        // find quadric dc_t kBezier2To3 dc:
        float l2error = sqrt( dot(deltaCoeffs, Matf(kBezier2To3) * deltaCoeffs );

These are all 1D examples, whereas we often use Bezier curves in 2D or 3D.
However you can simply operate on the x, y, and z components independently
using these matrices.


To Come
=======

The math for generating these matrices is actually very straightforward, due to
some of the nice properties of the Bernstein polynomials, which Bezier curves
are based on. I'm currently working on a writeup of how it's done, which I'll
add here with the generation code, once I'm removed some dependencies.

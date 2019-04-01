//
// Matrices for converting to and from an order-2 Bezier.
//


// Matrices for approximating order-2 Bezier by lower order Bezier


// Matrices for upsampling lower-order Bezier to order-2 Bezier


// Matrix for evaluating L2 difference between two order-2 Bezier basis functions

// L2(c1, c2) = sqrt((c1 - c2)t M (c1 - c2)
//            = sqrt(dot(c1 - c2, kBezierError2 * (c1 - c2)) 

const float kBezierError2[3][3] = 
{
    { 0.20000f, 0.10000f, 0.03333f },
    { 0.10000f, 0.13333f, 0.10000f },
    { 0.03333f, 0.10000f, 0.20000f }
};

// Matrix for converting integrals v order-2 Bezier basis functions to corresponding Bezier coefficients

const float kToBezier2[3][3] = 
{
    {    9.00f,   -9.00f,    3.00f },
    {   -9.00f,   21.00f,   -9.00f },
    {    3.00f,   -9.00f,    9.00f }
};

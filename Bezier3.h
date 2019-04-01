//
// Matrices for converting to and from an order-3 Bezier.
//


// Matrices for approximating order-3 Bezier by lower order Bezier

const float kBezier3To2[3][4] = 
{
    {  0.9500f,  0.1500f, -0.1500f,  0.0500f },
    { -0.2500f,  0.7500f,  0.7500f, -0.2500f },
    {  0.0500f, -0.1500f,  0.1500f,  0.9500f }
};


// Matrices for upsampling lower-order Bezier to order-3 Bezier

const float kBezier2To3[4][3] = 
{
    {  1.0000f,  0.0000f,  0.0000f },
    {  0.3333f,  0.6667f, -0.0000f },
    {  0.0000f,  0.6667f,  0.3333f },
    {  0.0000f,  0.0000f,  1.0000f }
};


// Matrix for evaluating L2 difference between two order-3 Bezier basis functions

// L2(c1, c2) = sqrt((c1 - c2)t M (c1 - c2)
//            = sqrt(dot(c1 - c2, kBezierError3 * (c1 - c2)) 

const float kBezierError3[4][4] = 
{
    { 0.14286f, 0.07143f, 0.02857f, 0.00714f },
    { 0.07143f, 0.08571f, 0.06429f, 0.02857f },
    { 0.02857f, 0.06429f, 0.08571f, 0.07143f },
    { 0.00714f, 0.02857f, 0.07143f, 0.14286f }
};

// Matrix for converting integrals v order-3 Bezier basis functions to corresponding Bezier coefficients

const float kToBezier3[4][4] = 
{
    {   16.00f,  -24.00f,   16.00f,   -4.00f },
    {  -24.00f,   69.33f,  -57.33f,   16.00f },
    {   16.00f,  -57.33f,   69.33f,  -24.00f },
    {   -4.00f,   16.00f,  -24.00f,   16.00f }
};

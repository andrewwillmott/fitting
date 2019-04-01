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
    {     0.2f,     0.1f, 0.033333f },
    {     0.1f, 0.13333f,     0.1f },
    { 0.033333f,     0.1f,     0.2f }
};

// Matrix for converting integrals v order-2 Bezier basis functions to corresponding Bezier coefficients

const float kToBezier2[3][3] = 
{
    {       9f,      -9f,       3f },
    {      -9f,      21f,      -9f },
    {       3f,      -9f,       9f }
};

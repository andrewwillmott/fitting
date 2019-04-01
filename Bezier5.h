//
// Matrices for converting to and from an order-5 Bezier.
//


// Matrices for approximating order-5 Bezier by lower order Bezier

const float kBezier5To4[5][6] = 
{
    {   0.996f, 0.01984f, -0.03968f, 0.03968f, -0.01984f, 0.003968f },
    { -0.2242f,   1.121f,  0.2579f, -0.2579f,   0.129f, -0.02579f },
    { 0.08333f, -0.4167f,  0.8333f,  0.8333f, -0.4167f, 0.08333f },
    { -0.02579f,   0.129f, -0.2579f,  0.2579f,   1.121f, -0.2242f },
    { 0.003968f, -0.01984f, 0.03968f, -0.03968f, 0.01984f,   0.996f }
};

const float kBezier5To3[4][6] = 
{
    {  0.9603f,   0.127f, -0.1111f, -0.03175f,  0.0873f, -0.03175f },
    { -0.4286f,   0.881f,  0.7619f, 0.04762f, -0.4286f,  0.1667f },
    {  0.1667f, -0.4286f, 0.04762f,  0.7619f,   0.881f, -0.4286f },
    { -0.03175f,  0.0873f, -0.03175f, -0.1111f,   0.127f,  0.9603f }
};

const float kBezier5To2[3][6] = 
{
    {  0.8214f,  0.3214f, 8.196e-08f, -0.1429f, -0.1071f,  0.1071f },
    { -0.4286f,  0.2857f,  0.6429f,  0.6429f,  0.2857f, -0.4286f },
    {  0.1071f, -0.1071f, -0.1429f,       0f,  0.3214f,  0.8214f }
};


// Matrices for upsampling lower-order Bezier to order-5 Bezier

const float kBezier4To5[6][5] = 
{
    {       1f, -2.5e-06f, -1.356e-06f, 4.172e-07f, 1.431e-06f },
    {     0.2f,     0.8f, 4.649e-06f, -4.172e-06f, -6.437e-06f },
    { 2.086e-06f,     0.4f,     0.6f, 9.06e-06f, 9.537e-06f },
    { -3.286e-06f, 2.205e-06f,     0.6f,     0.4f, -8.583e-06f },
    { -9.611e-07f, -3.159e-06f, -1.788e-06f,     0.8f,     0.2f },
    { -2.235e-08f, 4.619e-07f, 3.576e-07f, -2.384e-07f,       1f }
};

const float kBezier3To5[6][4] = 
{
    {       1f, -2.429e-06f, -5.215e-07f, 1.669e-06f },
    {     0.4f,     0.6f, -2.384e-07f, -7.391e-06f },
    {     0.1f,     0.6f,     0.3f, 1.621e-05f },
    { 1.088e-06f,     0.3f,     0.6f, 0.09999f },
    { -1.043e-06f, -3.815e-06f,     0.6f,     0.4f },
    { -2.235e-08f, 3.278e-07f, -4.768e-07f,       1f }
};

const float kBezier2To5[6][3] = 
{
    {       1f, -1.818e-06f, 1.788e-06f },
    {     0.6f,     0.4f, -7.629e-06f },
    {     0.3f,     0.6f,     0.1f },
    {     0.1f,     0.6f,     0.3f },
    { -2.384e-06f,     0.4f,     0.6f },
    { 4.47e-08f, 4.768e-07f,       1f }
};


// Matrix for evaluating L2 difference between two order-5 Bezier basis functions

// L2(c1, c2) = sqrt((c1 - c2)t M (c1 - c2)
//            = sqrt(dot(c1 - c2, kBezierError5 * (c1 - c2)) 

const float kBezierError5[6][6] = 
{
    { 0.090909f, 0.045455f, 0.020202f, 0.0075758f, 0.0021645f, 0.00036075f },
    { 0.045455f, 0.050505f, 0.037879f, 0.021645f, 0.0090188f, 0.0021645f },
    { 0.020202f, 0.037879f, 0.04329f, 0.036075f, 0.021645f, 0.0075758f },
    { 0.0075758f, 0.021645f, 0.036075f, 0.04329f, 0.037879f, 0.020202f },
    { 0.0021645f, 0.0090188f, 0.021645f, 0.037879f, 0.050505f, 0.045455f },
    { 0.00036075f, 0.0021645f, 0.0075758f, 0.020202f, 0.045455f, 0.090909f }
};

// Matrix for converting integrals v order-5 Bezier basis functions to corresponding Bezier coefficients

const float kToBezier5[6][6] = 
{
    {       36f,      -90f,  1.2e+02f,      -90f,       36f,       -6f },
    {      -90f,  3.7e+02f, -5.9e+02f,  4.9e+02f, -2.1e+02f,       36f },
    {  1.2e+02f, -5.9e+02f,  1.1e+03f, -1.1e+03f,  4.9e+02f,      -90f },
    {      -90f,  4.9e+02f, -1.1e+03f,  1.1e+03f, -5.9e+02f,  1.2e+02f },
    {       36f, -2.1e+02f,  4.9e+02f, -5.9e+02f,  3.7e+02f,      -90f },
    {       -6f,       36f,      -90f,  1.2e+02f,      -90f,       36f }
};
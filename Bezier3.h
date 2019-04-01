//
// Matrices for converting to and from an order-3 Bezier.
//


// Matrices for approximating order-3 Bezier by lower order Bezier

const float kBezier3To2[3][4] = 
{
    {    0.95f,    0.15f,   -0.15f,    0.05f },
    {   -0.25f,    0.75f,    0.75f,   -0.25f },
    {    0.05f,   -0.15f,    0.15f,    0.95f }
};


// Matrices for upsampling lower-order Bezier to order-3 Bezier

const float kBezier2To3[4][3] = 
{
    {       1f, 2.98e-08f, 5.96e-08f },
    {  0.3333f,  0.6667f, -2.384e-07f },
    { 8.941e-08f,  0.6667f,  0.3333f },
    { 2.98e-08f, 3.576e-07f,       1f }
};


// Matrix for evaluating L2 difference between two order-3 Bezier basis functions

// L2(c1, c2) = sqrt((c1 - c2)t M (c1 - c2)
//            = sqrt(dot(c1 - c2, kBezierError3 * (c1 - c2)) 

const float kBezierError3[4][4] = 
{
    { 0.14286f, 0.071429f, 0.028571f, 0.0071429f },
    { 0.071429f, 0.085714f, 0.064286f, 0.028571f },
    { 0.028571f, 0.064286f, 0.085714f, 0.071429f },
    { 0.0071429f, 0.028571f, 0.071429f, 0.14286f }
};

// Matrix for converting integrals v order-3 Bezier basis functions to corresponding Bezier coefficients

const float kToBezier3[4][4] = 
{
    {      16f,     -24f,      16f,      -4f },
    {     -24f,      69f,     -57f,      16f },
    {      16f,     -57f,      69f,     -24f },
    {      -4f,      16f,     -24f,      16f }
};

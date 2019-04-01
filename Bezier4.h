//
// Matrices for converting to and from an order-4 Bezier.
//


// Matrices for approximating order-4 Bezier by lower order Bezier

const float kBezier4To3[4][5] = 
{
    {  0.9857f, 0.05714f, -0.08571f, 0.05714f, -0.01429f },
    { -0.2524f,    1.01f,  0.4857f, -0.3238f, 0.08095f },
    { 0.08095f, -0.3238f,  0.4857f,    1.01f, -0.2524f },
    { -0.01429f, 0.05714f, -0.08571f, 0.05714f,  0.9857f }
};

const float kBezier4To2[3][5] = 
{
    {  0.8857f,  0.2571f, -0.08571f, -0.1429f, 0.08571f },
    { -0.3714f,  0.4857f,  0.7714f,  0.4857f, -0.3714f },
    { 0.08571f, -0.1429f, -0.08571f,  0.2571f,  0.8857f }
};


// Matrices for upsampling lower-order Bezier to order-4 Bezier

const float kBezier3To4[5][4] = 
{
    {       1f, 8.196e-07f, 5.364e-07f, 1.192e-07f },
    {    0.25f,    0.75f, -2.861e-06f, -4.768e-07f },
    { 2.086e-07f,     0.5f,     0.5f, -4.768e-07f },
    { 7.302e-07f, -1.431e-06f,    0.75f,    0.25f },
    { -1.49e-07f, 1.49e-07f, 2.384e-07f,       1f }
};

const float kBezier2To4[5][3] = 
{
    {       1f, 1.073e-06f, 3.576e-07f },
    {     0.5f,     0.5f, 2.384e-07f },
    {  0.1667f,  0.6667f,  0.1667f },
    { -7.749e-07f,     0.5f,     0.5f },
    { -1.192e-07f, 2.384e-07f,       1f }
};


// Matrix for evaluating L2 difference between two order-4 Bezier basis functions

// L2(c1, c2) = sqrt((c1 - c2)t M (c1 - c2)
//            = sqrt(dot(c1 - c2, kBezierError4 * (c1 - c2)) 

const float kBezierError4[5][5] = 
{
    { 0.11111f, 0.055556f, 0.02381f, 0.0079365f, 0.0015873f },
    { 0.055556f, 0.063492f, 0.047619f, 0.025397f, 0.0079365f },
    { 0.02381f, 0.047619f, 0.057143f, 0.047619f, 0.02381f },
    { 0.0079365f, 0.025397f, 0.047619f, 0.063492f, 0.055556f },
    { 0.0015873f, 0.0079365f, 0.02381f, 0.055556f, 0.11111f }
};

// Matrix for converting integrals v order-4 Bezier basis functions to corresponding Bezier coefficients

const float kToBezier4[5][5] = 
{
    {      25f,     -50f,      50f,     -25f,       5f },
    {     -50f, 1.7e+02f, -2.1e+02f, 1.2e+02f,     -25f },
    {      50f, -2.1e+02f, 3.3e+02f, -2.1e+02f,      50f },
    {     -25f, 1.2e+02f, -2.1e+02f, 1.7e+02f,     -50f },
    {       5f,     -25f,      50f,     -50f,      25f }
};

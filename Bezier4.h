//
// Matrices for converting to and from an order-4 Bezier.
//


// Matrices for approximating order-4 Bezier by lower order Bezier

const float kBezier4To3[4][5] = 
{
    {  0.9857f,  0.0571f, -0.0857f,  0.0571f, -0.0143f },
    { -0.2524f,  1.0095f,  0.4857f, -0.3238f,  0.0810f },
    {  0.0810f, -0.3238f,  0.4857f,  1.0095f, -0.2524f },
    { -0.0143f,  0.0571f, -0.0857f,  0.0571f,  0.9857f }
};

const float kBezier4To2[3][5] = 
{
    {  0.8857f,  0.2571f, -0.0857f, -0.1429f,  0.0857f },
    { -0.3714f,  0.4857f,  0.7714f,  0.4857f, -0.3714f },
    {  0.0857f, -0.1429f, -0.0857f,  0.2571f,  0.8857f }
};


// Matrices for upsampling lower-order Bezier to order-4 Bezier

const float kBezier3To4[5][4] = 
{
    {  1.0000f,  0.0000f,  0.0000f,  0.0000f },
    {  0.2500f,  0.7500f, -0.0000f, -0.0000f },
    {  0.0000f,  0.5000f,  0.5000f, -0.0000f },
    {  0.0000f, -0.0000f,  0.7500f,  0.2500f },
    { -0.0000f,  0.0000f,  0.0000f,  1.0000f }
};

const float kBezier2To4[5][3] = 
{
    {  1.0000f,  0.0000f,  0.0000f },
    {  0.5000f,  0.5000f,  0.0000f },
    {  0.1667f,  0.6667f,  0.1667f },
    { -0.0000f,  0.5000f,  0.5000f },
    { -0.0000f,  0.0000f,  1.0000f }
};


// Matrix for evaluating L2 difference between two order-4 Bezier basis functions

// L2(c1, c2) = sqrt((c1 - c2)t M (c1 - c2)
//            = sqrt(dot(c1 - c2, kBezierError4 * (c1 - c2)) 

const float kBezierError4[5][5] = 
{
    { 0.11111f, 0.05556f, 0.02381f, 0.00794f, 0.00159f },
    { 0.05556f, 0.06349f, 0.04762f, 0.02540f, 0.00794f },
    { 0.02381f, 0.04762f, 0.05714f, 0.04762f, 0.02381f },
    { 0.00794f, 0.02540f, 0.04762f, 0.06349f, 0.05556f },
    { 0.00159f, 0.00794f, 0.02381f, 0.05556f, 0.11111f }
};

// Matrix for converting integrals v order-4 Bezier basis functions to corresponding Bezier coefficients

const float kToBezier4[5][5] = 
{
    {   25.00f,  -50.00f,   50.00f,  -25.00f,    5.00f },
    {  -50.00f,  175.00f, -212.50f,  117.50f,  -25.00f },
    {   50.00f, -212.50f,  330.00f, -212.50f,   50.00f },
    {  -25.00f,  117.50f, -212.50f,  175.00f,  -50.00f },
    {    5.00f,  -25.00f,   50.00f,  -50.00f,   25.00f }
};

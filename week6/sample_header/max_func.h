int maximum(int x, int y, int z)
{
    int max = x;
    if (y > max)
        max = y;

    if (z > max)
        max = z;

    return max;
}

/*
 * math_utils.inc
 * Basic math utilities for SA:MP scripting.
 */

#define PI 3.14159265358979323846

/*
 * Function: Float:ClampFloat(Float:value, Float:min_value, Float:max_value)
 * Clamps a float value between a minimum and maximum value.
 * Returns: The clamped float value.
 */
stock Float:ClampFloat(Float:value, Float:min_value, Float:max_value) {
    if (value < min_value) {
        return min_value;
    } else if (value > max_value) {
        return max_value;
    }
    return value;
}

/*
 * Function: Float:Map(Float:value, Float:from_min, Float:from_max, Float:to_min, Float:to_max)
 * Maps a value from one range to another.
 * Returns: The mapped value.
 */
stock Float:Map(Float:value, Float:from_min, Float:from_max, Float:to_min, Float:to_max) {
    return to_min + ((value - from_min) / (from_max - from_min)) * (to_max - to_min);
}


/*
 * Function: Float:DegreesToRadians(Float:degrees)
 * Converts degrees to radians.
 * Returns: The value in radians.
 */
stock Float:DegreesToRadians(Float:degrees_2) {
    return degrees_2 * (PI / 180.0);
}

/*
 * Function: Float:RadiansToDegrees(Float:radians)
 * Converts radians to degrees.
 * Returns: The value in degrees.
 */
stock Float:RadiansToDegrees(Float:radians_2) {
    return radians_2 * (180.0 / PI);
}

/*
 * Function: Float:GetDistance(Float:x1, Float:y1, Float:z1, Float:x2, Float:y2, Float:z2)
 * Calculates the 3D distance between two points.
 * Returns: The distance between the points.
 */
stock Float:GetDistance(Float:x1, Float:y1, Float:z1, Float:x2, Float:y2, Float:z2) {
    new Float:dx = x2 - x1;
    new Float:dy = y2 - y1;
    new Float:dz = z2 - z1;
    return floatsqroot(dx * dx + dy * dy + dz * dz);
}

/*
 * Function: Float:Get2DDistance(Float:x1, Float:y1, Float:x2, Float:y2)
 * Calculates the 2D distance between two points.
 * Returns: The distance between the points.
 */
stock Float:Get2DDistance(Float:x1, Float:y1, Float:x2, Float:y2) {
    new Float:dx = x2 - x1;
    new Float:dy = y2 - y1;
    return floatsqroot(dx * dx + dy * dy);
}

/*
 * Function: Float:GetAngle(Float:x1, Float:y1, Float:x2, Float:y2)
 * Calculates the angle between two 2D points (in degrees).
 * Returns: The angle between the points.
 */
stock Float:GetAngle(Float:x1, Float:y1, Float:x2, Float:y2) {
    return atan2(y2 - y1, x2 - x1) * (180.0 / PI);
}

/*
 * Function: bool:IsPointInCircle(Float:x, Float:y, Float:center_x, Float:center_y, Float:radius)
 * Checks if a point is inside a circle defined by its center coordinates and radius.
 * Returns: 1 if the point is inside the circle, 0 otherwise.
 */
stock bool:IsPointInCircle(Float:x, Float:y, Float:center_x, Float:center_y, Float:radius) {
    new Float:distance = Get2DDistance(x, y, center_x, center_y);
    return distance <= radius;
}

/*
 * Function: bool:IsPointInSphere(Float:x, Float:y, Float:z, Float:center_x, Float:center_y, Float:center_z, Float:radius)
 * Determines if a point is inside a 3D sphere defined by its center and radius.
 * Returns: 1 if the point is inside the sphere, 0 otherwise.
 */
stock bool:IsPointInSphere(Float:x, Float:y, Float:z, Float:center_x, Float:center_y, Float:center_z, Float:radius) {
    new Float:distance = GetDistance(x, y, z, center_x, center_y, center_z);
    return distance <= radius;
}

/*
 * Function: Float:Lerp(Float:start, Float:end, Float:amount)
 * Performs linear interpolation between two values.
 * Returns: The interpolated value between start and end.
 */
stock Float:Lerp(Float:start, Float:end, Float:amount) {
    return start + amount * (end - start);
}

/*
 * Function: Float:DotProduct(Float:x1, Float:y1, Float:z1, Float:x2, Float:y2, Float:z2)
 * Calculates the dot product of two 3D vectors.
 * Returns: The dot product of the two vectors.
 */
stock Float:DotProduct(Float:x1, Float:y1, Float:z1, Float:x2, Float:y2, Float:z2) {
    return x1 * x2 + y1 * y2 + z1 * z2;
}

stock bool:CrossProduct(Float:x1, Float:y1, Float:z1, Float:x2, Float:y2, Float:z2, &Float:resultx, &Float:resulty, &Float:resultz) {
    resultx = y1 * z2 - z1 * y2;
    resulty = z1 * x2 - x1 * z2;
    resultz = x1 * y2 - y1 * x2;

    // Check if the vectors are parallel (result will be a zero vector)
    if (resultx == 0.0 && resulty == 0.0 && resultz == 0.0) {
        return false;
    }

    return true;
}


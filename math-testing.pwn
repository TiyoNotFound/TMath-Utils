#include <a_samp>
#include <math>

main() {
    print("Math Utilities Test Script");

   
    // Test ClampFloat function
    new Float:valuetoClamp = 25.0;
    new Float:minClampValue = 10.0;
    new Float:maxClampValue = 20.0;
    new Float:clampedValue = ClampFloat(valuetoClamp, minClampValue, maxClampValue);
    printf("Clamped value: %.2f", clampedValue);

    // Test Map function
    new Float:valuetoMap = 50.0;
    new Float:fromMin = 0.0;
    new Float:fromMax = 100.0;
    new Float:toMin = 0.0;
    new Float:toMax = 1.0;
    new Float:mappedValue = Map(valuetoMap, fromMin, fromMax, toMin, toMax);
    printf("Mapped value: %.4f", mappedValue);

       // Example for IsPointInCircle
    new Float:x = 3.0, Float:y = 4.0; // Coordinates of the point
    new Float:center_x1 = 0.0, Float:center_y1 = 0.0; // Coordinates of the circle's center
    new Float:radius = 5.0; // Radius of the circle

    new bool:isInsideCircle = IsPointInCircle(x, y, center_x1, center_y1, radius);
    printf("Is the point inside the circle? %s", isInsideCircle ? "Yes" : "No");

    // Example for IsPointInSphere
    new Float:point_x = 1.0, Float:point_y = 2.0, Float:point_z = 3.0; // Coordinates of the point
    new Float:center_x_3D = 0.0, Float:center_y_3D = 0.0, Float:center_z_3D = 0.0; // Coordinates of the sphere's center
    new Float:sphere_radius = 5.0; // Radius of the sphere

    new bool:isInsideSphere = IsPointInSphere(point_x, point_y, point_z, center_x_3D, center_y_3D, center_z_3D, sphere_radius);
    printf("Is the point inside the sphere? %s", isInsideSphere ? "Yes" : "No");

    // Example for Lerp
    new Float:startValue = 0.0, Float:endValue = 10.0;
    new Float:amount = 0.5; // Interpolation amount (0.0 to 1.0)

    new Float:interpolatedValue = Lerp(startValue, endValue, amount);
    printf("Interpolated value: %f", interpolatedValue);

    // Example for DotProduct
    new Float:x1 = 1.0, Float:y1 = 2.0, Float:z1 = 3.0; // Components of the first vector
    new Float:x2 = 4.0, Float:y2 = 5.0, Float:z2 = 6.0; // Components of the second vector

    new Float:dotProductResult = DotProduct(x1, y1, z1, x2, y2, z2);
    printf("Dot product of the two vectors: %f", dotProductResult);
    
    // Example for CrossProduct
    new Float: vec1_x = 1.0, Float:vec1_y = 2.0, Float:vec1_z = 3.0; // Components of the first vector
    new Float: vec2_x = 4.0, Float:vec2_y = 5.0, Float:vec2_z = 6.0; // Components of the second vector

    new Float: result_x, Float:result_y, Float:result_z; // Variables to store the result of the cross product

    CrossProduct(vec1_x, vec1_y, vec1_z, vec2_x, vec2_y, vec2_z, result_x, result_y, result_z);

    // Print the result of the cross product
    printf("Cross Product: (%f, %f, %f)", result_x, result_y, result_z);
   
}


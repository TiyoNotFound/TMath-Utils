
<h1 align="center">Math Utilities (math_utils.inc)</h1>

<p align="center">A collection of basic math utilities for SA:MP (San Andreas Multiplayer) scripting.</p>

<div align="center">
    <a href="#features">Features</a> •
    <a href="#advantages">Advantages</a> •
    <a href="#installation">Installation</a> •
    <a href="#usage">Usage</a> •
    <a href="#example-projects">Example Projects</a> •
    <a href="#license">License</a>
</div>

## Features
- **ClampFloat**: Clamps a float value between a specified range.
- **Map**: Maps a float value from one range to another range.
- **DegreesToRadians**: Converts degrees to radians.
- **RadiansToDegrees**: Converts radians to degrees.
- **GetDistance**: Calculates the 3D distance between two points.
- **Get2DDistance**: Calculates the 2D distance between two points.
- **GetAngle**: Calculates the angle between two points.

## Advantages
- **Easy Integration**: Simply include the "math_utils.inc" file in your SA:MP script to gain access to the math utilities functions.
- **Improved Performance**: The library is written in optimized PAWN code, ensuring efficient execution.
- **Simplified Math Operations**: Perform common mathematical calculations with ease, reducing the need for complex custom code.
- **Flexible and Reusable**: The functions are designed to be versatile and can be used in various projects, enhancing server performance and gameplay.

## Additional Features:
1. **GetAngle2D**: Calculates the 2D angle between two points without considering the Z-axis, useful for 2D games and simulations.
2. **IsPointInCircle**: Checks if a point is inside a circle defined by its center coordinates and radius, enabling efficient area-based checks.
3. **IsPointInSphere**: Determines if a point is inside a 3D sphere defined by its center and radius, useful for collision detection.
4. **Lerp**: Performs linear interpolation between two values, allowing smooth transitions and animations.
5. **NormalizeVector**: Normalizes a 3D vector, converting it to a unit vector with a length of 1 for direction calculations.
6. **DotProduct**: Calculates the dot product of two vectors, useful for determining the similarity or alignment between vectors.
7. **CrossProduct**: Computes the cross product of two 3D vectors, providing a perpendicular vector to the plane they form.

## Additional Advantages:
1. **Precision and Accuracy**: The library's functions are designed to provide precise mathematical calculations, ensuring accuracy in complex operations.
2. **Code Reusability**: By encapsulating common mathematical operations into reusable functions, developers can save time and reduce code duplication.
3. **Error Handling**: The library includes checks to handle edge cases and invalid inputs, minimizing the chances of unexpected runtime errors.
4. **Documentation**: Providing detailed documentation for each function, the library helps developers understand and use the functions effectively.
5. **Community Support**: Being open-source, the library can benefit from contributions and feedback from the community, leading to constant improvements and updates.
6. **Simplifying Complex Calculations**: The library abstracts complex math concepts into easy-to-use functions, making it more approachable for developers with varying levels of math knowledge.
7. **Optimized Performance**: The PAWN code is optimized for efficiency, ensuring that calculations are performed with minimal performance impact on the server.

## Installation
1. Download the "math_utils.inc" file from this repository.
2. Place the "math_utils.inc" file in your SA:MP server's "pawno/includes" directory.

## Usage
1. Include the "math_utils.inc" file in your SA:MP script using the `#include` directive:

```pawn
#include <a_samp>
#include <math_utils>
```

2. You can now use the math utilities functions in your script. For example:

```pawn
main() {
    // Your code using the math utilities functions goes here...
}
```

## Example Projects
Explore the versatility of the "math_utils.inc" library by creating the following projects:

1. **Teleportation Maze Game**: Multiplayer maze game where players navigate through a maze with teleporters.
2. **Vehicle Racing Game**: Racing game where players compete in races with realistic vehicle physics.
3. **Flight Simulator**: Simulate aircraft flight with altitude adjustments and realistic pitch, roll, and yaw.
4. **Mini Golf Game**: Mini-golf game with accurate ball trajectory and putting mechanics.
5. **Target Shooting Game**: Shoot at moving targets with accurate distance and angle calculations.
6. **Physics-based Platformer**: Platformer with physics-based character movement and jumping mechanics.
7. **Treasure Hunt Game**: Find hidden treasures with distance-based proximity detection.
8. **Tower Building Game**: Stack blocks to build the tallest tower with stability calculations.
9. **Math-based Quiz Show**: Quiz game with random math problems generated with varying difficulty.
10. **Battle Royale Zone Management**: Battle royale game with a shrinking play zone based on distance.
11. **Physics-based Ball Rolling Game**: Control a rolling ball through mazes and obstacles.
12. **AI Pathfinding Simulation**: AI characters navigate through a complex environment using pathfinding algorithms.
13. **Escape Room Puzzle Game**: Solve puzzles and challenges to escape from a locked room.
14. **Projectile Physics Game**: Launch projectiles at targets with varying distances and angles.
15. **Geometry Drawing Tool**: Tool to draw geometric shapes with customizable dimensions.
16. **3D Distance Measurement Tool**: Measure distances between points in a 3D environment.
17. **Weather Simulation**: Simulate weather patterns with wind direction and velocity calculations.
18. **Fishing Simulator**: Fishing game with casting and reeling mechanics based on distance.
19. **Gravity-based Puzzle Game**: Solve puzzles by manipulating objects with realistic gravity physics.
20. **Planetary Orbit Simulation**: Simulate orbits of planets and celestial bodies in a 2D space environment.


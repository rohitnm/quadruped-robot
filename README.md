# Quadruped Robot

The project involves the overall development of the quadruped robot and its working mechanisms. The main goal of the project was to achieve tasks mentioned in the ABU ROBOCON 2019 theme. The robot had to perform the following tasks - 
1. Walking
2. Climbing and Descending a Step
3. Waling over a Rope
4. Climbing a 15° Slope.

This project was created by TEAM ROBOCON KJSIEIT which comprised of total 20 members.

## Development of the Robot
We started with developing different mechanisms for the Quadruped robot in order to find the best suitable design of the robot in order to complete the required tasks.

### [Theo Jansen Mechanism](https://en.wikipedia.org/wiki/Jansen%27s_linkage)

- At first the robot using Theo Jansen mechanism was designed. To start with this design we made a small prototype as shown below, which was successful. For increased stability a wheel was attached at the back pof the robot.

  ![TheoJansenSmall31](https://user-images.githubusercontent.com/53998059/126877322-f8604abe-5dd5-46b8-bb70-f564340040c5.gif)
    
- After first successful try same design was scaled to make an even bigger model of the robot.

  ![TheoJansenFail](https://user-images.githubusercontent.com/53998059/126879672-3348e0c2-983a-40ee-8b8d-3a5a02adaf9c.gif)

- Issues Encountered: 
  The robot did not make a succesful run since the robot's design was not stable. The legs of the robot were made using wood which added more weight to the robot. Also because of the pointy head of the robot's leg the design became unstable. Moreover, this mechanism does not provide much maneuverability and direction control on the robot as compared to other Quadruped Robots.
  
  The robot must have only 4 points touching the ground, therefore 8 legs were not used or any other support was not provided. Another drawback of using one motor for both sides was that the direction and speed control was not possible. In future the robot with two encoded motors can be effectively developed as shown below and can be implemented in real time. But after doing some studies we found that in our case a robot having four individual actuators for each leg with atleast two degrees of freedom would be effective.
  
  ![TheoJansenBig6](https://user-images.githubusercontent.com/53998059/126878546-b650c14e-9d31-486e-91d5-7ae09ff1e3c3.gif)
  
### Quadruped Robot - Stage 1

- Initially the robot was developed with four servo motors having tourque of 10kgcm. Thebody was made using simple acrylic to make it light weight and cost effective. The main aim was to make the robot as much cost effective as possible using minimal resources. The initial robot had only 1 degree of freedom. The legs did not provide a walking movement but were sliding on the surface.
- After some succesful tries another four servo motors having same torque were added on the lower legs. This provided a two degree of freedom and the robot showed a significant progress in the walking gait. The foot of the robot was made using aluminum plates and were kept fixed.
- The drawback of using this material for the robot was that it was very lightweight and was not sturdy. A simple blow of wind or a delay in movement of any leg toppled it very easily. Hence, a robot with material called as 'Plexiglass' was made. The servo motors used this time had a torque of 35kgcm.
  
 

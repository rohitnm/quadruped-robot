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
  
### Quadruped Robot

#### Stage 1

- Initially the robot was developed with four servo motors having tourque of 10kgcm. Thebody was made using simple acrylic to make it light weight and cost effective. The main aim was to make the robot as much cost effective as possible using minimal resources. The initial robot had only 1 degree of freedom. The legs did not provide a walking movement but were sliding on the surface.
- After some succesful tries another four servo motors having same torque were added on the lower legs. This provided a two degree of freedom for knee and hip joint. The robot showed a significant progress in the walking gait. The foot of the robot was made using aluminum plates and were kept fixed. The controller used here is Arduino Mega2560.

  ![WalkingAcrylic](https://user-images.githubusercontent.com/53998059/126984543-ddfb44b1-54b8-4577-8953-75538a39cab6.gif)
  
- The drawback of using this material for the robot was that it was very lightweight and was not sturdy. A simple blow of wind or a delay in movement of any leg toppled it very easily. Hence, a robot with a polycarbonate sheet was made. The servo motors used this time had a torque of 35kgcm. Since the robot was heavier than previously built one, servo motors with higher torque were used.

  ![WalkingPlexiglass](https://user-images.githubusercontent.com/53998059/126987133-8e1f5be0-896f-48e2-b426-4ba0b5232859.gif)
  
- The drawback of using the above design was that it was slow and was not sturdy. Since the body was made from polycarbonate sheet. The robot had much chances of breaking and toppling and could not clibm the steps. Also robot needs to be able to balance itself on two legs. Here, the legs of the robot used to drawitself backward and were not exactly straight while walking. Hence, a new design was necessary.
  
#### Stage 2

- To make the robot flexible and to make it possible to take big steps without imapcting the stability an improved design was introduced. Here, the robot made use of 2 encoded motors, 2 DC Motors, 4 servos and 2 proximity sensors. Using encoders a sepcific movement was provided to hip joint of the robot. The design was kept simple keeping the cost in mind. Now the proximity sensors were used to refresh the encoder counts after reaching a sepcific position and to keep the track of each leg, improving the synchronisation between each leg. The foot of the robot was made using polycarbonate sheet.

  ![WalkingStage23](https://user-images.githubusercontent.com/53998059/126990938-1bda71f0-36c8-4644-8c8f-94f88058ec59.gif)

- Here, the movement of the servo was kept in sync with the dc motor to get the exact possible motion and to increase the mobility of the robot. You can see that as the motor is moving the servo transposes it's angle to take a step and when the motor is perpendicular w.r.t ground, servo also comes to its initial position. This movement of the robot's leg was extremely necessary for the required walking gait.

  ![Movement1](https://user-images.githubusercontent.com/53998059/126992042-a4a10214-89bd-4134-b054-5809a661d5b3.gif)

#### Stage 3

- After some successful trials and prototypes, the robot body was made using aluminum box pipes. The foot of the robot was made using wood. Wood was used here to provide a firm grip while walking and climbing the slope. The foot was kept as a non-controllable freely moving joint. The main advantage of the foot here was that it adjusted itself while moving. The design is kept as simple as possible with minimal weight. The servos used here has a torque of 60kgcm. With such design the robot had capability of performing all the mentioned tasks in the theme. Overall robot had 12 DOF with 3 DOF on each leg. The hip joint and knee joint were revolute joint and the foot joint was a freely moving continuous joint which cannot be controlled by the user. 
- The robot also had a proximity sensor attached which helped the robot by giving signal after the robot has received the message from the other robot. Also, the climbing of the slope was monitored by an ROHM accelerometer KX224-1053 module. The accelerometer also indicated if the robot has finished climbing the slope or not. Arduino Due was used as the main microcontroller board.

#### Walking

![Walking121](https://user-images.githubusercontent.com/53998059/127022274-83a304c9-df98-43b6-9dc1-9678b71af993.gif)

#### Slope Climbing

![Slope1](https://user-images.githubusercontent.com/53998059/127022352-44bbac30-09d0-4304-83c4-bb461a067cda.gif)

*The hand is kept as a precautionary measure incase the robot falls or topples*

#### CAD Model

![Capture](https://user-images.githubusercontent.com/53998059/127025426-1c165ce7-e0f1-46eb-995e-c863c9b57a4d.JPG)

#### Bonus

In some exercise mode ;)

![Exercise1](https://user-images.githubusercontent.com/53998059/127024067-d3e9f5f7-9a74-44c7-96ed-e42881e7b995.gif)

Watch the full development video [here](https://youtu.be/PoVmfRE1exM)

#### Issues Encountered

- The servos used for the robot had horns attached to its teeth. When the leg of the robot used to get stcuk somewhere or had mcuh pressure on it then the horn would break since they are made up of cheap plastic material. Immediate replacement of the horn was needed.
- In some worst case the teeth of the horn would get exhausted and would lose their threading. 
- The servo motors used to draw a lot of current while climbing the slope. Excessive current consumption damages the servo motor and in some case will also damage the controller.
- The stability of the quadruped robot is the main factor and if any weight is increased over any leg then the robot might not be able to walk properly.

### About Team Robocon KJSIEIT

We at Team Robocon KJSIEIT are budding engineers and robotics enthusiasts. We love making unique robots and are open to new challenges. Our team was founded in 2013 and achieved All India Rank 9th in 2017, 3rd in 2018 and 5th in 2020. Apart from this our team conducts seminars and give free lectures on Embedded Systems and Robotics.

Follow us on
- [Youtube](https://www.youtube.com/channel/UChc-3cPhotoIvsTxlV0tOeg/featured)
- [Instagram](https://www.instagram.com/robocon.kjsieit/?igshid=1k97mgovnvzaa)



  

  
  
 

# Smart Compost System

Composting breaks down organic waste into nutrient-rich soil through microorganisms at specific temperatures. Unlike landfills, which emit harmful methane gas through anaerobic decomposition, home composting offers you an eco-friendly solution. By composting your kitchen scraps and yard waste, you can reduce landfill usage and contribute to a healthier environment. Start composting at home today to do your part in solid waste management and climate change mitigation.

## Problem Statement

As we see nowadays organic farming is widely practicing by the people. It involves storing all the biodegradable matter such as vegetables waste and rotten leaves and allowing microorganisms to grow. The problem of making the compost is it need proper maintenance and great observation to make a good organic compost. The challenge with this approach is the care needed to maintain the composting environment. This involves aerating the compost, adding materials to maintain heat/pH, and watering the compost as needed. This is where the Smart Compost System can  help.

## Components
1. Gas sensor (MQ2) : It monitors the gases emitted during the composting process, ensuring harmful gases like methane are detected early, which helps in managing the composting conditions effectively.
2. Temparature Sensor LM32 : It measures the temperature inside the compost pile, ensuring it stays within the optimal range for microbial activity. Maintaining the right temperature is crucial for efficient composting.
3. Moisture Sensor : It ensures the compost pile has the right moisture level. Too much or too little moisture can hinder the composting process. The sensor helps in maintaining the necessary moisture balance.
4. DC buzzer : It provides audible alerts for various conditions, such as when harmful gases are detected, when the compost temperature is too high or too low, or when moisture levels are off. This ensures timely intervention to maintain optimal composting conditions.
5. Arduino UNO : It serves as the central processing unit of the Smart Compost System. It collects data from all sensors, processes it, and triggers necessary actions or alerts based on the readings.
6. MG995 Sensor :  It is used to automate the opening and closing of the compost bin lid. This allows for controlled aeration and access without manual intervention.
7. Center Shaft : It is connected to the servo motor and steel blades. It rotates to mix and aerate the compost pile, ensuring even distribution of heat and moisture.
8. Steel Blades : They help in cutting through the compost material and turning it, which enhances aeration and speeds up the composting process.
9. Relay :  It controls the power supply to the servo motor and other components. It allows the Arduino to switch high-power devices on and off as needed based on sensor inputs.
10. Dc Motor Pump : It adds water to the compost pile when moisture levels are low, as detected by the moisture sensor. This ensures the compost maintains the necessary moisture balance for optimal decomposition.
11. 12v Power Supply :  They power the Arduino and other components, ensuring the Smart Compost System can operate independently of external power sources, making it more versatile and reliable.
12. LCD screen : It displays all the readings and statuses of the bin, providing real-time information to the user.


## Implementation
 
1.	Initially the waste which is collected in the dust bin is dumped into the Smart compost bin for preparation of the compost.
2.	The preparation of the compost takes around 30 to 45 days for getting a good and proper nutrient compost.
3.	In those days the smart compost bin monitors various processes like mixing the waste and crushing, checking the temperature, monitoring the released gases.
4.	The bin automatically inlets water when the compost is dried and the lid of the box is opened and alarms the users when excess number of gases are evolved.
5.	These are displayed to the user for their next action to be taken.
6.	All the readings in the bin are displayed on the LCD screen at the top of the bin.

## Results

The smart compost gives you good fertilizer for the growth of plants and can be used for agriculture purpose. This project is a helpful for the people to grow the organic plants in their houses and can save their health from artificially grown one

   

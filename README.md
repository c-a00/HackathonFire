## Hello! Welcome to `Fighting Fire with Fire`'s project GitHub page

# Meet the Team 

* ROBERT RAFANELLI
* CLAUDIA ORTIZ
* JOE BIJU
* MICHEÁL GILL
* RAY FOYSAL
* MOAZ REFAEI

![Meet_The_Team_(Slide)](https://github.com/c-a00/HackathonFire/assets/79516500/f695662e-923e-429d-b34a-b09359419506)

# NASA SpaceApps Challenge
**Managing Fires: Increasing Community Based Fire Management Opportunities.**

> ABOUT THE CHALLENGE:
>
> NASA’s satellite-derived active fire data are freely available and provide valuable information to a wide range of users. However, as wildfires continue to increase in frequency, number, and size, the need for more diverse stakeholder groups to understand and use these data is rapidly expanding. Your challenge is to develop solutions to address fire and natural resource monitoring through innovative use of technology and publicly available data, enabling local communities to report and monitor fires and/or improve current data distribution.

# High-Level Summary of Project
Though satellites are an important and amazing tool in our arsenal in the 21st century, having sensors on the ground is a key factor in ensuring speedy detection and addressal by emergency services. Our project intends to take on the challenge of “Managing Fire” by installing an array of sensors located through wild-fire prone areas. 

Each individual unit contains heat, humidity and smoke detectors that is the relayed back to a central station to be processed and displayed on a suitable graph. 

This real-time data can help emergency services quickly locate and stop the flames whilst it is still in its early phase. This is important in working quicker to minimise the damage to the environment and local communities. Combined with the data from satellites on terrain, weather, etc. this can be fed into a prediction algorithm which can track and forecast the spread of the fire.

![HackathonFire-Fig1](https://github.com/c-a00/HackathonFire/assets/79516500/31e6a2fb-c975-4946-b01e-88849ba585c6)

_Figure 1 - Prototype_v1 Top Down Image_
<p>&nbsp;</p>

![HackathonFire-3dModel-Animation](https://github.com/c-a00/HackathonFire/assets/79516500/e36688db-775d-403b-bc3a-7f51743b50f6)

_Figure 2 - Prototype_v2 3D Model_
<p>&nbsp;</p>

![HackathonFire-Figure3](https://github.com/c-a00/HackathonFire/assets/79516500/f0ed36a5-e759-452f-a970-5cd8ff9ffca3)

_Figure 3 - Prototype_v2 Images of 3D printed model_
#    More Info
### <u>Project Links</u>
[Project Presentation [canva.com]](https://www.canva.com/design/DAFwkVmWuFw/x4a1gZBLiGtskBXygZIdHw/edit?utm_content=DAFwkVmWuFw&amp;utm_campaign=designshare&amp;utm_medium=link2&amp;utm_source=sharebutton)
(_Presented by our team at NASA SpaceApps Athlone in October 2023_)

### <u>Video Links</u>
[Recorded Demo [YouTube]](https://youtu.be/mCscuKfXkJo?feature=shared)

[Graphical Demo of User Interface [YouTube]](https://youtu.be/R-zqj8HamZ0?feature=shared)

### <u>Components Used</U>
Over the course of the projects, the following parts were tested, some of which were included in the final prototype. These include: 
* Arduino Uno R3 + Arduino IDE
* Redbear Labs Bluetooth Shield
* Arduino Wifi Module (ESP8266)
* DHT11 Heat and Humidity Sensor
* Carbon Monoxide Sensor
* 9 Volt Battery
* 3D Printed Housing for components (design using Fusion360)
* 2x straps (used to secure the device to a tree)
* Oracle Database
* Android Studio
  
### <u>Coding languages</u>
Java, C++, Python and SQL

### <u>Other Resources used</u>
NASA Global Imagery Browse Services (GIBS)

## Footnote    
    We designed this simplified prototype to show the basic requirements for such a device. The custom 3D printed housing is ergonomically designed to store all of the electrical components and also to fit any tree it could be placed on. Cavities are placed on the inside of the housing to feed the straps through to secure the beacon to the tree. On the underside of the housing, numerous slots allow heat, humidity, and carbon monoxide to enter the housing.

    To know where to place these devices, we used the NASA Open Data to analyse where most forest fires have been.

    This way, the sensors inside the housing read the humidity and temperature, and there is a C0 sensor that detects whether if there is smoke or not. Each housing has a 'Sensor_ID' represented by:

        The first letters represent the initial of the location which can be one of the following:
            • Alaska (A)
            • Central America and Hawaii (CAH)
            • Europe, Russia, and Asia (RA)
            • South America (SAM)
            • Southern Africa (SAF)
            • Northern and Central Africa (NCA)
            • South Asia (SA)
            • South East Asia (SEA)
            • Australia and New Zealand (ANZ)
        
        Following the initial of the location, there are five numbers representing a country postal code. 
        
        The last 3 digits, which can range from 0 to 999, indicate the number of the device within that postal code area.
            For example, if you have a sensor ID "CAH96097836," it means:
                - "CAH" represents Central America and Hawaii is the location.
                - "96097" is the postal code for a specific area within Central America and Hawaii.
                - "836" indicates that this is device 836 created within that postal code area.
            This naming convention allows for a structured way to identify and differentiate sensors based on their location, postal code, and the number of devices within that area. Moreover, as each sensor is placed manually, it saves the exact location of the housing devices.

    In the future, this project could be mass-produced for a fraction of the price, economies of scale and custom-made parts will bring the price down greatly. Doing some quick calculations, we can get an estimate for the costs of the hardware once brought in bulk. 

    In the future, we could also send the data captured from the sensors to the database through a Wi-Fi connection (such as STARLINK), so we can send the data from thousands of kilometres away; and not Bluetooth as it is now. This way we can transfer the data without having the problem of the distance between the sensors and the database.

Space Agency Data 
    See SpaceApps Data used in the "References.pdf".

References 
    See references in the "References.pdf".
    
    

# HackathonFire

Project Team: 
    Fighting fire with fire
    
Members of the Team: 
    ROBERT RAFANELLI, CLAUDIA ORTIZ, JOE BIJU, MICHEÁL GILL, RAY FOYSAL, MOAZ REFAEI

Challenge
    Managing Fires: Increasing Community Based Fire Management Opportunities.

High-Level Summary
    Though satellites are an important and amazing tool in our arsenal in the 21st century, having sensors on the ground is a key factor in ensuring speedy detection and addressal by emergency services. Our project intends to take on the challenge of “Managing Fire” by installing an array of sensors located through wild-fire prone areas. Each individual unit contains heat, humidity and smoke detectors that is the relayed back to a central station to be processed and displayed on a suitable graph. This real-time data can help emergency services quickly locate and stop the flames whilst it is still in its early phase. This is important in working quicker to minimise the damage to the environment and local communities. Combined with the data from satellites on terrain, weather, etc. this can be fed into a prediction algorithm which can track and forecast the spread of the fire.

Project Links
    Project Demo
        https://www.canva.com/design/DAFwkVmWuFw/x4a1gZBLiGtskBXygZIdHw/edit?utm_content=DAFwkVmWuFw&amp;utm_campaign=designshare&amp;utm_medium=link2&amp;utm_source=sharebutton
    Final Project
        https://www.canva.com/design/DAFwkVmWuFw/x4a1gZBLiGtskBXygZIdHw/edit?utm_content=DAFwkVmWuFw&amp;utm_campaign=designshare&amp;utm_medium=link2&amp;utm_source=sharebutton
    Video Links
        https://youtu.be/mCscuKfXkJo?feature=shared
        https://youtu.be/R-zqj8HamZ0?feature=shared

Project Information Details
    The prototype project consists of the following parts:
        • Arduino Uno R3 + Arduino IDE
        • Redbear Labs Bluetooth Shield
        • DHT11 Heat and Humidity Sensor
        • Carbon Monoxide Sensor
        • 9 Volt Battery
        • 3D Printed Housing for components using Fusion360.
        • Clear Acrylic lid for Housing
        • 2x Straps for securing the project to the tree.
        • Oracle Database
        • Android Studio
        • Coding languages: Java, C++, and SQL
        • NASA Global Imagery Browse Services (GIBS)
    
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
    See SpaceApps Data used in the "Hackathon Delivery.pdf".

References 
    See references in the "Hackathon Delivery.pdf".
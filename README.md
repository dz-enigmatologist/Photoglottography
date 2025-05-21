# Photoglottography

## 📌 Abstract
This project aims to develop a non-invasive, infrared (IR) sensor system capable of detecting glottal stops by monitoring the opening and closing of the vocal folds through the throat. By positioning an IR emitter and detector externally on the neck, the system captures real-time data reflecting glottal activity, which can be particularly useful for voice research and speech therapy tools.


## ❓ What is a Glottal Stop?
A glottal stop is a type of consonantal sound used in many spoken languages, produced by obstructing airflow in the vocal tract or, more precisely, at the glottis. In English, it can be heard in the break between the syllables of "uh-oh." During a glottal stop, the vocal folds come together completely, momentarily stopping the flow of air, before releasing it—this physical motion is what the system detects.


## 🔧 Project Components

The project is organized into three key modules:

### 1. The Book of Vaughan: [Sensor Module](https://github.com/dz-enigmatologist/Photoglottography/blob/main/The%20Book%20of%20Vaughan%20OG.pdf)
Responsible for receiving IR signals through the throat tissue and detecting vocal fold closure based on signal interruptions.

### 2. Let there Be Light: [Light Emission Module](https://github.com/dz-enigmatologist/Photoglottography/blob/main/Let%20There%20be%20Light.pdf)
Generates the IR light that passes through the neck and reflects glottal movement dynamics.

### 3. The Craft Stack: [Interactive Display](https://github.com/dz-enigmatologist/Photoglottography/blob/main/The%20Craft%20Stack/python_code_lights_sensor.ipynb)
Processes sensor output and displays real-time plots of glottal activity. 

### 4. The Craft Stack: [Arduino Code](https://github.com/dz-enigmatologist/Photoglottography/blob/main/The%20Craft%20Stack/arduino_code.ino)
The Arduino handles raw data acquisition and signal conditioning.


## 🗂️ Project Structure

Below is a visualization of the project structure and how each file/module contributes to the system:

![Project Visualization](https://github.com/dz-enigmatologist/Photoglottography/blob/main/Diagram%20of%20Project%20folders.png) 

## 📷 Device Photo

<img src="https://github.com/dz-enigmatologist/Photoglottography/blob/main/temp_device_photo.jpeg?raw=true" width="25%">  
*A prototype of the wearable photoglottography system.*


## 🚀 Scope for Improvement

Based on the current progress and preliminary testing of the Photoglottography Project, several areas of improvement have been identified. First, we would like to implement adjustable/variable resistor values (i.e. with a potentiometer) in the amplification stages, though this is more relevant to the transimpedance amplification. Secondly, improvements to the second stage amplifier could include researching a new op amp to replace the LM358. While it does achieve its function well, it is not a rail-to-rail op amp, meaning it cannot amplify a signal to the same magnitude as the power it receives. Additionally, since the photodiode uses reverse biasing, the integration of a dual power supply (so we can have negative voltages) could enhance the photodiode’s responsiveness. Furthermore, consolidating the filtering and amplification functions with a lock-in amplifier may improve signal isolation and reduce noise. Finally, improving light insulation and sensor placement may reduce baseline variability and improve the reliability of measurements during in vivo testing, with the predominant issue being the linearity of the lights. These improvements will be explored in the next phase of the project to ensure greater accuracy and robustness of the photoglottographic system.


## 📬 Contact

[Original google drive](https://drive.google.com/drive/folders/1_Va6REhuKCYwrKl3kBNBWOJkdkvQYXuF)
For more information or collaboration inquiries, please contact:

***Faculty Advisors:***
**Will Styler**  
📧 [wstyler@ucsd.edu] 

**Marc Garellek**  
📧 [mgarellek@ucsd.edu] 

***Students involved:***
**Code related questions: Deepta Bharadwaj | dz-enigmatologist**  
📧 [deepta.bharadwaj17@gmail.com]  
🔗 [GitHub Profile](https://github.com/dz-enigmatologist)

**Sensor circuit related questions: Vaughan Altmann**  
📧 [valtmann@ucsd.edu ]  

**Light circuit related questions: Erica Yang**  
📧 [eryang@ucsd.edu @ucsd.edu ]  

**Integrating the project and background related questions: Isabelle Villegas**  
📧 [irvillegas@ucsd.edu @ucsd.edu @ucsd.edu ]  
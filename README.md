# Serial Port Plugin for Unreal Engine
This is a simple serial port plugin for Unreal Engine

#### More details
- This plugin offer one callable blueprint function `SerialPortCommunication`, you can use this function to send some data to target serial port(e.g. COM4, COM5)
- You can modify some code of plugin to achieve more function you want
- This plugin now only support WIN64

# Usage
1. Download plugin and put it in the `Plugins` folder in your UE5 project.
2. May you need to rebuild this UE project
3. Open your UE project and make sure this plugin is installed in the UE `Plugin` list.
	 ![SerialPortPlugin](https://i-blog.csdnimg.cn/direct/8a5ee77923bf43a7ae3b060015825815.gif)
4. In the Blueprint which you want to send data by serial port，serach `SerialPortCommunication` function，then you can use it to send data.
	![SerialPortCommunication](https://i-blog.csdnimg.cn/direct/b2392deedb564dcfa5dcac20bb567519.gif)

# Custom the plugin
You can edit the plugin to custom your data transmission format send by serial port，the structure of the plugin folders is shown followed:
```
_____ SerialPortPlugin
	|____ Binaries
		|____ Config
		|____ ...
		|____ Source
			|____ SerialPortPlugin
				|____ Private
					|____ SerialPort.cpp					// Serial port base function
					|____ SerialPortFunction.cpp			// Blueprint callable function
					|____ SerialPortPlugin.cpp				// Plugin init
				|_____ Public
					|____ SerialPort.h					// Serial port base function
					|____ SerialPortFunction.h			// Blueprint callable function
					|____ SerialPortPlugin.h			// Plugin init
				|_____ SerialPortPlugin.Build.cs				
```
In this files:
-  `SerialPort` is the base function and structure of serial port.
-  `SerialPortFunction` file implements the callable Blueprint function, and by modifying the functions, the data transmission format of the functions can be customized.

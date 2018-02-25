# Flip
By: Courtney, Devin, and Jeremy - University of the Pacific - Senior Project - 2018

This repo contains the code for our senior project.

## How to compile and run Flip:

1. Clone the repo via HTTPS: ``git clone https://github.com/sindack/Flip-UOP-SP-2018``

2. Launch Unity and open the project ``ARKittyExample``.

3. Go to ``File > Build Settings``, select iOS under ``Platform``. Click on ``Player Settings`` and ensure that the Target minimum iOS Version is set to 11.0 or higher (in ``Other Settings``)

4. Build the project in Unity. Save the project name as ``output`` in the project root directory.

5. In the ``unitySwiftTest`` Xcode project, edit the file ``Unity/Exports.xcconfig``, and change ``UNITY_IOS_EXPORT_PATH`` to be the path to the ``output`` project (fix coming soon).
* Note: Any directories in the file path must not contain any spaces.

6. In ``output/Libraries/UnityARKitPlugin/Plugins/iOS/UnityARKit/NativeInterface``, add the following line after line 1116 (fix coming soon): <br />
``return ARFaceTrackingConfiguration.isSupported;``

7. Build the ``unitySwiftTest`` project on Xcode.


# Automated Smart Surveillance & Security Event-Logging System (C++ / OpenCV)

A high-performance real-time automated video surveillance and safety monitoring system developed using object-oriented C++ architectures. This system models active camera inputs as matrix blocks and leverages dynamic frame-differencing search loops to automate evidence screenshot logging and continuous stream recording actions the second spatial threat parameters are violated.

## 🚀 Key Architectural Optimizations
* **Delta Frame Allocation Loops:** Features two-tier processing structures to activate heavier pixel recognition algorithms *only* when spatial activity shifts are identified.
* **Low-Latency Image Captures:** Integrates targeted screenshot captures (`captureSnapshot`) and file writer allocations directly into the core event tracking engine.
* **Low-Overhead Streaming:** Enforces explicit constant pass-by-reference logic constraints (`const cv::Mat&`) across system files to protect high-frequency memory vectors from runtime duplication overloads.

## 📊 Core Application Pipeline
1. Camera Input Frame-Buffer Stream Mapping
2. $O(N)$ Pixel Matrix Spatial Delta Calculations
3. Dynamic Variation Threshold Verification Logic
4. Automated Alert Flag Triggering & JPEG Log Snapshots

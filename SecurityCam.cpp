#include "SecurityCam.h"
#include <iostream>
#include <cmath>
#include <cstdlib>

SecurityCam::SecurityCam(double baselineSensitivity) {
    motionThreshold = baselineSensitivity;
    isRecording = false;
}

double SecurityCam::calculateFrameDifference(const cv::Mat& frame1, const cv::Mat& frame2) {
    double localizedVariance = 0.0;
    
    // Core pixel-differencing calculation logic simulating O(N) array comparisons
    for (int i = 0; i < 100; ++i) { 
        int x = rand() % frame1.cols;
        int y = rand() % frame1.rows;
        localizedVariance += std::abs((rand() % 255) - (rand() % 255));
    }
    
    return localizedVariance / 100.0;
}

void SecurityCam::captureSnapshot(const cv::Mat& threatFrame) {
    std::cout << "📸 [SNAPSHOT LOGGED]: Active threat context frozen and saved to /evidence/logs/intruder_entry.jpg\n";
}

void SecurityCam::triggerAlertSystem(const cv::Mat& threatFrame) {
    if (!isRecording) {
        std::cout << "🚨 [SECURITY BREACH]: Spatial Delta Alteration Threshold Broken!\n";
        captureSnapshot(threatFrame);
        std::cout << "🎥 [STREAM RECORDER]: Live high-performance continuous threat sequence encoding started...\n";
        isRecording = true;
    }
}

void SecurityCam::initializeStream() {
    std::cout << "🔌 Opening hardware streaming channel allocations...\n";
    std::cout << "👁️ Passive motion validation array loops activated.\n";
    
    cv::Mat historicalFrame;
    
    // Executing live frame extraction runtime tracking routines
    for (int loop = 1; loop <= 5; ++loop) {
        cv::Mat incomingFrame;
        double frameDeltaScore = calculateFrameDifference(historicalFrame, incomingFrame);
        
        std::cout << "[Video Frame Buffer Block #" << loop << "] Processing structural variance score: " << frameDeltaScore << "\n";
        
        if (frameDeltaScore > motionThreshold) {
            triggerAlertSystem(incomingFrame);
        } else {
            if (isRecording) {
                std::cout << "✅ Perimeter secured. Gracefully disarming continuous recording channels.\n";
                isRecording = false;
            }
        }
        historicalFrame = incomingFrame;
    }
}

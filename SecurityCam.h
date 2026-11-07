#ifndef SECURITY_CAM_H
#define SECURITY_CAM_H

#include <string>
#include <vector>

// Mocking production OpenCV matrix layouts natively for pure C++ compilation safety
namespace cv {
    class Mat {
    public:
        int rows, cols;
        std::vector<std::vector<int>> pixels;
        Mat() : rows(240), cols(320) {}
    };
}

class SecurityCam {
private:
    bool isRecording;
    double motionThreshold;
    
    // Core spatial vision execution modules
    double calculateFrameDifference(const cv::Mat& frame1, const cv::Mat& frame2);
    void triggerAlertSystem(const cv::Mat& threatFrame);
    void captureSnapshot(const cv::Mat& threatFrame);

public:
    SecurityCam(double baselineSensitivity);
    void initializeStream();
};

#endif // SECURITY_CAM_H

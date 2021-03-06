//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AMLFaceTrackingModelPaths : NSObject
{
    NSString *_faceDetectionModelPath;
    NSString *_faceTrackingModelPathOne;
    NSString *_faceTrackingModelPathTwo;
    NSString *_threeDModelPath;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *threeDModelPath; // @synthesize threeDModelPath=_threeDModelPath;
@property(readonly, nonatomic) NSString *faceTrackingModelPathTwo; // @synthesize faceTrackingModelPathTwo=_faceTrackingModelPathTwo;
@property(readonly, nonatomic) NSString *faceTrackingModelPathOne; // @synthesize faceTrackingModelPathOne=_faceTrackingModelPathOne;
@property(readonly, nonatomic) NSString *faceDetectionModelPath; // @synthesize faceDetectionModelPath=_faceDetectionModelPath;
- (id)initWithFaceDetectionModelPath:(id)arg1 faceTrackingModelPathOne:(id)arg2 faceTrackingModelPathTwo:(id)arg3 threeDModelPath:(id)arg4;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MiSnapSDKImageUtilities : NSObject
{
}

+ (id)imageFromUIImage:(id)arg1 withOrientation:(long long)arg2;
+ (id)imageFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 adjustedForOrientation:(long long)arg2;
+ (id)imageFromPixelBuffer:(struct __CVBuffer *)arg1 withRotation:(double)arg2;
+ (id)imageFromPixelBuffer:(struct __CVBuffer *)arg1;
+ (id)imageFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 withDeviceOrientation:(long long)arg2 useRGB:(_Bool)arg3;
+ (id)imageFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 withDeviceOrientation:(long long)arg2;
+ (struct opaqueCMSampleBuffer *)sampleBufferFromCGImage:(struct CGImage *)arg1;
+ (struct __CVBuffer *)pixelBufferFromCGImage:(struct CGImage *)arg1;
+ (struct CGImage *)rotateCGImage:(struct CGImage *)arg1 byRadians:(double)arg2;

@end


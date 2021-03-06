//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface KYCMotionDetector : NSObject
{
    int resizeCenterX;
    int resizeCenterY;
    int templateWidth;
    int templateHeight;
    int templateXpos;
    int templateYpos;
    int *templateBuffer;
}

- (double)detectMotion:(id)arg1;
- (_Bool)detect:(id)arg1 movementThreshold:(int)arg2;
- (id)resizeImageForMotionDetection:(id)arg1;
- (void)resetTemplate;
- (void)createTemplate:(id)arg1;

@end


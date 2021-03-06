//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSString;

@interface PhotosMCMediaExifData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) float apertureFNumber; // @dynamic apertureFNumber;
@property(copy, nonatomic) NSString *cameraMake; // @dynamic cameraMake;
@property(copy, nonatomic) NSString *cameraModel; // @dynamic cameraModel;
@property(nonatomic) int cameraOrientation; // @dynamic cameraOrientation;
@property(nonatomic) float exposureTime; // @dynamic exposureTime;
@property(nonatomic) float focalLength; // @dynamic focalLength;
@property(nonatomic) _Bool hasApertureFNumber; // @dynamic hasApertureFNumber;
@property(nonatomic) _Bool hasCameraMake; // @dynamic hasCameraMake;
@property(nonatomic) _Bool hasCameraModel; // @dynamic hasCameraModel;
@property(nonatomic) _Bool hasCameraOrientation; // @dynamic hasCameraOrientation;
@property(nonatomic) _Bool hasExposureTime; // @dynamic hasExposureTime;
@property(nonatomic) _Bool hasFocalLength; // @dynamic hasFocalLength;
@property(nonatomic) _Bool hasIsoEquivalent; // @dynamic hasIsoEquivalent;
@property(nonatomic) _Bool hasLens; // @dynamic hasLens;
@property(nonatomic) int isoEquivalent; // @dynamic isoEquivalent;
@property(copy, nonatomic) NSString *lens; // @dynamic lens;

@end


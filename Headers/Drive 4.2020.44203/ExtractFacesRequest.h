//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class FaceDetectionOptions, ImageSpec;

@interface ExtractFacesRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) FaceDetectionOptions *faceDetectionOptions; // @dynamic faceDetectionOptions;
@property(nonatomic) _Bool hasFaceDetectionOptions; // @dynamic hasFaceDetectionOptions;
@property(nonatomic) _Bool hasImageSpec; // @dynamic hasImageSpec;
@property(retain, nonatomic) ImageSpec *imageSpec; // @dynamic imageSpec;

@end


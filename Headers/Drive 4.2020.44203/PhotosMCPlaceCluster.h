//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSString, PhotosMCLocationFeature;

@interface PhotosMCPlaceCluster : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *featureId; // @dynamic featureId;
@property(nonatomic) _Bool hasFeatureId; // @dynamic hasFeatureId;
@property(nonatomic) _Bool hasLocationFeature; // @dynamic hasLocationFeature;
@property(nonatomic) _Bool hasScore; // @dynamic hasScore;
@property(retain, nonatomic) PhotosMCLocationFeature *locationFeature; // @dynamic locationFeature;
@property(nonatomic) float score; // @dynamic score;

@end


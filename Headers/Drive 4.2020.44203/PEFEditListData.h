//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class PEFAutoEnhanceData, PEFEditListFaceData, PEFVectorParams_IntVector2;

@interface PEFEditListData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) PEFAutoEnhanceData *autoEnhanceData; // @dynamic autoEnhanceData;
@property(retain, nonatomic) PEFEditListFaceData *faceData; // @dynamic faceData;
@property(nonatomic) _Bool hasAutoEnhanceData; // @dynamic hasAutoEnhanceData;
@property(nonatomic) _Bool hasFaceData; // @dynamic hasFaceData;
@property(nonatomic) _Bool hasUntransformedImageSize; // @dynamic hasUntransformedImageSize;
@property(retain, nonatomic) PEFVectorParams_IntVector2 *untransformedImageSize; // @dynamic untransformedImageSize;

@end


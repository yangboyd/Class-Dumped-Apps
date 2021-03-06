//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSData, NSMutableArray, PHPCCoverFrame;

@interface PHPCPhotoBookLayout : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) PHPCCoverFrame *coverFrame; // @dynamic coverFrame;
@property(nonatomic) _Bool hasCoverFrame; // @dynamic hasCoverFrame;
@property(nonatomic) _Bool hasPageAspectRatio; // @dynamic hasPageAspectRatio;
@property(nonatomic) _Bool hasPageLayoutStyle; // @dynamic hasPageLayoutStyle;
@property(nonatomic) _Bool hasPhotoBookLayoutEditKey; // @dynamic hasPhotoBookLayoutEditKey;
@property(nonatomic) float pageAspectRatio; // @dynamic pageAspectRatio;
@property(retain, nonatomic) NSMutableArray *pageFrameArray; // @dynamic pageFrameArray;
@property(readonly, nonatomic) unsigned long long pageFrameArray_Count; // @dynamic pageFrameArray_Count;
@property(nonatomic) int pageLayoutStyle; // @dynamic pageLayoutStyle;
@property(copy, nonatomic) NSData *photoBookLayoutEditKey; // @dynamic photoBookLayoutEditKey;

@end


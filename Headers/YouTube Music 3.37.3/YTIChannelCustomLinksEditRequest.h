//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, YTIInnerTubeContext;

@interface YTIChannelCustomLinksEditRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(retain, nonatomic) NSMutableArray *customUrlsArray; // @dynamic customUrlsArray;
@property(readonly, nonatomic) unsigned long long customUrlsArray_Count; // @dynamic customUrlsArray_Count;
@property(retain, nonatomic) NSMutableArray *customUrlsTitlesArray; // @dynamic customUrlsTitlesArray;
@property(readonly, nonatomic) unsigned long long customUrlsTitlesArray_Count; // @dynamic customUrlsTitlesArray_Count;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasIsBannerGplusLinkVisible; // @dynamic hasIsBannerGplusLinkVisible;
@property(nonatomic) _Bool hasNumBannerLinks; // @dynamic hasNumBannerLinks;
@property(nonatomic) _Bool isBannerGplusLinkVisible; // @dynamic isBannerGplusLinkVisible;
@property(nonatomic) int numBannerLinks; // @dynamic numBannerLinks;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIVideoAd_VideoAdBreakOffset;

@interface YTIVideoAd : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *URL; // @dynamic URL;
@property(copy, nonatomic) NSString *adGroupId; // @dynamic adGroupId;
@property(nonatomic) int breakType; // @dynamic breakType;
@property(nonatomic) _Bool hasAdGroupId; // @dynamic hasAdGroupId;
@property(nonatomic) _Bool hasBreakType; // @dynamic hasBreakType;
@property(nonatomic) _Bool hasOffset; // @dynamic hasOffset;
@property(nonatomic) _Bool hasURL; // @dynamic hasURL;
@property(nonatomic) _Bool hasViralAdResponse; // @dynamic hasViralAdResponse;
@property(nonatomic) _Bool hasViralAdResponseURL; // @dynamic hasViralAdResponseURL;
@property(nonatomic) _Bool hasViralCampaignId; // @dynamic hasViralCampaignId;
@property(retain, nonatomic) YTIVideoAd_VideoAdBreakOffset *offset; // @dynamic offset;
@property(copy, nonatomic) NSString *viralAdResponse; // @dynamic viralAdResponse;
@property(copy, nonatomic) NSString *viralAdResponseURL; // @dynamic viralAdResponseURL;
@property(nonatomic) long long viralCampaignId; // @dynamic viralCampaignId;

@end


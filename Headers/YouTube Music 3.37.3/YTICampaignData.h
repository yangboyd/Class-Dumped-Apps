//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface YTICampaignData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int attributionFeature; // @dynamic attributionFeature;
@property(readonly, nonatomic) int campaignIdOneOfCase; // @dynamic campaignIdOneOfCase;
@property(nonatomic) _Bool hasAttributionFeature; // @dynamic hasAttributionFeature;
@property(nonatomic) _Bool hasRelativeURL; // @dynamic hasRelativeURL;
@property(nonatomic) _Bool hasTimestampUsec; // @dynamic hasTimestampUsec;
@property(nonatomic) _Bool hasUtmCampaign; // @dynamic hasUtmCampaign;
@property(nonatomic) _Bool hasUtmContent; // @dynamic hasUtmContent;
@property(nonatomic) _Bool hasUtmMedium; // @dynamic hasUtmMedium;
@property(nonatomic) _Bool hasUtmSource; // @dynamic hasUtmSource;
@property(nonatomic) _Bool hasUtmTerm; // @dynamic hasUtmTerm;
@property(nonatomic) _Bool hasYtCampaignId; // @dynamic hasYtCampaignId;
@property(copy, nonatomic) NSString *marketingTag; // @dynamic marketingTag;
@property(copy, nonatomic) NSString *relativeURL; // @dynamic relativeURL;
@property(nonatomic) long long timestampUsec; // @dynamic timestampUsec;
@property(copy, nonatomic) NSString *utmCampaign; // @dynamic utmCampaign;
@property(copy, nonatomic) NSString *utmContent; // @dynamic utmContent;
@property(copy, nonatomic) NSString *utmMedium; // @dynamic utmMedium;
@property(copy, nonatomic) NSString *utmSource; // @dynamic utmSource;
@property(copy, nonatomic) NSString *utmTerm; // @dynamic utmTerm;
@property(copy, nonatomic) NSString *ytCampaignId; // @dynamic ytCampaignId;

@end


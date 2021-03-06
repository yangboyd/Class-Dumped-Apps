//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ALKPAccountLinkingConfig, ALKPBrandingInfo, ALKPConsentConfig, ALKPGoogleMetadata, ALKPRiscConfig, NSString;

@interface ALKPPartnerConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ALKPAccountLinkingConfig *accountLinkingConfig; // @dynamic accountLinkingConfig;
@property(retain, nonatomic) ALKPBrandingInfo *brandingInfo; // @dynamic brandingInfo;
@property(retain, nonatomic) ALKPConsentConfig *consentConfig; // @dynamic consentConfig;
@property(retain, nonatomic) ALKPGoogleMetadata *googleMetadata; // @dynamic googleMetadata;
@property(nonatomic) _Bool hasAccountLinkingConfig; // @dynamic hasAccountLinkingConfig;
@property(nonatomic) _Bool hasBrandingInfo; // @dynamic hasBrandingInfo;
@property(nonatomic) _Bool hasConsentConfig; // @dynamic hasConsentConfig;
@property(nonatomic) _Bool hasGoogleMetadata; // @dynamic hasGoogleMetadata;
@property(nonatomic) _Bool hasNeedTokenId; // @dynamic hasNeedTokenId;
@property(nonatomic) _Bool hasPartnerId; // @dynamic hasPartnerId;
@property(nonatomic) _Bool hasRiscConfig; // @dynamic hasRiscConfig;
@property(nonatomic) _Bool needTokenId; // @dynamic needTokenId;
@property(copy, nonatomic) NSString *partnerId; // @dynamic partnerId;
@property(retain, nonatomic) ALKPRiscConfig *riscConfig; // @dynamic riscConfig;

@end


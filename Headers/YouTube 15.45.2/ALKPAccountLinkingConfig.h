//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class ALKPAppFlipConfig, ALKPGsiConfig, ALKPOAuth2Config, ALKPTokenRefreshPolicyConfig, ALKPTwoWayLinkingConfig;

@interface ALKPAccountLinkingConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ALKPAppFlipConfig *appFlipConfig; // @dynamic appFlipConfig;
@property(retain, nonatomic) ALKPGsiConfig *gsiConfig; // @dynamic gsiConfig;
@property(nonatomic) _Bool hasAppFlipConfig; // @dynamic hasAppFlipConfig;
@property(nonatomic) _Bool hasGsiConfig; // @dynamic hasGsiConfig;
@property(nonatomic) _Bool hasOauth2Config; // @dynamic hasOauth2Config;
@property(nonatomic) _Bool hasTokenRefreshPolicyConfig; // @dynamic hasTokenRefreshPolicyConfig;
@property(nonatomic) _Bool hasTwoWayLinkingConfig; // @dynamic hasTwoWayLinkingConfig;
@property(retain, nonatomic) ALKPOAuth2Config *oauth2Config; // @dynamic oauth2Config;
@property(retain, nonatomic) ALKPTokenRefreshPolicyConfig *tokenRefreshPolicyConfig; // @dynamic tokenRefreshPolicyConfig;
@property(retain, nonatomic) ALKPTwoWayLinkingConfig *twoWayLinkingConfig; // @dynamic twoWayLinkingConfig;

@end


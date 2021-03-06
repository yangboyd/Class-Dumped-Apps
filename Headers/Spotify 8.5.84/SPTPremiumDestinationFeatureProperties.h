//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTRemoteConfigurationProperties-Protocol.h"

@class NSString;

@interface SPTPremiumDestinationFeatureProperties : NSObject <SPTRemoteConfigurationProperties>
{
    _Bool _mercuryPremiumHubsPageShowLegacyIos;
    _Bool _premiumHeaderVoiceoverAccessibleEnabled;
    _Bool _premiumDestinationTabbarBadgeEnabled;
    unsigned long long _premiumDestinationTrialOfferRibbon;
    unsigned long long _premiumDestinationSystemNotification;
    NSString *_premiumDestinationTrialOfferRibbonString;
    NSString *_premiumDestinationSystemNotificationString;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *premiumDestinationSystemNotificationString; // @synthesize premiumDestinationSystemNotificationString=_premiumDestinationSystemNotificationString;
@property(retain, nonatomic) NSString *premiumDestinationTrialOfferRibbonString; // @synthesize premiumDestinationTrialOfferRibbonString=_premiumDestinationTrialOfferRibbonString;
@property(readonly, nonatomic) unsigned long long premiumDestinationSystemNotification; // @synthesize premiumDestinationSystemNotification=_premiumDestinationSystemNotification;
@property(readonly, nonatomic) unsigned long long premiumDestinationTrialOfferRibbon; // @synthesize premiumDestinationTrialOfferRibbon=_premiumDestinationTrialOfferRibbon;
@property(readonly, nonatomic) _Bool premiumDestinationTabbarBadgeEnabled; // @synthesize premiumDestinationTabbarBadgeEnabled=_premiumDestinationTabbarBadgeEnabled;
@property(readonly, nonatomic) _Bool premiumHeaderVoiceoverAccessibleEnabled; // @synthesize premiumHeaderVoiceoverAccessibleEnabled=_premiumHeaderVoiceoverAccessibleEnabled;
@property(readonly, nonatomic) _Bool mercuryPremiumHubsPageShowLegacyIos; // @synthesize mercuryPremiumHubsPageShowLegacyIos=_mercuryPremiumHubsPageShowLegacyIos;
- (unsigned long long)mapPremiumDestinationSystemNotificationToEnumValue:(id)arg1;
- (unsigned long long)mapPremiumDestinationTrialOfferRibbonToEnumValue:(id)arg1;
- (id)propertyModels;
- (id)initWithPropertyValuesDictionary:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


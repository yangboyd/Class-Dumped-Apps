//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SQPBCashBulletinAppActivityInlineMessage, SQPBCashBulletinAppAppMessageFormat, SQPBCashBulletinAppHomeScreenMessage;

@interface SQPBCashBulletinAppAppMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SQPBCashBulletinAppActivityInlineMessage *activityInlineMessage; // @dynamic activityInlineMessage;
@property(retain, nonatomic) SQPBCashBulletinAppAppMessageFormat *appMessageFormat; // @dynamic appMessageFormat;
@property(copy, nonatomic) NSString *campaignToken; // @dynamic campaignToken;
@property(nonatomic) _Bool hasAppMessageFormat; // @dynamic hasAppMessageFormat;
@property(nonatomic) _Bool hasCampaignToken; // @dynamic hasCampaignToken;
@property(nonatomic) _Bool hasIsBadged; // @dynamic hasIsBadged;
@property(nonatomic) _Bool hasMessageToken; // @dynamic hasMessageToken;
@property(retain, nonatomic) SQPBCashBulletinAppHomeScreenMessage *homeScreenMessage; // @dynamic homeScreenMessage;
@property(nonatomic) _Bool isBadged; // @dynamic isBadged;
@property(readonly, nonatomic) int messageOneOfCase; // @dynamic messageOneOfCase;
@property(copy, nonatomic) NSString *messageToken; // @dynamic messageToken;

@end


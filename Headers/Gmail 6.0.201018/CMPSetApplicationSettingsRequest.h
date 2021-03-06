//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class CMPApplicationSettings, NSData, NSString;

@interface CMPSetApplicationSettingsRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *applicationId; // @dynamic applicationId;
@property(retain, nonatomic) CMPApplicationSettings *applicationSettings; // @dynamic applicationSettings;
@property(copy, nonatomic) NSData *deviceToken; // @dynamic deviceToken;
@property(nonatomic) _Bool hasApplicationId; // @dynamic hasApplicationId;
@property(nonatomic) _Bool hasApplicationSettings; // @dynamic hasApplicationSettings;
@property(nonatomic) _Bool hasDeviceToken; // @dynamic hasDeviceToken;
@property(nonatomic) _Bool hasInboxMismatch; // @dynamic hasInboxMismatch;
@property(nonatomic) _Bool hasRequestTimestampMs; // @dynamic hasRequestTimestampMs;
@property(nonatomic) _Bool hasUserId; // @dynamic hasUserId;
@property(nonatomic) _Bool inboxMismatch; // @dynamic inboxMismatch;
@property(nonatomic) long long requestTimestampMs; // @dynamic requestTimestampMs;
@property(nonatomic) long long userId; // @dynamic userId;

@end


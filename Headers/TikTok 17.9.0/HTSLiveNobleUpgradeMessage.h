//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class HTSLiveCommon, HTSLiveGiftIMPriority, HTSLiveImage, HTSLiveUser, NSString;

@interface HTSLiveNobleUpgradeMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) HTSLiveImage *backgroundNormal; // @dynamic backgroundNormal;
@property(retain, nonatomic) HTSLiveImage *backgroundPop; // @dynamic backgroundPop;
@property(retain, nonatomic) HTSLiveCommon *common; // @dynamic common;
@property(nonatomic) int displayStyle; // @dynamic displayStyle;
@property(nonatomic) _Bool hasBackgroundNormal; // @dynamic hasBackgroundNormal;
@property(nonatomic) _Bool hasBackgroundPop; // @dynamic hasBackgroundPop;
@property(nonatomic) _Bool hasCommon; // @dynamic hasCommon;
@property(nonatomic) _Bool hasPriority; // @dynamic hasPriority;
@property(nonatomic) _Bool hasUser; // @dynamic hasUser;
@property(copy, nonatomic) NSString *openURL; // @dynamic openURL;
@property(retain, nonatomic) HTSLiveGiftIMPriority *priority; // @dynamic priority;
@property(retain, nonatomic) HTSLiveUser *user; // @dynamic user;

@end


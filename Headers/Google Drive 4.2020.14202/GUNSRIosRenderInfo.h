//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSMutableArray, NSString;

@interface GUNSRIosRenderInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *alertText; // @dynamic alertText;
@property(copy, nonatomic) NSString *alertTitle; // @dynamic alertTitle;
@property(retain, nonatomic) NSMutableArray *appPayloadArray; // @dynamic appPayloadArray;
@property(readonly, nonatomic) unsigned long long appPayloadArray_Count; // @dynamic appPayloadArray_Count;
@property(nonatomic) _Bool backgroundEnabled; // @dynamic backgroundEnabled;
@property(nonatomic) int badgeCount; // @dynamic badgeCount;
@property(copy, nonatomic) NSString *category; // @dynamic category;
@property(nonatomic) _Bool hasAlertText; // @dynamic hasAlertText;
@property(nonatomic) _Bool hasAlertTitle; // @dynamic hasAlertTitle;
@property(nonatomic) _Bool hasBackgroundEnabled; // @dynamic hasBackgroundEnabled;
@property(nonatomic) _Bool hasBadgeCount; // @dynamic hasBadgeCount;
@property(nonatomic) _Bool hasCategory; // @dynamic hasCategory;
@property(nonatomic) _Bool hasMutableContent; // @dynamic hasMutableContent;
@property(nonatomic) _Bool hasPushType; // @dynamic hasPushType;
@property(nonatomic) _Bool hasSound; // @dynamic hasSound;
@property(nonatomic) _Bool mutableContent; // @dynamic mutableContent;
@property(nonatomic) int pushType; // @dynamic pushType;
@property(copy, nonatomic) NSString *sound; // @dynamic sound;

@end


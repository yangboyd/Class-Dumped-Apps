//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface GRWGoogleActionsEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *bundleIdentifier; // @dynamic bundleIdentifier;
@property(nonatomic) _Bool hasBundleIdentifier; // @dynamic hasBundleIdentifier;
@property(nonatomic) _Bool hasIntentType; // @dynamic hasIntentType;
@property(nonatomic) _Bool hasLinkType; // @dynamic hasLinkType;
@property(nonatomic) int intentType; // @dynamic intentType;
@property(nonatomic) int linkType; // @dynamic linkType;
@property(retain, nonatomic) NSMutableArray *presentedAppsArray; // @dynamic presentedAppsArray;
@property(readonly, nonatomic) unsigned long long presentedAppsArray_Count; // @dynamic presentedAppsArray_Count;

@end


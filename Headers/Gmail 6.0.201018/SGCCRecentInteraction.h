//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class GPBTimestamp, GSCRecentInteraction, NSString, SGCCRecentInteraction_RecentInteractionMetadata, WHTSafeHtmlProto;

@interface SGCCRecentInteraction : GPBMessage
{
}

+ (id)descriptor;
@property(readonly, nonatomic) int gscType;
@property(readonly, nonatomic) GSCRecentInteraction *gscRecentInteraction;

// Remaining properties
@property(nonatomic) _Bool hasMetadata; // @dynamic hasMetadata;
@property(nonatomic) _Bool hasSafeHtmlTitle; // @dynamic hasSafeHtmlTitle;
@property(nonatomic) _Bool hasTargetURL; // @dynamic hasTargetURL;
@property(nonatomic) _Bool hasTimestamp; // @dynamic hasTimestamp;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(retain, nonatomic) SGCCRecentInteraction_RecentInteractionMetadata *metadata; // @dynamic metadata;
@property(retain, nonatomic) WHTSafeHtmlProto *safeHtmlTitle; // @dynamic safeHtmlTitle;
@property(copy, nonatomic) NSString *targetURL; // @dynamic targetURL;
@property(retain, nonatomic) GPBTimestamp *timestamp; // @dynamic timestamp;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) int type; // @dynamic type;

@end


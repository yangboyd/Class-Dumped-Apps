//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class LOGAncestryVisualElementProto, TSKLTasksVisualElementMetadata;

@interface TSKLTasksVisualElementEntry : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) LOGAncestryVisualElementProto *ancestryVisualElement; // @dynamic ancestryVisualElement;
@property(nonatomic) int appUiMode; // @dynamic appUiMode;
@property(nonatomic) int companionHostApp; // @dynamic companionHostApp;
@property(nonatomic) _Bool hasAncestryVisualElement; // @dynamic hasAncestryVisualElement;
@property(nonatomic) _Bool hasAppUiMode; // @dynamic hasAppUiMode;
@property(nonatomic) _Bool hasCompanionHostApp; // @dynamic hasCompanionHostApp;
@property(nonatomic) _Bool hasHostApp; // @dynamic hasHostApp;
@property(nonatomic) _Bool hasVisualElementMetadata; // @dynamic hasVisualElementMetadata;
@property(nonatomic) int hostApp; // @dynamic hostApp;
@property(retain, nonatomic) TSKLTasksVisualElementMetadata *visualElementMetadata; // @dynamic visualElementMetadata;

@end


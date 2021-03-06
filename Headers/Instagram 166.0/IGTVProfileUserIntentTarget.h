//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/FBIntentTarget-Protocol.h>

@class IGMedia, IGTVDestinationLoggingProvider, IGUserReference, NSDictionary, NSString;

@interface IGTVProfileUserIntentTarget : NSObject <FBIntentTarget>
{
    IGUserReference *_userReference;
    NSString *_previousAnalyticsModule;
    NSString *_entryAction;
    IGTVDestinationLoggingProvider *_destinationLoggingProvider;
    IGMedia *_attributingFeedItem;
    NSDictionary *_followLoggingExtras;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *followLoggingExtras; // @synthesize followLoggingExtras=_followLoggingExtras;
@property(readonly, nonatomic) IGMedia *attributingFeedItem; // @synthesize attributingFeedItem=_attributingFeedItem;
@property(readonly, nonatomic) IGTVDestinationLoggingProvider *destinationLoggingProvider; // @synthesize destinationLoggingProvider=_destinationLoggingProvider;
@property(readonly, nonatomic) NSString *entryAction; // @synthesize entryAction=_entryAction;
@property(readonly, nonatomic) NSString *previousAnalyticsModule; // @synthesize previousAnalyticsModule=_previousAnalyticsModule;
@property(readonly, nonatomic) IGUserReference *userReference; // @synthesize userReference=_userReference;
- (id)initWithUserReference:(id)arg1 previousAnalyticsModule:(id)arg2 entryAction:(id)arg3 destinationLoggingProvider:(id)arg4 attributingFeedItem:(id)arg5 followLoggingExtras:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


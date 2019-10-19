//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTLastUsedCSNProvider-Protocol.h"

@class GIMMe, NSMutableDictionary, NSString;
@protocol YTEventLogger, YTInteractionLoggingConfig, YTLastActionProvider;

@interface YTInteractionLoggingOnGELController : NSObject <YTLastUsedCSNProvider>
{
    id <YTInteractionLoggingConfig> _config;
    id <YTLastActionProvider> _lactProvider;
    unsigned long long _forcedEventTimeMs;
    id <YTEventLogger> _eventLogger;
    NSMutableDictionary *_sequenceCounterInfo;
    NSString *_lastUsedCSN;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (int)maxNumberOfScreensForSequenceInfo;
- (void)removeOldSequenceCounterInfoIfNecessary;
- (id)sequenceCounterInfo;
- (void)updateLastUsedCSNWithCSN:(id)arg1;
- (id)lastUsedCSN;
- (id)generateSequenceInfo:(id)arg1;
- (void)addPageVEToNetworkContext:(int)arg1;
- (void)addPageVEToCrashContext:(int)arg1;
- (void)addInteractionVEToCrashContext:(int)arg1;
- (void)logPlaybackAssociatedForVisualElement:(id)arg1 CSN:(id)arg2 CPN:(id)arg3;
- (void)logStateChangeForVisualElement:(id)arg1 CSN:(id)arg2 clientData:(id)arg3;
- (void)logVisibilityUpdateForVisualElement:(id)arg1 CSN:(id)arg2 loggingDirectives:(id)arg3 clientData:(id)arg4 eventType:(int)arg5;
- (void)logClickForVisualElement:(id)arg1 CSN:(id)arg2 clientData:(id)arg3 gestureType:(int)arg4;
- (void)logScreenGraftWithVisualElement:(id)arg1 CSN:(id)arg2 cloneCSN:(id)arg3 screenClientData:(id)arg4 implicitGesture:(id)arg5 isRootScreen:(_Bool)arg6;
- (void)logScreenGraftAttachChildForVisualElements:(id)arg1 parentVisualElement:(id)arg2 CSN:(id)arg3 clientData:(id)arg4;
- (void)logScreenGraftAttachChildForVisualElement:(id)arg1 parentVisualElement:(id)arg2 CSN:(id)arg3 clientData:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


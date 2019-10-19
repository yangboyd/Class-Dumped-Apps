//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SPTLogCenter, SPTViewLogger;

@interface SPTFreeTierTasteOnboardingArtistPickerViewLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
    id <SPTViewLogger> _viewLogger;
    NSString *_sessionId;
}

@property(readonly, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(readonly, nonatomic) id <SPTViewLogger> viewLogger; // @synthesize viewLogger=_viewLogger;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logViewDataDidLoad;
- (void)logViewDataDidFailToLoad;
- (void)logViewLoadingStarted;
- (void)logTasteOnboardingInteractionWithIdentifier:(id)arg1 contentSource:(id)arg2 contentSourceUri:(id)arg3 section:(id)arg4 intent:(id)arg5 position:(unsigned long long)arg6 maxPosition:(unsigned long long)arg7 sequenceNumber:(unsigned long long)arg8 interactionId:(id)arg9;
- (void)logInteractionType:(id)arg1 withIntent:(id)arg2 index:(unsigned long long)arg3 identifier:(id)arg4;
- (void)logInteractionType:(id)arg1 withIntent:(id)arg2;
- (void)logImpressionType:(id)arg1 withRenderType:(id)arg2 index:(unsigned long long)arg3 identifier:(id)arg4;
- (void)logImpressionType:(id)arg1 withRenderType:(id)arg2;
- (void)logSelectGenreInteractionWithIdentifier:(id)arg1 contentSource:(id)arg2 contentSourceUri:(id)arg3 section:(id)arg4 position:(unsigned long long)arg5 maxPosition:(unsigned long long)arg6 sequenceNumber:(unsigned long long)arg7 interactionId:(id)arg8;
- (void)logDeselectArtistInteractionWithIdentifier:(id)arg1 contentSource:(id)arg2 contentSourceUri:(id)arg3 section:(id)arg4 position:(unsigned long long)arg5 maxPosition:(unsigned long long)arg6 sequenceNumber:(unsigned long long)arg7 interactionId:(id)arg8;
- (void)logSelectArtistInteractionWithIdentifier:(id)arg1 contentSource:(id)arg2 contentSourceUri:(id)arg3 section:(id)arg4 position:(unsigned long long)arg5 maxPosition:(unsigned long long)arg6 sequenceNumber:(unsigned long long)arg7 interactionId:(id)arg8;
- (void)logPodcastInFirstTimeFlowEnabled:(_Bool)arg1;
- (void)logArtistPickerStyleImpressionWithStockholmBlackEnabled:(_Bool)arg1;
- (void)logAfterSignUpInteraction;
- (void)logNextImpression;
- (void)logNextInteraction;
- (void)logSearchInteraction;
- (void)logItemExpansionInteractionWithIdentifier:(id)arg1 position:(unsigned long long)arg2;
- (void)logItemDeselectionInteractionWithIdentifier:(id)arg1 position:(unsigned long long)arg2;
- (void)logItemSelectionInteractionWithIdentifier:(id)arg1 position:(unsigned long long)arg2;
- (void)logItemImpressionWithIdentifier:(id)arg1 position:(unsigned long long)arg2;
- (id)initWithLogCenter:(id)arg1 viewLogger:(id)arg2 sessionId:(id)arg3;

@end


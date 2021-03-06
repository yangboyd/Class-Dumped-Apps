//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGStoryViewerViewModel;
@protocol IGStoryFullscreenControllerTypeDelegate, IGStoryFullscreenSectionLoggingContextType><IGGatingLoggingProviderDelegate, IGStoryItemType><IGUnitItemInformationProviding, IGStoryRotaryFullscreenSectionControllerDelegate;

@protocol IGStoryFullscreenControllerType <NSObject>
@property(nonatomic) _Bool isFocusedController;
@property(nonatomic) __weak id <IGStoryRotaryFullscreenSectionControllerDelegate> rotaryDelegate;
@property(nonatomic) __weak id <IGStoryFullscreenControllerTypeDelegate> delegate;
@property(readonly, nonatomic) IGStoryViewerViewModel *viewModel;
@property(nonatomic) _Bool audioEnabled;
@property(nonatomic) long long errorType;
- (double)targetDimmingPercentForProposedDimmingPercent:(double)arg1;
- (void)addSharingInterstitialViewWithDelegate:(id)arg1;
- (id <IGStoryFullscreenSectionLoggingContextType><IGGatingLoggingProviderDelegate>)sectionLoggingContext;
- (id <IGStoryItemType><IGUnitItemInformationProviding>)currentStoryItem;
- (void)setFooterHidden:(_Bool)arg1;
- (void)seekToBeginning;
- (void)resetSeenState;
- (void)stopWithReason:(long long)arg1;
- (void)pauseWithReason:(long long)arg1;
- (void)tryResumePlaybackWithReason:(long long)arg1;
- (_Bool)isPlaying;
@end


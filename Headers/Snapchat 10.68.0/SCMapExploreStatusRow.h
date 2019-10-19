//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAvatarViewDelegate-Protocol.h"
#import "SCMapCarouselEmbeddedScreenshotViewDelegate-Protocol.h"
#import "SCMapCarouselFocusableRow-Protocol.h"
#import "SCMapCarouselInlineChatViewDelegate-Protocol.h"
#import "SCMapCarouselPoiPlayer-Protocol.h"
#import "SCMapCarouselRow-Protocol.h"
#import "SCMapPeopleFriendsListener-Protocol.h"
#import "SCMapStatusViewedStateListener-Protocol.h"

@class NSString, SCExperimentManager, SCMapCarouselInlineChatView, SCMapCarouselItemCell, SCMapExploreStatusCarouselItemViewModel, SCMapReplySessionLogger, SCMapUserPreferences;
@protocol SCImageDownloading, SCMapCarouselFocusDelegate, SCMapCarouselRowHeightUpdatesObserver, SCMapExploreStatusRowDelegate, SCMapPeopleFriendsProvider, SCMapReplyScreenshotGenerating, SCMapStatusViewedStateProvider;

@interface SCMapExploreStatusRow : NSObject <SCMapPeopleFriendsListener, SCAvatarViewDelegate, SCMapCarouselPoiPlayer, SCMapCarouselInlineChatViewDelegate, SCMapStatusViewedStateListener, SCMapCarouselEmbeddedScreenshotViewDelegate, SCMapCarouselRow, SCMapCarouselFocusableRow>
{
    id <SCImageDownloading> _imageDownloader;
    id <SCMapPeopleFriendsProvider> _peopleProvider;
    _Bool _showsInlineReply;
    id <SCMapStatusViewedStateProvider> _viewedStateProvider;
    SCMapUserPreferences *_userPreferences;
    SCExperimentManager *_experimentManager;
    unsigned long long _mapSessionId;
    SCMapCarouselItemCell *_cell;
    SCMapCarouselInlineChatView *_inlineChatField;
    _Bool _willBeFocused;
    _Bool _isInFocusMode;
    id <SCMapReplyScreenshotGenerating> _screenshotGenerator;
    _Bool _hideScreenshot;
    _Bool _screenshotViewEnabled;
    id <SCMapCarouselFocusDelegate> _focusDelegate;
    id <SCMapCarouselRowHeightUpdatesObserver> _heightUpdatesObserver;
    id <SCMapExploreStatusRowDelegate> _delegate;
    SCMapExploreStatusCarouselItemViewModel *_viewModel;
    SCMapReplySessionLogger *_mapReplySessionLoggerForFocusedTextReply;
}

+ (Class)cellClass;
@property(retain, nonatomic) SCMapReplySessionLogger *mapReplySessionLoggerForFocusedTextReply; // @synthesize mapReplySessionLoggerForFocusedTextReply=_mapReplySessionLoggerForFocusedTextReply;
@property(retain, nonatomic) SCMapExploreStatusCarouselItemViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <SCMapExploreStatusRowDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SCMapCarouselRowHeightUpdatesObserver> heightUpdatesObserver; // @synthesize heightUpdatesObserver=_heightUpdatesObserver;
@property(nonatomic) __weak id <SCMapCarouselFocusDelegate> focusDelegate; // @synthesize focusDelegate=_focusDelegate;
- (void).cxx_destruct;
- (_Bool)_shouldShowSendButton;
- (id)_createMapReplySessionLoggerWithType:(long long)arg1;
- (_Bool)_shouldShowScreenshot;
- (_Bool)_shouldSendScreenshot;
- (void)_removeScreenshot;
- (void)embeddedScreenshotView:(id)arg1 wantsToChangeEnabledStateTo:(_Bool)arg2;
- (void)embeddedScreenshotViewDidTapX:(id)arg1;
- (void)mapStoryIconView:(id)arg1 didAskToPlayMapStorywithPoiId:(id)arg2;
- (void)handleLongPressOnStoryIconFromAvatarView:(id)arg1;
- (void)handleTapOnStoryIconFromAvatarView:(id)arg1;
- (void)handleTapOnBitmojiFromAvatarView:(id)arg1;
- (void)mapStatusViewedStateProvider:(id)arg1 didUpdateStatusIds:(id)arg2;
- (void)peopleFriendsProviderDidUpdateFeedItems:(id)arg1;
- (void)peopleFriendsProvider:(id)arg1 didUpdateStoryForUserIds:(id)arg2;
- (void)peopleFriendsProviderDidUpdate:(id)arg1;
- (void)_getCounterpartRowControllerAfterExitingFocusModeIfNecessary:(CDUnknownBlockType)arg1;
- (void)_didTapRightButton:(id)arg1;
- (void)mapCarouselInlineChatViewPressedCamera:(id)arg1;
- (void)mapCarouselInlineChatViewPressedSend:(id)arg1;
- (void)mapCarouselInlineChatViewTextDidChange:(id)arg1;
- (void)mapCarouselInlineChatViewWillResignFocus:(id)arg1;
- (_Bool)mapCarouselInlineChatViewShouldBeginEditingText:(id)arg1;
- (void)_updateCell:(id)arg1;
- (void)prepareToLeaveFocusModeState;
- (void)prepareToEnterFocusModeState;
- (id)createCopyForFocusMode;
- (void)setContentHidden:(_Bool)arg1;
- (void)setFocusModeState:(_Bool)arg1;
- (id)uniqueRowIdentifier;
- (void)configureForInlineReplyModeWithScreenshotGenerator:(id)arg1;
- (double)heightForFocusModeWithMaximumHeight:(double)arg1 width:(double)arg2;
- (double)heightForWidth:(double)arg1;
- (void)didEndDisplayingCell:(id)arg1;
- (void)updateCell:(id)arg1;
- (Class)cellClass;
- (id)reuseIdentifier;
- (id)initWithImageDownloader:(id)arg1 peopleProvider:(id)arg2 showsInlineReply:(_Bool)arg3 viewedStateProvider:(id)arg4 userPreferences:(id)arg5 experimentManager:(id)arg6 mapSessionId:(unsigned long long)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


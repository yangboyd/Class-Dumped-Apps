//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEAwemeModel, AWEBubble, AWEDouplusToastModel, LOTAnimationView, NSArray, NSDate, NSNumber, NSString, NSTimer, TikTokBubble, UITableView, UIView;
@protocol AWEAwemeFeedVideoButtonProtocol;

@protocol AWEFeedGuideManagerProtocol <NSObject>

@optional
+ (id)sharedInstance;
@property(nonatomic) long long feedCleanScreenStatus;
@property(nonatomic) _Bool isMultiFuncCoverAnimating;
@property(nonatomic) _Bool isShowedDouPlusToast;
@property(nonatomic) _Bool isShowingFunctionPage;
@property(nonatomic) _Bool isDownloading;
@property(nonatomic) _Bool isAutoPlaying;
@property(retain, nonatomic) NSArray *playedVideos;
@property(nonatomic) _Bool isIDFAAlertShowing;
@property(nonatomic) _Bool isVideoPlayPaused;
@property(nonatomic) double toastTimerLeftTime;
@property(retain, nonatomic) NSDate *toastTimerBeginDate;
@property(retain, nonatomic) NSTimer *toastTimer;
@property(retain, nonatomic) NSString *awemeModelItemId;
@property(retain, nonatomic) AWEBubble *stayHomeGuideToastView;
@property(retain, nonatomic) UIView *shareButtonImageView;
@property(nonatomic) __weak UIView<AWEAwemeFeedVideoButtonProtocol> *stayHomeGuideIconView;
@property(retain, nonatomic) LOTAnimationView *shareShakeAnimationView;
@property(retain, nonatomic) UIView *feedNewUserShareGuideView;
@property(nonatomic) _Bool feedFollowGuideViewDismiss;
@property(retain, nonatomic) LOTAnimationView *feedFollowGuideAnimationView;
@property(nonatomic) __weak UIView *feedFollowgestureRecognizerView;
@property(retain, nonatomic) UIView *feedFollowGuideView;
@property(retain, nonatomic) AWEBubble *DOUPlusBubbleView;
@property(retain, nonatomic) TikTokBubble *insightsDetailView;
@property(retain, nonatomic) AWEBubble *followHintView;
- (void)resetAllGuides;
- (void)dismissCurrentGuides;
- (void)requestIDFAAuthorizationWithPlayedAweme:(NSString *)arg1;
- (_Bool)shouldReqIDFAAuthInScene:(unsigned long long)arg1 Aweme:(AWEAwemeModel *)arg2;
- (void)requestIDFAAuthorizationScene:(unsigned long long)arg1 completion:(void (^)(void))arg2;
- (NSString *)playMode;
- (void)shouldShowConcernTabGuideIfNeeded:(UIView *)arg1;
- (void)removeDOUPlusEneryGuideBubble;
- (AWEBubble *)showDOUPlusEntryGuideIfNeedInOtherHomePage:(UIView *)arg1 inContainerView:(UIView *)arg2;
- (AWEBubble *)showDOUPlusEntryGuideIfNeedInOtherHomePage:(UIView *)arg1;
- (NSNumber *)DOUPlusOperationToastIDThatRecentlyDisplayed;
- (AWEBubble *)showDOUPlusEntryGuideIfNeed:(UIView *)arg1 douplusToastModel:(AWEDouplusToastModel *)arg2 inContainerView:(UIView *)arg3;
- (AWEBubble *)showDOUPlusEntryGuideIfNeed:(UIView *)arg1 douplusToastModel:(AWEDouplusToastModel *)arg2;
- (void)removeInsightsBubble;
- (TikTokBubble *)showInsightsGuideIfNeeded:(UIView *)arg1;
- (TikTokBubble *)showInsightsGuideIfNeeded:(UIView *)arg1 inContainerView:(UIView *)arg2;
- (void)resumeStayHomeVideo;
- (void)pauseStayHomeVideo;
- (void)dismissStayHomeShareGuideWithAwemeId:(NSString *)arg1 withType:(long long)arg2;
- (_Bool)needAvoidStayHomeShareGuideWithAweme:(AWEAwemeModel *)arg1;
- (_Bool)needAvoidNewUserGuideWhenFlip;
- (void)showStayHomeShareGuideOnView:(UIView<AWEAwemeFeedVideoButtonProtocol> *)arg1 inContainerView:(UIView *)arg2 withAweme:(AWEAwemeModel *)arg3 withReferString:(NSString *)arg4 showSharePanelBlock:(void (^)(void))arg5;
- (void)addVideoIDToShownVideoIDDictionary:(NSString *)arg1;
- (_Bool)checkIfShouldShowShareGuideAnimationWithVideoID:(NSString *)arg1;
- (NSString *)feedShareGuideLastShareType;
- (void)dismissNewUserShareGuideViewAnimated:(_Bool)arg1;
- (void)showNewUserShareGuideViewWithAweme:(AWEAwemeModel *)arg1 onView:(UIView<AWEAwemeFeedVideoButtonProtocol> *)arg2;
- (_Bool)showNewUserShareGuideIfNeededOnView:(UIView<AWEAwemeFeedVideoButtonProtocol> *)arg1 withAweme:(AWEAwemeModel *)arg2 loopCount:(long long)arg3 fromLike:(_Bool)arg4 showSharePanelBlock:(void (^)(void))arg5;
- (void)markNewUserDidShowShareAwemePanel;
- (void)recordNewUserActiveDays;
- (_Bool)shouldShowFollowHintGuide;
- (_Bool)closeFollowHintGuideIfNeeded;
- (void)showFeedFollowGuideIfNeededOnView:(UIView *)arg1;
- (void)showFollowHintGuideIfNeededOnView:(UIView *)arg1 inContainerView:(UIView *)arg2 frame:(struct CGRect)arg3 userID:(NSString *)arg4;
- (void)showFollowHintGuideIfNeededOnView:(UIView *)arg1 frame:(struct CGRect)arg2 userID:(NSString *)arg3;
- (void)showNewUserSwipeUpGuideOnTableView:(UITableView *)arg1;
- (void)endDisplayingGuideWithLifeTime:(id)arg1;
- (void)beginDisplayingGuideWithLifeTime:(id)arg1;
- (_Bool)isDisplayingGuideWithObject:(id)arg1;
- (_Bool)isDisplayingGuide;
@end


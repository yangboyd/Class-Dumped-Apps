//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YCHLiveChatContinuationHandlerDelegate-Protocol.h>
#import <Module_Framework/YCHLiveChatReplayHandlerDelegate-Protocol.h>
#import <Module_Framework/YTRendererController-Protocol.h>

@class GIMMe, NSHashTable, NSMutableDictionary, NSOrderedSet, NSString, YCHLiveChatBannerDataSource, YCHLiveChatCardDataSource, YCHLiveChatContinuationHandler, YCHLiveChatEventLogger, YCHLiveChatReplayHandler, YCHLiveChatService, YCHLiveChatSmoothingQueue, YCHLiveChatTickerDataSource, YTCommandRouter, YTILiveChatRenderer, YTTimedAction;
@protocol YCHLiveChatDataSourceDelegate, YTResponder;

@interface YCHLiveChatDataSource : NSObject <YCHLiveChatContinuationHandlerDelegate, YCHLiveChatReplayHandlerDelegate, YTRendererController>
{
    _Bool _ignoreAutoModActions;
    _Bool _chatPaused;
    _Bool _chatReplayEnabled;
    _Bool _isInitialLoad;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    id <YCHLiveChatDataSourceDelegate> _delegate;
    YCHLiveChatTickerDataSource *_tickerDataSource;
    YCHLiveChatBannerDataSource *_bannerDataSource;
    YCHLiveChatCardDataSource *_cardDataSource;
    NSOrderedSet *_chatItems;
    YCHLiveChatService *_liveChatService;
    YTCommandRouter *_commandRouter;
    long long _monotonicClientId;
    YTILiveChatRenderer *_liveChatRenderer;
    YCHLiveChatContinuationHandler *_continuationHandler;
    YCHLiveChatReplayHandler *_chatReplayHandler;
    YCHLiveChatSmoothingQueue *_actionQueue;
    YTTimedAction *_actionsInsertionTimer;
    NSMutableDictionary *_tickerActions;
    NSHashTable *_actionObservers;
    YCHLiveChatEventLogger *_eventLogger;
}

+ (void)setContinuationHandlerMinRequestInterval:(double)arg1;
+ (double)continuationHandlerMinRequestInterval;
@property(retain, nonatomic) YCHLiveChatEventLogger *eventLogger; // @synthesize eventLogger=_eventLogger;
@property(readonly, nonatomic) NSHashTable *actionObservers; // @synthesize actionObservers=_actionObservers;
@property(readonly, nonatomic) NSMutableDictionary *tickerActions; // @synthesize tickerActions=_tickerActions;
@property(nonatomic) _Bool isInitialLoad; // @synthesize isInitialLoad=_isInitialLoad;
@property(nonatomic) _Bool chatReplayEnabled; // @synthesize chatReplayEnabled=_chatReplayEnabled;
@property(nonatomic) _Bool chatPaused; // @synthesize chatPaused=_chatPaused;
@property(retain, nonatomic) YTTimedAction *actionsInsertionTimer; // @synthesize actionsInsertionTimer=_actionsInsertionTimer;
@property(retain, nonatomic) YCHLiveChatSmoothingQueue *actionQueue; // @synthesize actionQueue=_actionQueue;
@property(readonly, nonatomic) YCHLiveChatReplayHandler *chatReplayHandler; // @synthesize chatReplayHandler=_chatReplayHandler;
@property(readonly, nonatomic) YCHLiveChatContinuationHandler *continuationHandler; // @synthesize continuationHandler=_continuationHandler;
@property(readonly, nonatomic) YTILiveChatRenderer *liveChatRenderer; // @synthesize liveChatRenderer=_liveChatRenderer;
@property(readonly, nonatomic) long long monotonicClientId; // @synthesize monotonicClientId=_monotonicClientId;
@property(readonly, nonatomic) __weak YTCommandRouter *commandRouter; // @synthesize commandRouter=_commandRouter;
@property(readonly, nonatomic) __weak YCHLiveChatService *liveChatService; // @synthesize liveChatService=_liveChatService;
@property(nonatomic) _Bool ignoreAutoModActions; // @synthesize ignoreAutoModActions=_ignoreAutoModActions;
@property(readonly, nonatomic) NSOrderedSet *chatItems; // @synthesize chatItems=_chatItems;
@property(nonatomic) __weak YCHLiveChatCardDataSource *cardDataSource; // @synthesize cardDataSource=_cardDataSource;
@property(nonatomic) __weak YCHLiveChatBannerDataSource *bannerDataSource; // @synthesize bannerDataSource=_bannerDataSource;
@property(nonatomic) __weak YCHLiveChatTickerDataSource *tickerDataSource; // @synthesize tickerDataSource=_tickerDataSource;
@property(nonatomic) __weak id <YCHLiveChatDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (_Bool)dontShowTickerOnSuperChatRemoval;
- (id)createSmoothingQueue;
- (id)nextClientID;
- (id)formattedStringForRichMessageInput:(id)arg1;
- (_Bool)shouldHideChatItemAction:(id)arg1;
- (void)notifyConsumeActions:(id)arg1;
- (void)notifyQueueActions:(id)arg1;
- (void)dequeueActionSlice;
- (void)onActionInsertionTimerFired;
- (void)resumeIfNeeded;
- (void)updateWithLiveChatRenderer:(id)arg1 withContinuationType:(int)arg2;
- (void)consumeActions:(id)arg1;
- (void)scheduleActions:(id)arg1 totalTime:(double)arg2;
- (void)handleTimedActions:(id)arg1 totalTime:(double)arg2;
- (void)handleSendLiveChatVoteEndpoint:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleLiveChatActionEndpoint:(id)arg1;
- (void)handleModerateLiveChatEndpoint:(id)arg1;
- (void)handleManageLiveChatUserEndpoint:(id)arg1;
- (void)initializeChatReplayHandler;
- (void)resumeChatWithChatReplayHandler:(id)arg1;
- (void)didCompleteSeekWithChatReplayHandler:(id)arg1;
- (void)willStartSeekRequestWithChatReplayHandler:(id)arg1;
- (void)pauseChatWithChatReplayHandler:(id)arg1;
- (void)chatReplayHandler:(id)arg1 shouldScheduleActions:(id)arg2 totalTime:(double)arg3;
- (void)chatReplayHandler:(id)arg1 shouldConsumeActions:(id)arg2;
- (void)willPerformLiveChatContinuationRequest:(id)arg1;
- (void)handleLiveChatRequestError:(id)arg1;
- (void)handleLiveChatRenderer:(id)arg1 withContinuationType:(int)arg2 fromResponse:(id)arg3;
- (void)forceContinuation:(_Bool)arg1;
- (void)unload;
- (void)removeActionObserver:(id)arg1;
- (void)addActionObserver:(id)arg1;
- (void)sendWithRichMessage:(id)arg1 displayMode:(int)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)loadWithModel:(id)arg1;
- (void)dealloc;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


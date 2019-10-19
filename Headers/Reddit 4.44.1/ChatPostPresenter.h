//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ListingNetworkSourceDelegate-Protocol.h"
#import "LiveCommentDelegate-Protocol.h"

@class ASBatchContext, CommentNetworkSource, LiveStream, NSArray, NSDate, NSString, NSTimer, Post, RedditService, SocketSession;
@protocol ChatPostPresenterDelegate;

@interface ChatPostPresenter : NSObject <LiveCommentDelegate, ListingNetworkSourceDelegate>
{
    _Bool _didLoseConnection;
    id <ChatPostPresenterDelegate> _delegate;
    RedditService *_service;
    LiveStream *_liveStream;
    Post *_post;
    NSArray *_typeAheadUsers;
    unsigned long long _presentationStyle;
    CDUnknownBlockType _sendButtonAction;
    CDUnknownBlockType _newMessageArrived;
    NSArray *_originalComments;
    CommentNetworkSource *_commentNetworkSource;
    SocketSession *_socketSession;
    NSTimer *_connectionAlertTimer;
    ASBatchContext *_batchContext;
    NSDate *_disconnectTime;
    NSArray *_keyValueObservations;
}

@property(copy, nonatomic) NSArray *keyValueObservations; // @synthesize keyValueObservations=_keyValueObservations;
@property(retain, nonatomic) NSDate *disconnectTime; // @synthesize disconnectTime=_disconnectTime;
@property(retain, nonatomic) ASBatchContext *batchContext; // @synthesize batchContext=_batchContext;
@property(retain, nonatomic) NSTimer *connectionAlertTimer; // @synthesize connectionAlertTimer=_connectionAlertTimer;
@property(nonatomic) _Bool didLoseConnection; // @synthesize didLoseConnection=_didLoseConnection;
@property(retain, nonatomic) SocketSession *socketSession; // @synthesize socketSession=_socketSession;
@property(retain, nonatomic) CommentNetworkSource *commentNetworkSource; // @synthesize commentNetworkSource=_commentNetworkSource;
@property(retain, nonatomic) NSArray *originalComments; // @synthesize originalComments=_originalComments;
@property(copy, nonatomic) CDUnknownBlockType newMessageArrived; // @synthesize newMessageArrived=_newMessageArrived;
@property(copy, nonatomic) CDUnknownBlockType sendButtonAction; // @synthesize sendButtonAction=_sendButtonAction;
@property(nonatomic) unsigned long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(retain, nonatomic) NSArray *typeAheadUsers; // @synthesize typeAheadUsers=_typeAheadUsers;
@property(retain, nonatomic) Post *post; // @synthesize post=_post;
@property(retain, nonatomic) LiveStream *liveStream; // @synthesize liveStream=_liveStream;
@property(readonly, nonatomic) RedditService *service; // @synthesize service=_service;
@property(nonatomic) __weak id <ChatPostPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)trackDidSendComment:(id)arg1;
- (void)trackLoadMoreEvent;
- (id)networkSourceParameters;
- (void)resetConnectionAlertTimer;
- (void)activateConnectionAlertTimer;
- (void)connectionAlertTimerFired:(id)arg1;
- (void)handleWebsocketStateChange:(long long)arg1;
- (void)reportConnectionEvent;
- (void)reconnectWebsocket;
- (void)configureLiveCommentSession;
- (id)websocketUrl;
- (void)userWasBlocked:(id)arg1;
- (void)deleteComment:(id)arg1 withFailureHandler:(CDUnknownBlockType)arg2;
- (_Bool)isCommentInCurrentComments:(id)arg1;
- (void)insertComment:(id)arg1;
- (void)commentParser:(id)arg1 didReceiveNewComment:(id)arg2;
- (id)flattenCommentsRemovingDeletedComments:(id)arg1;
@property(readonly, nonatomic) NSArray *objects;
- (void)sendChatMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)listingNetworkSourceDidFetchMoreData:(id)arg1;
- (void)listingNetworkSourceDidFail:(id)arg1;
- (void)listingNetworkSourceDidFetchData:(id)arg1 correlationID:(id)arg2;
- (_Bool)didReceiveNewMessageWhileDisconnected;
@property(readonly, nonatomic) _Bool isFetching;
- (void)fetchData;
- (void)fetchDataForContext:(id)arg1;
- (id)initWithLiveStream:(id)arg1 service:(id)arg2;
- (id)initWithPost:(id)arg1 service:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveMTRoomRemoteActions-Protocol.h"

@class HTSEventContext, LiveRoomModel, NSArray, NSString, RACCompoundDisposable;
@protocol IESLiveHTTPClient, IESLiveHTTPTask, IESLiveMTAnchorOptTopicActions;

@interface IESLiveMTOptTopicStore : NSObject <IESLiveMTRoomRemoteActions>
{
    _Bool _isRequestOnAir;
    long long _componentType;
    NSArray *_topicList;
    NSString *_didSelectChallengeID;
    HTSEventContext *_trackContext;
    NSString *_sourceFrom;
    LiveRoomModel *_roomModel;
    id <IESLiveHTTPClient> _client;
    id <IESLiveHTTPTask> _currentUpdateTask;
    RACCompoundDisposable *_disposable;
    id <IESLiveMTAnchorOptTopicActions> _actionCreator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IESLiveMTAnchorOptTopicActions> actionCreator; // @synthesize actionCreator=_actionCreator;
@property(retain, nonatomic) RACCompoundDisposable *disposable; // @synthesize disposable=_disposable;
@property(nonatomic) _Bool isRequestOnAir; // @synthesize isRequestOnAir=_isRequestOnAir;
@property(retain, nonatomic) id <IESLiveHTTPTask> currentUpdateTask; // @synthesize currentUpdateTask=_currentUpdateTask;
@property(retain, nonatomic) id <IESLiveHTTPClient> client; // @synthesize client=_client;
@property(retain, nonatomic) LiveRoomModel *roomModel; // @synthesize roomModel=_roomModel;
@property(retain, nonatomic) NSString *sourceFrom; // @synthesize sourceFrom=_sourceFrom;
@property(retain, nonatomic) HTSEventContext *trackContext; // @synthesize trackContext=_trackContext;
@property(retain, nonatomic) NSString *didSelectChallengeID; // @synthesize didSelectChallengeID=_didSelectChallengeID;
@property(retain, nonatomic) NSArray *topicList; // @synthesize topicList=_topicList;
@property(nonatomic) long long componentType; // @synthesize componentType=_componentType;
- (void)cancelAllRequest;
- (void)updateJoinedTopic:(id)arg1 newChallengeName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)createTopicWithChallengeName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didSelectTopicWithChallengeID:(id)arg1;
- (void)fetchListWithCompletion:(CDUnknownBlockType)arg1;
- (void)loadFirstListAtInitialize;
- (void)didUpdateRoom:(id)arg1;
- (void)didSetAttachingDIContext;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IFChatMessageFetcherProtocol-Protocol.h>

@class SBDGroupChannel;
@protocol IFChannelProtocol, IFChatMessageFetcherDelegate, IFSendbirdMessageFetcherChatEntityChaser;

@interface IFSendbirdMessageFetcher : NSObject <IFChatMessageFetcherProtocol>
{
    _Bool _isNextRequested;
    _Bool _isPrevRequested;
    _Bool _isLoadPrevMessagesCompleted;
    _Bool _isLoadNextMessagesCompleted;
    NSObject<IFChatMessageFetcherDelegate> *fetcherDelegate;
    NSObject<IFChannelProtocol> *_chatEntity;
    NSObject<IFSendbirdMessageFetcherChatEntityChaser> *_chaser;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLoadNextMessagesCompleted; // @synthesize isLoadNextMessagesCompleted=_isLoadNextMessagesCompleted;
@property(nonatomic) _Bool isLoadPrevMessagesCompleted; // @synthesize isLoadPrevMessagesCompleted=_isLoadPrevMessagesCompleted;
@property(nonatomic) _Bool isPrevRequested; // @synthesize isPrevRequested=_isPrevRequested;
@property(nonatomic) _Bool isNextRequested; // @synthesize isNextRequested=_isNextRequested;
@property(nonatomic) __weak NSObject<IFSendbirdMessageFetcherChatEntityChaser> *chaser; // @synthesize chaser=_chaser;
@property(retain, nonatomic) NSObject<IFChannelProtocol> *chatEntity; // @synthesize chatEntity=_chatEntity;
@property(nonatomic) __weak NSObject<IFChatMessageFetcherDelegate> *fetcherDelegate; // @synthesize fetcherDelegate;
- (void)didConnectToChats:(id)arg1;
- (void)checkUnreadMessagesCount;
- (void)loadNextMessagesFromMessageWithId:(long long)arg1;
- (void)loadPreviousMessagesFromMessageWithId:(long long)arg1;
- (void)loadLastMessages;
- (void)retrieveSendbirdChannelWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) SBDGroupChannel *channel;
- (id)initWithChatEntity:(id)arg1 chaser:(id)arg2;

@end


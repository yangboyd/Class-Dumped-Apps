//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BMWEOCFlexBuffer, BMWEOCHashLookup, BMWEOCKeepAliveFilter, BMWEOCSessionSettings, BMWEOCThread, NSMutableArray;
@protocol BMWEOCSessionDataSource;

@interface BMWEOCSession : NSObject
{
    int _messageIdCount;
    BMWEOCHashLookup *_hashLookup;
    NSObject<BMWEOCSessionDataSource> *_dataSource;
    BMWEOCThread *_sessionThread;
    unsigned long long _sessionState;
    BMWEOCSessionSettings *_settings;
    NSObject *_delegate;
    BMWEOCFlexBuffer *_receiveDataBuffer;
    long long _synchronousEtchCallTimeout;
    BMWEOCKeepAliveFilter *_keepAliveFilter;
    NSMutableArray *_sendMessageQueue;
    NSMutableArray *_currentSendMessages;
}

@property(retain) NSMutableArray *currentSendMessages; // @synthesize currentSendMessages=_currentSendMessages;
@property(retain) NSMutableArray *sendMessageQueue; // @synthesize sendMessageQueue=_sendMessageQueue;
@property(retain) BMWEOCKeepAliveFilter *keepAliveFilter; // @synthesize keepAliveFilter=_keepAliveFilter;
@property long long synchronousEtchCallTimeout; // @synthesize synchronousEtchCallTimeout=_synchronousEtchCallTimeout;
@property int messageIdCount; // @synthesize messageIdCount=_messageIdCount;
@property(retain) BMWEOCFlexBuffer *receiveDataBuffer; // @synthesize receiveDataBuffer=_receiveDataBuffer;
@property(readonly) __weak NSObject *delegate; // @synthesize delegate=_delegate;
@property(readonly) BMWEOCSessionSettings *settings; // @synthesize settings=_settings;
@property unsigned long long sessionState; // @synthesize sessionState=_sessionState;
@property(retain) BMWEOCThread *sessionThread; // @synthesize sessionThread=_sessionThread;
@property __weak NSObject<BMWEOCSessionDataSource> *dataSource; // @synthesize dataSource=_dataSource;
@property(retain) BMWEOCHashLookup *hashLookup; // @synthesize hashLookup=_hashLookup;
- (void).cxx_destruct;
- (id)deliverResultMessage:(id)arg1 error:(id)arg2 deliverBlock:(CDUnknownBlockType)arg3;
- (id)deliverMessage:(id)arg1 error:(id)arg2 isVoid:(_Bool)arg3 deliverBlock:(CDUnknownBlockType)arg4;
- (id)sendSynchronousResultMessage:(id)arg1 error:(id *)arg2;
- (_Bool)sendSynchronousVoidMessage:(id)arg1 error:(id *)arg2;
- (void)sendAysnchronousMessage:(id)arg1 voidCompletionHandler:(CDUnknownBlockType)arg2 returnCompletionHandler:(CDUnknownBlockType)arg3;
- (id)validateExceptions:(id)arg1 ofMessage:(id)arg2;
- (_Bool)object:(id)arg1 isCompatibleToClass:(Class)arg2;
- (void)performResponseMessage:(id)arg1 requestMessage:(id)arg2;
- (void)sendInternalMessage:(id)arg1;
- (void)triggerSend;
- (void)sendMessage:(id)arg1;
- (id)receiveMessage:(id)arg1;
- (void)handleResponse:(id)arg1 requestMessage:(id)arg2;
- (id)requestMessageForReply:(id)arg1;
- (void)packetize;
- (void)readData:(id)arg1;
- (void)stopSession;
- (void)startSessionSynchronously;
- (void)startSession;
- (id)initWithDataSource:(id)arg1 hashLookup:(id)arg2 url:(id)arg3 settings:(id)arg4;

@end


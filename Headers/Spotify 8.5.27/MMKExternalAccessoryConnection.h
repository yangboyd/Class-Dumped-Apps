//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMKConnection-Protocol.h"
#import "NSStreamDelegate-Protocol.h"

@class EASession, MMKDataAssembler, MMKMutableData, NSInputStream, NSMutableArray, NSMutableDictionary, NSOutputStream, NSString;
@protocol MMKConnectionDelegate, MMKConnectionReadDelegate, MMKLogging, OS_dispatch_queue;

@interface MMKExternalAccessoryConnection : NSObject <NSStreamDelegate, MMKConnection>
{
    id <MMKConnectionDelegate> _connectionDelegate;
    id <MMKConnectionReadDelegate> _readDelegate;
    EASession *_session;
    MMKDataAssembler *_dataAssembler;
    NSMutableArray *_writeQueue;
    MMKMutableData *_writeData;
    NSMutableDictionary *_completions;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id <MMKLogging> _logger;
}

@property(nonatomic) __weak id <MMKLogging> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) NSMutableDictionary *completions; // @synthesize completions=_completions;
@property(retain, nonatomic) MMKMutableData *writeData; // @synthesize writeData=_writeData;
@property(retain, nonatomic) NSMutableArray *writeQueue; // @synthesize writeQueue=_writeQueue;
@property(retain, nonatomic) MMKDataAssembler *dataAssembler; // @synthesize dataAssembler=_dataAssembler;
@property(retain, nonatomic) EASession *session; // @synthesize session=_session;
@property(nonatomic) __weak id <MMKConnectionReadDelegate> readDelegate; // @synthesize readDelegate=_readDelegate;
@property(nonatomic) __weak id <MMKConnectionDelegate> connectionDelegate; // @synthesize connectionDelegate=_connectionDelegate;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)clearQueueOnWriteError;
- (void)writeDataInternal;
- (void)write;
- (void)completeForData:(id)arg1 error:(id)arg2;
- (void)peek;
- (void)dequeue;
- (void)enqueue:(id)arg1;
- (void)writeData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)readDataInternal;
- (void)readData;
- (void)closeSession;
- (void)openSession;
@property(readonly, nonatomic) NSOutputStream *outputStream;
@property(readonly, nonatomic) NSInputStream *inputStream;
- (void)dealloc;
- (id)initWithSession:(id)arg1 logger:(id)arg2;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


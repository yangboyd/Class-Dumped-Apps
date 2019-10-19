//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSURL;
@protocol OS_dispatch_queue, TFSScribeErrorDelegate;

@interface TFSScribe : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSURL *_storeURL;
    NSURL *_modelURL;
    long long _requestID;
    NSManagedObjectContext *_managedObjectContext;
    unsigned int _flags;
    id <TFSScribeErrorDelegate> _errorDelegate;
}

+ (void)setDebugEnabled:(_Bool)arg1;
+ (_Bool)isDebugEnabled;
@property(nonatomic) __weak id <TFSScribeErrorDelegate> errorDelegate; // @synthesize errorDelegate=_errorDelegate;
- (void).cxx_destruct;
- (id)_modelURL;
- (void)_handleScribeError:(id)arg1;
- (void)_resetScribeEvents;
- (void)_removePersistentStore;
- (void)_performInManagedObjectContext:(CDUnknownBlockType)arg1;
- (void)_setupManagedObjectContext;
- (void)_deleteImpressionsForUserID:(id)arg1 managedObjectContext:(id)arg2;
- (void)_deleteEventsForUserID:(id)arg1 managedObjectContext:(id)arg2;
- (void)deleteUserID:(id)arg1;
- (void)_didFlushEventsWithRequestID:(long long)arg1 disposition:(unsigned long long)arg2 userID:(id)arg3 managedObjectContext:(id)arg4;
- (id)_flushEventsWithRequestID:(long long)arg1 userID:(id)arg2 managedObjectContext:(id)arg3;
- (void)_batchImpressionsForUserID:(id)arg1 requestHandler:(id)arg2 managedObjectContext:(id)arg3;
- (void)flushUserID:(id)arg1 token:(id)arg2 requestHandler:(id)arg3;
- (void)flushUserID:(id)arg1 requestHandler:(id)arg2;
- (void)_enqueueImpression:(id)arg1 eventName:(id)arg2 query:(id)arg3 clientVersion:(id)arg4 timestamp:(id)arg5 userID:(id)arg6 managedObjectContext:(id)arg7;
- (void)enqueueImpression:(id)arg1 eventName:(id)arg2 query:(id)arg3 clientVersion:(id)arg4 userID:(id)arg5;
- (void)_enqueueEvent:(id)arg1 timestamp:(id)arg2 managedObjectContext:(id)arg3;
- (void)enqueueEvent:(id)arg1;
- (void)resume;
- (void)suspend;
- (void)closeWithStartBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)close;
- (void)openWithStartBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)open;
- (id)initWithStoreURL:(id)arg1 modelURL:(id)arg2;
- (id)initWithStoreURL:(id)arg1;
- (id)init;

@end


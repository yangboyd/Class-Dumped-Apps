//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GMSx_GTMSessionFetcher, NSDate, NSObject, NSOperationQueue, NSURLRequest, NSURLSession;
@protocol NSURLSessionDelegate, OS_dispatch_queue;

@protocol GTMSessionFetcherServiceProtocol <NSObject>
@property(readonly) NSOperationQueue *delegateQueue;
@property _Bool reuseSession;
@property(retain) NSObject<OS_dispatch_queue> *callbackQueue;
- (NSDate *)stoppedAllFetchersDate;
- (id <NSURLSessionDelegate>)sessionDelegate;
- (NSURLSession *)sessionForFetcherCreation;
- (NSURLSession *)session;
- (_Bool)isDelayingFetcher:(GMSx_GTMSessionFetcher *)arg1;
- (GMSx_GTMSessionFetcher *)fetcherWithRequest:(NSURLRequest *)arg1;
- (void)fetcherDidStop:(GMSx_GTMSessionFetcher *)arg1;
- (void)fetcherDidBeginFetching:(GMSx_GTMSessionFetcher *)arg1;
- (void)fetcherDidCreateSession:(GMSx_GTMSessionFetcher *)arg1;
- (_Bool)fetcherShouldBeginFetching:(GMSx_GTMSessionFetcher *)arg1;
@end


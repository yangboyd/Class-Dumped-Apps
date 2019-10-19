//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, SPTDataLoader, SPTDataLoaderRequest, SPTDataLoaderResponse;

@protocol SPTDataLoaderDelegate <NSObject>
- (void)dataLoader:(SPTDataLoader *)arg1 didReceiveErrorResponse:(SPTDataLoaderResponse *)arg2;
- (void)dataLoader:(SPTDataLoader *)arg1 didReceiveSuccessfulResponse:(SPTDataLoaderResponse *)arg2;

@optional
- (void)dataLoader:(SPTDataLoader *)arg1 needsNewBodyStream:(void (^)(NSInputStream *))arg2 forRequest:(SPTDataLoaderRequest *)arg3;
- (void)dataLoader:(SPTDataLoader *)arg1 didReceiveInitialResponse:(SPTDataLoaderResponse *)arg2;
- (void)dataLoader:(SPTDataLoader *)arg1 didReceiveDataChunk:(NSData *)arg2 forResponse:(SPTDataLoaderResponse *)arg3;
- (_Bool)dataLoaderShouldSupportChunks:(SPTDataLoader *)arg1;
- (void)dataLoader:(SPTDataLoader *)arg1 didCancelRequest:(SPTDataLoaderRequest *)arg2;
@end


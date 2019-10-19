//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURLSession, TWTRNetworkingPipelineQueue;
@protocol TWTRNetworkingResponseValidating;

@interface TWTRNetworkingPipeline : NSObject
{
    id <TWTRNetworkingResponseValidating> _responseValidator;
    NSMutableDictionary *_userQueueLookupTable;
    TWTRNetworkingPipelineQueue *_guestQueue;
    NSURLSession *_URLSession;
}

@property(readonly, nonatomic) NSURLSession *URLSession; // @synthesize URLSession=_URLSession;
@property(readonly, nonatomic) TWTRNetworkingPipelineQueue *guestQueue; // @synthesize guestQueue=_guestQueue;
@property(readonly, nonatomic) NSMutableDictionary *userQueueLookupTable; // @synthesize userQueueLookupTable=_userQueueLookupTable;
@property(readonly, nonatomic) id <TWTRNetworkingResponseValidating> responseValidator; // @synthesize responseValidator=_responseValidator;
- (void).cxx_destruct;
- (id)enqueueUserPackage:(id)arg1;
- (id)enqueueGuestPackage:(id)arg1;
- (id)userQueueForUser:(id)arg1;
- (id)enqueueRequest:(id)arg1 sessionStore:(id)arg2 requestingUser:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)enqueueRequest:(id)arg1 sessionStore:(id)arg2 requestingUser:(id)arg3;
- (id)enqueueRequest:(id)arg1 sessionStore:(id)arg2;
- (id)initWithURLSession:(id)arg1 responseValidator:(id)arg2;

@end


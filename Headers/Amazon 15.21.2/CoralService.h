//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CoralRequestConfig-Protocol.h"

@class CoralDispatcher, NSString, NSURL;
@protocol CoralErrorHandler;

@interface CoralService : NSObject <CoralRequestConfig>
{
    NSString *_userAgent;
    unsigned long long _maxRetries;
    double _timeoutInterval;
    id <CoralErrorHandler> _globalErrorHandler;
    CDUnknownBlockType _requestSigner;
    NSURL *_endpointURL;
    CoralDispatcher *_dispatcher;
}

@property(retain, nonatomic) CoralDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property(copy, nonatomic) NSURL *endpointURL; // @synthesize endpointURL=_endpointURL;
@property(copy, nonatomic) CDUnknownBlockType requestSigner; // @synthesize requestSigner=_requestSigner;
@property(retain, nonatomic) id <CoralErrorHandler> globalErrorHandler; // @synthesize globalErrorHandler=_globalErrorHandler;
@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(nonatomic) unsigned long long maxRetries; // @synthesize maxRetries=_maxRetries;
@property(copy, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
- (void).cxx_destruct;
- (id)initWithEndpointURL:(id)arg1 URLSessionDelegate:(id)arg2;
- (id)initWithEndpointURL:(id)arg1;

@end


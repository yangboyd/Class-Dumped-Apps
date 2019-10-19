//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, NSURLSessionTask;
@protocol MPRewardedVideoConnectionDelegate;

@interface MPRewardedVideoConnection : NSObject
{
    NSURLSessionTask *_task;
    NSURL *_url;
    unsigned long long _retryCount;
    double _accumulatedRetryInterval;
    id <MPRewardedVideoConnectionDelegate> _delegate;
}

@property(nonatomic) __weak id <MPRewardedVideoConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double accumulatedRetryInterval; // @synthesize accumulatedRetryInterval=_accumulatedRetryInterval;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSURLSessionTask *task; // @synthesize task=_task;
- (void).cxx_destruct;
- (double)backoffTime:(unsigned long long)arg1;
- (void)retryRewardedVideoCompletionRequest;
- (void)sendRewardedVideoCompletionRequest;
- (id)initWithUrl:(id)arg1 delegate:(id)arg2;

@end


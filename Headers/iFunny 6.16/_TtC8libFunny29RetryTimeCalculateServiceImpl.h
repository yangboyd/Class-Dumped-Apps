//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC8libFunny29RetryTimeCalculateServiceImpl : NSObject
{
    // Error parsing type: , name: maxRetryCount
    // Error parsing type: , name: strategy
}

+ (double)retryCountReachedMaximum;
+ (long long)retryCountInfinite;
- (void).cxx_destruct;
- (id)init;
- (double)getNextTime;
- (void)startWithMinimumTime:(double)arg1 maxRetryCount:(long long)arg2;

@end


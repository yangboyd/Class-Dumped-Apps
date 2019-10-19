//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate;
@protocol YTRetryTaskConfig;

@protocol YTRetryableStore <NSObject>
- (void)retryTaskWithID:(id)arg1 maxRetryDate:(NSDate *)arg2 retryConfig:(id <YTRetryTaskConfig>)arg3 responseBlock:(void (^)(NSDate *, _Bool))arg4 errorBlock:(void (^)(NSError *))arg5;

@optional
- (void)resetRetryStateForTaskWithID:(id)arg1 responseBlock:(void (^)(void))arg2 errorBlock:(void (^)(NSError *))arg3;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonUtilConcurrentRateLimiter.h"

@interface ComGoogleCommonUtilConcurrentRequestAlignedBucketsRateLimiter : ComGoogleCommonUtilConcurrentRateLimiter
{
    long long potentiallyAvailableBucketStartMicros_;
    int permitsAcquiredInBucket_;
    int permitsPerBucket_;
    long long periodInMicros_;
}

- (long long)reserveEarliestAvailableWithInt:(int)arg1 withLong:(long long)arg2;
- (long long)queryEarliestAvailableWithLong:(long long)arg1;
- (double)doGetRate;
- (void)doSetRateWithDouble:(double)arg1 withLong:(long long)arg2;
- (id)initPackagePrivateWithComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;

@end


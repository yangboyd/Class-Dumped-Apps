//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, YTMonotonicDate;

@interface YTNetworkRequestStatistics : NSObject
{
    YTMonotonicDate *_requestSentDate;
    NSMutableArray *_responseStatistics;
}

@property(readonly, nonatomic) NSMutableArray *responseStatistics; // @synthesize responseStatistics=_responseStatistics;
@property(retain, nonatomic) YTMonotonicDate *requestSentDate; // @synthesize requestSentDate=_requestSentDate;
- (void).cxx_destruct;
- (id)init;

@end


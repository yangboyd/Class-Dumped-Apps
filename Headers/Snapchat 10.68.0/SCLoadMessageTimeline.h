//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, SCLoadMessageMetadata;

@interface SCLoadMessageTimeline : NSObject
{
    NSMutableArray *_mTimestamps;
    NSString *_loadMessageAttemptId;
    SCLoadMessageMetadata *_metadata;
}

@property(copy, nonatomic) SCLoadMessageMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) NSString *loadMessageAttemptId; // @synthesize loadMessageAttemptId=_loadMessageAttemptId;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *timestamps;
- (void)addTimestamp:(id)arg1;
- (id)init;

@end


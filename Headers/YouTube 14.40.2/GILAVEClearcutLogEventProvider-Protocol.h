//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CCTClearcutLogEvent, NSArray;

@protocol GILAVEClearcutLogEventProvider <NSObject>
- (long long)logSource;
- (void)updateLogEvent:(CCTClearcutLogEvent *)arg1 forInteraction:(CDStruct_1ef3fb1f)arg2 withVisualElements:(NSArray *)arg3;

@optional
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
- (NSArray *)veIDFilter;
@end


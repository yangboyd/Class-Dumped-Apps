//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface BladeRunnerWorkUnitResult : NSObject
{
    NSMutableArray *_completeEntries;
    NSMutableArray *_rescheduleAtTailEntries;
    NSMutableArray *_rescheduleAtHeadEntries;
    NSMutableArray *_rescheduleOnNextLaunchEntries;
}

@property(retain, nonatomic) NSMutableArray *rescheduleOnNextLaunchEntries; // @synthesize rescheduleOnNextLaunchEntries=_rescheduleOnNextLaunchEntries;
@property(retain, nonatomic) NSMutableArray *rescheduleAtHeadEntries; // @synthesize rescheduleAtHeadEntries=_rescheduleAtHeadEntries;
@property(retain, nonatomic) NSMutableArray *rescheduleAtTailEntries; // @synthesize rescheduleAtTailEntries=_rescheduleAtTailEntries;
@property(retain, nonatomic) NSMutableArray *completeEntries; // @synthesize completeEntries=_completeEntries;
- (void).cxx_destruct;
- (void)addRescheduleOnNextLaunch:(id)arg1;
- (void)addRescheduleAtTail:(id)arg1;
- (void)addRescheduleAtHead:(id)arg1;
- (void)addCompleted:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet;
@protocol PSPDFRedactionTrackerDelegate;

@interface PSPDFRedactionTracker : NSObject
{
    struct UnfairLock _trackedRedactionLock;
    id <PSPDFRedactionTrackerDelegate> _delegate;
    NSMutableSet *_trackedMutableRedactions;
}

@property(readonly, nonatomic) NSMutableSet *trackedMutableRedactions; // @synthesize trackedMutableRedactions=_trackedMutableRedactions;
@property(nonatomic) __weak id <PSPDFRedactionTrackerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *trackedRedactions;
- (void)resetAllTrackedRedactions;
- (void)removeTrackedRedactions:(id)arg1;
- (void)addTrackedRedactions:(id)arg1;
- (id)init;

@end


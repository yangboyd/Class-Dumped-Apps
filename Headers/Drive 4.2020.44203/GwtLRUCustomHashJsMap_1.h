//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GwtJsMap_ForEachCallback-Protocol.h"

@class GwtLRUCustomHashJsMap, NSString;

@interface GwtLRUCustomHashJsMap_1 : NSObject <GwtJsMap_ForEachCallback>
{
    GwtLRUCustomHashJsMap *val$result_;
}

- (void)dealloc;
- (void)runWithId:(id)arg1 withId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


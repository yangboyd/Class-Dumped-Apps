//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaIoSerializable-Protocol.h"

@class NSString;

@interface ComGoogleCommonCollectImmutableMap_SerializedForm : NSObject <JavaIoSerializable>
{
    id keys_;
    id values_;
}

- (void)dealloc;
- (id)makeBuilderWithInt:(int)arg1;
- (id)legacyReadResolve;
- (id)initWithComGoogleCommonCollectImmutableMap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


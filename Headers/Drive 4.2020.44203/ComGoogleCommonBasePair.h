//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaIoSerializable-Protocol.h"

@class NSString;

@interface ComGoogleCommonBasePair : NSObject <JavaIoSerializable>
{
    id first_;
    id second_;
}

+ (id)compareBySecond;
+ (id)compareByFirst;
+ (id)secondFunction;
+ (id)firstFunction;
+ (id)ofWithId:(id)arg1 withId:(id)arg2;
- (void)dealloc;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)getSecond;
- (id)getFirst;
- (id)initWithId:(id)arg1 withId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


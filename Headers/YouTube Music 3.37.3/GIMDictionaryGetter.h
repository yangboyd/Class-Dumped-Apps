//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GIMInstanceGetter-Protocol.h"

@class NSArray, NSString;

@interface GIMDictionaryGetter : NSObject <GIMInstanceGetter>
{
    NSArray *_getters;
    NSArray *_keys;
}

+ (id)getterWithGetters:(id)arg1 forKeys:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) id instance;
- (id)initWithGetters:(id)arg1 forKeys:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


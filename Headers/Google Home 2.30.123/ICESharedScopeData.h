//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface ICESharedScopeData : NSObject
{
    NSMutableSet *_usedSymbols;
    long long _uniqueUIDIndex;
}

- (void).cxx_destruct;
@property(nonatomic) long long uniqueUIDIndex; // @synthesize uniqueUIDIndex=_uniqueUIDIndex;
@property(retain, nonatomic) NSMutableSet *usedSymbols; // @synthesize usedSymbols=_usedSymbols;
- (id)generateUniqueUIDWithPrefix:(id)arg1;
- (_Bool)containsUID:(id)arg1;
- (id)init;

@end


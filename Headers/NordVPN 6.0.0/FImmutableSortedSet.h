//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FImmutableSortedDictionary;

@interface FImmutableSortedSet : NSObject
{
    FImmutableSortedDictionary *_dictionary;
}

+ (id)setWithKeysFromDictionary:(id)arg1 comparator:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) FImmutableSortedDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (id)description;
- (id)objectEnumerator;
- (void)enumerateObjectsReverse:(_Bool)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)isEmpty;
- (unsigned long long)count;
- (id)predecessorEntry:(id)arg1;
- (id)lastObject;
- (id)firstObject;
- (_Bool)containsObject:(id)arg1;
- (id)removeObject:(id)arg1;
- (id)addObject:(id)arg1;
- (_Bool)contains:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end


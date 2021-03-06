//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface LOTAnimationCache : NSObject
{
    NSMutableDictionary *animationsCache_;
    NSMutableArray *lruOrderArray_;
}

+ (id)sharedCache;
- (void).cxx_destruct;
- (void)disableCaching;
- (void)removeAnimationForKey:(id)arg1;
- (void)clearCache;
- (id)animationForKey:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (id)init;

@end


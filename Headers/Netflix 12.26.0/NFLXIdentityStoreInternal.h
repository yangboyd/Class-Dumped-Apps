//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NFLXIdentityStoreDelegateDictionary, NSCache, NSMutableSet;

@interface NFLXIdentityStoreInternal : NSObject
{
    struct {
        _Bool replace;
        _Bool verify;
    } delegateRespondsTo;
    NSCache *cache;
    NFLXIdentityStoreDelegateDictionary *defaultDelegate;
    NSMutableSet *missedLoadCacheKeys;
}

- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SCUnifiedProfileNonFriendFriendStoriesProvider : NSObject
{
    NSMutableDictionary *_cachedFriendStories;
}

- (void).cxx_destruct;
- (void)_updateCacheWithUsername:(id)arg1 friendStories:(id)arg2 error:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)asyncFetchNonFriendFriendStoriesWithUsername:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end


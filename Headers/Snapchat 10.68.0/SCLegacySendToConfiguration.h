//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SCLegacySendToConfiguration : NSObject
{
    _Bool _includeRecents;
    _Bool _includeGroups;
    _Bool _includeMyStory;
    _Bool _includeOtherStories;
    _Bool _includeQuickAdd;
    _Bool _includeContactSnapchatters;
    _Bool _includeBusinessProfiles;
    NSArray *_userIdsToExclude;
}

@property(readonly, copy, nonatomic) NSArray *userIdsToExclude; // @synthesize userIdsToExclude=_userIdsToExclude;
@property(readonly, nonatomic) _Bool includeBusinessProfiles; // @synthesize includeBusinessProfiles=_includeBusinessProfiles;
@property(readonly, nonatomic) _Bool includeContactSnapchatters; // @synthesize includeContactSnapchatters=_includeContactSnapchatters;
@property(readonly, nonatomic) _Bool includeQuickAdd; // @synthesize includeQuickAdd=_includeQuickAdd;
@property(readonly, nonatomic) _Bool includeOtherStories; // @synthesize includeOtherStories=_includeOtherStories;
@property(readonly, nonatomic) _Bool includeMyStory; // @synthesize includeMyStory=_includeMyStory;
@property(readonly, nonatomic) _Bool includeGroups; // @synthesize includeGroups=_includeGroups;
@property(readonly, nonatomic) _Bool includeRecents; // @synthesize includeRecents=_includeRecents;
- (void).cxx_destruct;
- (id)initWithIncludeRecents:(_Bool)arg1 includeGroups:(_Bool)arg2 includeMyStory:(_Bool)arg3 includeOtherStories:(_Bool)arg4 includeQuickAdd:(_Bool)arg5 includeContactSnapchatters:(_Bool)arg6 includeBusinessProfiles:(_Bool)arg7 userIdsToExclude:(id)arg8;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface GHKChatConversationBatchUpdateContext : NSObject
{
    long long _section;
    NSArray *_existingViewObjects;
    unsigned long long _existingViewObjectsCount;
    NSMutableDictionary *_viewObjectsToReplace;
    NSMutableSet *_viewObjectsToRemove;
    NSMutableSet *_indexPathsToRemove;
    NSMutableArray *_viewObjectsToAppend;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *viewObjectsToAppend; // @synthesize viewObjectsToAppend=_viewObjectsToAppend;
@property(readonly, nonatomic) NSMutableSet *indexPathsToRemove; // @synthesize indexPathsToRemove=_indexPathsToRemove;
@property(readonly, nonatomic) NSMutableSet *viewObjectsToRemove; // @synthesize viewObjectsToRemove=_viewObjectsToRemove;
@property(readonly, nonatomic) NSMutableDictionary *viewObjectsToReplace; // @synthesize viewObjectsToReplace=_viewObjectsToReplace;
@property(readonly, nonatomic) unsigned long long existingViewObjectsCount; // @synthesize existingViewObjectsCount=_existingViewObjectsCount;
@property(readonly, nonatomic) NSArray *existingViewObjects; // @synthesize existingViewObjects=_existingViewObjects;
@property(readonly, nonatomic) long long section; // @synthesize section=_section;
- (id)nextObjectToObject:(id)arg1;
- (id)previousObjectToObject:(id)arg1;
- (id)indexPathForObject:(id)arg1;
- (id)initWithModel:(id)arg1 section:(long long)arg2;

@end


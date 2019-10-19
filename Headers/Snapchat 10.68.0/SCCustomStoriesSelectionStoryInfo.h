//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCCustomStoriesExistingStoryInfo;

@interface SCCustomStoriesSelectionStoryInfo : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCCustomStoriesExistingStoryInfo *_existingStory_storyInfo;
    long long _newStory_storyType;
}

+ (id)newStoryWithStoryType:(long long)arg1;
+ (id)existingStoryWithStoryInfo:(id)arg1;
- (void).cxx_destruct;
- (void)matchExistingStory:(CDUnknownBlockType)arg1 newStory:(CDUnknownBlockType)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


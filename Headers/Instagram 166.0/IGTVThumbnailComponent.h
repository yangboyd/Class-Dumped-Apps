//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

#import <FBSharedFramework/IGListDiffable-Protocol.h>

@class IGMedia, IGStoryTrayViewModel, NSArray;

@interface IGTVThumbnailComponent : FBIvarBasedEqualityObject <IGListDiffable>
{
    unsigned long long _subtype;
    IGMedia *_media_media;
    IGStoryTrayViewModel *_storyTray_currentStoryTray;
    NSArray *_storyTray_availableStoryTrays;
}

+ (id)storyTrayWithCurrentStoryTray:(id)arg1 availableStoryTrays:(id)arg2;
+ (id)mediaWithMedia:(id)arg1;
- (void).cxx_destruct;
- (void)matchMedia:(CDUnknownBlockType)arg1 storyTray:(CDUnknownBlockType)arg2;
- (_Bool)matchBooleanMedia:(CDUnknownBlockType)arg1 storyTray:(CDUnknownBlockType)arg2;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

#import <FBSharedFramework/IGListDiffable-Protocol.h>

@class IGInFeedStoriesSimpleButtonEndCardModel, IGInFeedStoriesSimpleButtonFacepileEndCardModel;

@interface IGInFeedStoriesEndCard : FBIvarBasedEqualityObject <IGListDiffable>
{
    unsigned long long _subtype;
    IGInFeedStoriesSimpleButtonEndCardModel *_simpleButton_viewModel;
    IGInFeedStoriesSimpleButtonFacepileEndCardModel *_simpleButtonFacepile_viewModel;
}

+ (id)simpleButtonWithViewModel:(id)arg1;
+ (id)simpleButtonFacepileWithViewModel:(id)arg1;
- (void).cxx_destruct;
- (void)matchSimpleButton:(CDUnknownBlockType)arg1 simpleButtonFacepile:(CDUnknownBlockType)arg2;
- (id)diffIdentifier;
- (_Bool)isEqualToDiffableObject:(id)arg1;

@end


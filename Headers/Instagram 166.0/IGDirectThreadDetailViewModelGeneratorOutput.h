//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <InstagramAppCoreFramework/NSCoding-Protocol.h>
#import <InstagramAppCoreFramework/NSCopying-Protocol.h>

@class NSArray;
@protocol IGListDiffable;

@interface IGDirectThreadDetailViewModelGeneratorOutput : FBValueObject <NSCopying, NSCoding>
{
    NSArray *_viewModels;
    id <IGListDiffable> _userSectionTitleViewModel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <IGListDiffable> userSectionTitleViewModel; // @synthesize userSectionTitleViewModel=_userSectionTitleViewModel;
@property(readonly, copy, nonatomic) NSArray *viewModels; // @synthesize viewModels=_viewModels;
- (id)initWithViewModels:(id)arg1 userSectionTitleViewModel:(id)arg2;

@end


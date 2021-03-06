//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

@class IGLiveBroadcastUpdate, IGStoryTrayViewModel, NSString;
@protocol IGExploreLiveHomeSectionControllerDelegate;

@interface IGExploreLiveHomeSectionController : IGListSectionController
{
    NSString *_module;
    id <IGExploreLiveHomeSectionControllerDelegate> _delegate;
    IGStoryTrayViewModel *_object;
    IGLiveBroadcastUpdate *_cachedUpdate;
    struct IGGridLayoutConfiguration _layoutConfiguration;
}

@property(readonly, nonatomic) struct IGGridLayoutConfiguration layoutConfiguration; // @synthesize layoutConfiguration=_layoutConfiguration;
@property(readonly, nonatomic) IGLiveBroadcastUpdate *cachedUpdate; // @synthesize cachedUpdate=_cachedUpdate;
@property(retain, nonatomic) IGStoryTrayViewModel *object; // @synthesize object=_object;
@property(nonatomic) __weak id <IGExploreLiveHomeSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)_sizeForItemAtIndex:(long long)arg1 layoutConfiguration:(struct IGGridLayoutConfiguration)arg2;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (void)setCachedUpdate:(id)arg1;
- (id)initWithLayoutConfiguration:(struct IGGridLayoutConfiguration)arg1 module:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import <InstagramAppCoreFramework/IGRegistrationFollowAccountsSeeMoreCellDelegate-Protocol.h>

@class IGRegistrationFollowAccountsSeeMoreSectionControllerViewModel, NSString;
@protocol IGRegistrationFollowAccountsSeeMoreSectionControllerDelegate;

@interface IGRegistrationFollowAccountsSeeMoreSectionController : IGListSectionController <IGRegistrationFollowAccountsSeeMoreCellDelegate>
{
    IGRegistrationFollowAccountsSeeMoreSectionControllerViewModel *_viewModel;
    id <IGRegistrationFollowAccountsSeeMoreSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)followAccountSeeMoreCellDidTapSeeMoreButton:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)initWithViewModel:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


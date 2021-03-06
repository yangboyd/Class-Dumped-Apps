//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import <FBSharedFramework/IGPendingRequestAutoApproveMegaphoneCellDelegate-Protocol.h>

@class IGPendingRequestAutoApproveMegaphoneConfiguration, NSString;
@protocol IGPendingRequestAutoApproveMegaphoneSectionDelegate;

@interface IGPendingRequestAutoApproveMegaphoneSectionController : IGListSectionController <IGPendingRequestAutoApproveMegaphoneCellDelegate>
{
    IGPendingRequestAutoApproveMegaphoneConfiguration *_config;
    id <IGPendingRequestAutoApproveMegaphoneSectionDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGPendingRequestAutoApproveMegaphoneSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)autoApproveMegaphoneCellDidTapActionButton:(id)arg1;
- (void)autoApproveMegaphoneCellDidTapDismiss:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (void)didUpdateToObject:(id)arg1;
- (id)initWithConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGListGenericSectionController.h>

#import <InstagramAppCoreFramework/BKBloksViewHelperDelegate-Protocol.h>

@class BKBloksViewHelper, IGVotingInfoCenterBloksCell, IGVotingInfoCenterLogger, NSDictionary;
@protocol IGVotingInfoCenterBloksSectionControllerDelegate;

@interface IGVotingInfoCenterBloksSectionController : IGListGenericSectionController <BKBloksViewHelperDelegate>
{
    NSDictionary *_bloksData;
    BKBloksViewHelper *_bloksViewHelper;
    IGVotingInfoCenterBloksCell *_bloksCell;
    id <IGVotingInfoCenterBloksSectionControllerDelegate> _delegate;
    IGVotingInfoCenterLogger *_logger;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGVotingInfoCenterLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <IGVotingInfoCenterBloksSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_prepareForReuse;
- (void)bloksViewHelperNeedsUpdate:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;

@end


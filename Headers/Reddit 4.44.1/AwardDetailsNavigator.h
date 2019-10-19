//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AwardDetailsNavigatable-Protocol.h"

@class AwardDetailsViewController, NSString;

@interface AwardDetailsNavigator : NSObject <AwardDetailsNavigatable>
{
    AwardDetailsViewController *_awardDetailsViewController;
}

@property(nonatomic) __weak AwardDetailsViewController *awardDetailsViewController; // @synthesize awardDetailsViewController=_awardDetailsViewController;
- (void).cxx_destruct;
- (void)showReportConfirmationDialogForAward:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showAwardInfoForAward:(id)arg1 gildingTarget:(unsigned long long)arg2 subreddit:(id)arg3;
- (void)showSelectAwardScreenForComment:(id)arg1 parentPost:(id)arg2 service:(id)arg3 correlationId:(id)arg4;
- (void)showSelectAwardScreenForPost:(id)arg1 service:(id)arg2 correlationId:(id)arg3;
- (void)showWebPageWithURL:(id)arg1;
- (void)close;
- (id)initWithAwardDetailsViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


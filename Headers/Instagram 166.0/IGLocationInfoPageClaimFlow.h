//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGBusinessToolAlertViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGLocationInfoPageClaimViewControllerDelegate-Protocol.h>

@class IG4BLogger, IGBusinessConversionFacebookPageDataSource, IGFacebookPageInfo, IGNavigationController, IGUserSession, NSString, UIViewController;
@protocol IGLocationInfoPageClaimFlowDelegate;

@interface IGLocationInfoPageClaimFlow : NSObject <IGLocationInfoPageClaimViewControllerDelegate, IGBusinessToolAlertViewControllerDelegate>
{
    IGUserSession *_userSession;
    UIViewController *_presentingViewController;
    IGNavigationController *_pageClaimNavigationViewController;
    IGBusinessConversionFacebookPageDataSource *_pageDataSource;
    IGFacebookPageInfo *_pageInfo;
    IG4BLogger *_logger;
    id <IGLocationInfoPageClaimFlowDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGLocationInfoPageClaimFlowDelegate> delegate; // @synthesize delegate=_delegate;
- (void)businessToolAlertViewControllerDidTapDismissActionButton:(id)arg1;
- (void)businessToolAlertViewControllerDidTapActionButton:(id)arg1;
- (void)locationInfoPageClaimViewController:(id)arg1 didFinishClaimWithError:(id)arg2;
- (void)_showPageClaimNotEligibleAlert;
- (void)_showPageClaimedAlert;
- (void)_routeToPageClaimView;
- (void)_routeToPageClaimViewIfEligibleToClaim;
- (void)_routeToFacebookLoginIfNecessary;
- (void)start;
- (id)initWithFacebookPageInfo:(id)arg1 userSession:(id)arg2 presentingViewController:(id)arg3 logger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


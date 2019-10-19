//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseWebViewController.h"

#import "PagedTabControllerProtocol-Protocol.h"

@class NSString, UIScrollView;

@interface LiveInfoViewController : BaseWebViewController <PagedTabControllerProtocol>
{
}

+ (id)webViewControllerWithURL:(id)arg1;
@property(readonly, nonatomic) UIScrollView *majorContentScrollView;
- (id)pageItemText;
- (id)pageItemSelectedImage;
- (id)pageItemImage;
- (long long)preferredStatusBarStyle;
- (void)configureNavigationBarAppearance;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


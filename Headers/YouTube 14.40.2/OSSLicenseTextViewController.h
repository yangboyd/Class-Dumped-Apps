//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "GOONavigationCustomization.h"

@class GOONavigationStyle, NSBundle, NSSet, NSString, UIScrollView, UIView;

@interface OSSLicenseTextViewController : UIViewController <GOONavigationCustomization>
{
    NSBundle *_bundle;
    struct _NSRange _libraryRange;
    GOONavigationStyle *_style;
    _Bool _assumesGooNavigation;
}

@property(nonatomic) _Bool assumesGooNavigation; // @synthesize assumesGooNavigation=_assumesGooNavigation;
- (void).cxx_destruct;
@property(readonly, nonatomic) GOONavigationStyle *navigationStyle;
- (void)viewDidLoad;
- (id)initWithBundle:(id)arg1 libraryRange:(struct _NSRange)arg2 libraryName:(id)arg3 style:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIView *navigationBannerView;
@property(readonly, nonatomic) UIView *navigationCustomHeaderBackgroundView;
@property(readonly, nonatomic) struct UIEdgeInsets navigationPrimaryScrollInsets;
@property(readonly, nonatomic) UIScrollView *navigationPrimaryScrollView;
@property(readonly, nonatomic) NSSet *navigationSecondaryScrollViews;
@property(readonly) Class superclass;

@end


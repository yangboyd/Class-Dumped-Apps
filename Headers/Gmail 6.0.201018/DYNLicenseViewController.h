//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNViewController.h"

#import "GOONavigationCustomization-Protocol.h"

@class GOONavigationStyle, NSBundle, NSSet, NSString, UIScrollView, UIView;

@interface DYNLicenseViewController : DYNViewController <GOONavigationCustomization>
{
    NSBundle *_bundle;
    NSString *_filename;
    GOONavigationStyle *_style;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GOONavigationStyle *navigationStyle;
- (void)viewDidLoad;
- (id)initWithBundle:(id)arg1 filename:(id)arg2 libraryName:(id)arg3 style:(id)arg4;

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


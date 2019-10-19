//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "YTLightweightScrollableDelegate-Protocol.h"
#import "YTResponseViewController-Protocol.h"

@class GIMMe, NSError, NSString, UIView, YTHotConfig, YTIMusicEntityBrowseResponse, YTMInnerTubeControllerFactory;
@protocol YTInnerTubeUIService, YTLightweightScrollable, YTMFlexibleHeaderResponderProvider, YTMServices, YTResponder, YTResponseViewController;

@interface YTMMusicEntityBrowseResponseViewController : UIViewController <YTLightweightScrollableDelegate, YTResponseViewController>
{
    YTMInnerTubeControllerFactory *_innerTubeControllerFactory;
    YTHotConfig *_hotConfig;
    id <YTMServices> _services;
    YTIMusicEntityBrowseResponse *_renderer;
    id <YTInnerTubeUIService> _service;
    UIViewController<YTResponseViewController> *_contentViewController;
    UIViewController<YTLightweightScrollable> *_primaryScrollViewController;
    id _request;
    id <YTMFlexibleHeaderResponderProvider> _flexibleHeaderResponderProvider;
    NSError *_error;
    UIView *_contentView;
    _Bool _headerIsLandscape;
    _Bool _addHeaderInCollectionView;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)setContentViewController:(id)arg1;
- (void)refreshEntityBrowseViewController;
- (void)attachFlexibleHeader;
- (void)updateNavigationHeader;
- (void)loadDefaultContent;
- (void)willMakeRequest:(id)arg1;
- (void)setEmptyMessage:(id)arg1;
- (void)loadWithError:(id)arg1;
- (_Bool)scrollToModelMatchingBlock:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;
- (void)loadWithModel:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)initWithParentResponder:(id)arg1;
- (id)initWithService:(id)arg1 parentResponder:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool useDefaultModelWhenEmpty;

@end


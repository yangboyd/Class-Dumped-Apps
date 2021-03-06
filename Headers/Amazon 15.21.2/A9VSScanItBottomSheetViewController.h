//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SXScanItResultWebController, UIView;

@interface A9VSScanItBottomSheetViewController : UIViewController
{
    _Bool _bound;
    UIView *_searchResultsSkeletonView;
    SXScanItResultWebController *_searchResultsVC;
}

@property(nonatomic, getter=isBound) _Bool bound; // @synthesize bound=_bound;
@property(retain, nonatomic) SXScanItResultWebController *searchResultsVC; // @synthesize searchResultsVC=_searchResultsVC;
@property(retain, nonatomic) UIView *searchResultsSkeletonView; // @synthesize searchResultsSkeletonView=_searchResultsSkeletonView;
- (void).cxx_destruct;
- (id)queryURLIgnoreReftag:(id)arg1;
- (id)queryURLWithReftag:(id)arg1;
- (void)performSearchForQuery:(id)arg1 isFinalResult:(_Bool)arg2;
- (void)showSearchResultsForQuery:(id)arg1 isFinalResult:(_Bool)arg2;
- (void)showSearchResultsForText:(id)arg1 withRefTag:(id)arg2 queryId:(id)arg3 isFinalResult:(_Bool)arg4;
- (void)showSearchResultsForTags:(id)arg1 withRefTag:(id)arg2 queryId:(id)arg3 isFinalResult:(_Bool)arg4;
- (void)showSearchResultsForAsins:(id)arg1 withRefTag:(id)arg2 queryId:(id)arg3 isFinalResult:(_Bool)arg4;
- (void)resetToStartState;
- (void)setUpSearchResultsView;
- (void)selectSearchResultsViewController;
- (void)setUpSearchResultsSkeletonView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)showComponents;
- (void)unbind;
- (void)bind;
- (void)viewDidLoad;

@end


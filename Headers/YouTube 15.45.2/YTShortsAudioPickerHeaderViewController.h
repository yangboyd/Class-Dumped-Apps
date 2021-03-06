//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UISearchBarDelegate-Protocol.h"
#import "YTResponseViewController-Protocol.h"
#import "YTVariableHeightHeaderViewControllerAttachedHeader-Protocol.h"

@class GIMMe, NSString, UISearchBar, YTISfvAudioPickerHeaderRenderer, YTISfvAudioSearchBoxRenderer, YTInteractionLoggingProxyButton;
@protocol YTResponder;

@interface YTShortsAudioPickerHeaderViewController : UIViewController <UISearchBarDelegate, YTResponseViewController, YTVariableHeightHeaderViewControllerAttachedHeader>
{
    YTISfvAudioPickerHeaderRenderer *_renderer;
    YTISfvAudioSearchBoxRenderer *_searchBoxRenderer;
    NSString *_previousQuery;
    YTInteractionLoggingProxyButton *_searchBoxProxyButton;
    YTInteractionLoggingProxyButton *_cancelProxyButton;
    YTInteractionLoggingProxyButton *_searchProxyButton;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    UISearchBar *_searchBar;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (id)searchCommandWithQuery:(id)arg1;
- (void)sendSearchCommandWithQuery:(id)arg1 hideSearchView:(_Bool)arg2;
- (void)loadSearchBarWithModel:(id)arg1;
- (void)dismissKeyboard;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (_Bool)isAttachedToPage;
- (void)willMakeRequest:(id)arg1;
- (_Bool)scrollToModelMatchingBlock:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;
- (void)loadWithModel:(id)arg1;
- (void)viewDidLoad;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *overrideStyleContext;
@property(readonly) Class superclass;
@property(nonatomic) _Bool useDefaultModelWhenEmpty;

@end


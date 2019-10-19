//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "HUBViewComponentDelegate-Protocol.h"
#import "SPTFreeTierRecommendationsPlaylistFooterViewController-Protocol.h"
#import "SPTHubViewModelProviderDelegate-Protocol.h"

@class HUBView, NSString, SPTHubViewModelProvider;
@protocol SPTFreeTierRecommendationsPlaylistFooterViewControllerDelegate, SPTFreeTierRecommendationsPlaylistHubViewProvider;

@interface SPTFreeTierRecommendationsPlaylistFooterViewController : UIViewController <SPTHubViewModelProviderDelegate, HUBViewComponentDelegate, SPTFreeTierRecommendationsPlaylistFooterViewController>
{
    _Bool _loaded;
    id <SPTFreeTierRecommendationsPlaylistFooterViewControllerDelegate> _delegate;
    id <SPTFreeTierRecommendationsPlaylistHubViewProvider> _hubViewProvider;
    SPTHubViewModelProvider *_hubViewModelProvider;
    HUBView *_hubView;
}

@property(retain, nonatomic) HUBView *hubView; // @synthesize hubView=_hubView;
@property(nonatomic, getter=isLoaded) _Bool loaded; // @synthesize loaded=_loaded;
@property(readonly, nonatomic) SPTHubViewModelProvider *hubViewModelProvider; // @synthesize hubViewModelProvider=_hubViewModelProvider;
@property(readonly, nonatomic) id <SPTFreeTierRecommendationsPlaylistHubViewProvider> hubViewProvider; // @synthesize hubViewProvider=_hubViewProvider;
@property(nonatomic) __weak id <SPTFreeTierRecommendationsPlaylistFooterViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)hubView:(id)arg1 componentViewDidDisappear:(id)arg2;
- (void)hubView:(id)arg1 componentViewWillAppear:(id)arg2;
- (void)viewModelDidLoad:(id)arg1 dataSource:(unsigned long long)arg2;
- (void)viewModelDidLoad:(id)arg1;
- (void)setupHubView;
- (id)initWithHubViewModelProvider:(id)arg1 hubViewProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


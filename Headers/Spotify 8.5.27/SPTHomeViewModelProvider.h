//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTHubViewModelProvider.h"

#import "HUBViewModelLoaderDelegate-Protocol.h"
#import "SPTHomeViewModel-Protocol.h"

@class NSString;
@protocol HUBViewModelLoader, SPTHomeViewModelDelegate, SPTHomeViewModelProviderDelegate, SPTHubViewModelProviderDelegate;

@interface SPTHomeViewModelProvider : SPTHubViewModelProvider <HUBViewModelLoaderDelegate, SPTHomeViewModel>
{
    id <SPTHubViewModelProviderDelegate> delegate;
    id <SPTHomeViewModelDelegate> viewModelDelegate;
    id <SPTHomeViewModelProviderDelegate> _viewModelProviderDelegate;
    id <HUBViewModelLoader> _cachedViewModelLoader;
    id <HUBViewModelLoader> _remoteViewModelLoader;
}

@property(readonly, nonatomic) id <HUBViewModelLoader> remoteViewModelLoader; // @synthesize remoteViewModelLoader=_remoteViewModelLoader;
@property(readonly, nonatomic) id <HUBViewModelLoader> cachedViewModelLoader; // @synthesize cachedViewModelLoader=_cachedViewModelLoader;
@property(nonatomic) __weak id <SPTHomeViewModelProviderDelegate> viewModelProviderDelegate; // @synthesize viewModelProviderDelegate=_viewModelProviderDelegate;
@property(nonatomic) __weak id <SPTHomeViewModelDelegate> viewModelDelegate; // @synthesize viewModelDelegate;
@property(nonatomic) __weak id <SPTHubViewModelProviderDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)viewModelLoader:(id)arg1 didFailLoadingWithError:(id)arg2;
- (void)viewModelLoader:(id)arg1 didLoadViewModel:(id)arg2;
- (void)removeWelcomeHeaderIfRecentlyPlayedIsInModel:(id)arg1 dataSource:(unsigned long long)arg2;
- (void)dismissSkipBannerCardWithCommandName:(id)arg1;
- (void)didSkipTasteOnboarding;
- (void)loadViewModelWithSource:(unsigned long long)arg1;
- (void)loadViewModel;
- (id)initWithCachedViewModelLoader:(id)arg1 remoteViewModelLoader:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


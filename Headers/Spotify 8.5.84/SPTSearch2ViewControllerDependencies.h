//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol GLUETheme, SPTAgeVerificationProvider, SPTContextMenuOptionsFactory, SPTContextMenuPresenterFactory, SPTExplicitContentAccessManager, SPTFreeTierTrackPreviewComponentController, SPTHubsRendererFactory, SPTHugsFactory, SPTImageLoaderFactory, SPTLinkDispatcher, SPTLogCenter, SPTOnDemandSet, SPTPodcastContextMenuProvider, SPTSearchPlayerProvider, SPTSearchRecentsDataSourceProviding, SPTShelves, SPTUBIPageInstanceIdentifierProvider, SPTUBIUserBehaviourInstrumentation;

@interface SPTSearch2ViewControllerDependencies : NSObject
{
    id <GLUETheme> _theme;
    id <SPTUBIUserBehaviourInstrumentation> _ubi;
    id <SPTUBIPageInstanceIdentifierProvider> _pageInstanceIdProvider;
    id <SPTLogCenter> _logCenter;
    id <SPTOnDemandSet> _onDemandSet;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    id <SPTAgeVerificationProvider> _ageVerificationProvider;
    id <SPTSearchPlayerProvider> _playerProvider;
    id <SPTSearchRecentsDataSourceProviding> _recentsDataSourceProvider;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTImageLoaderFactory> _imageLoaderFactory;
    id <SPTHugsFactory> _hugsFactory;
    id <SPTHubsRendererFactory> _hubsRendererFactory;
    id <SPTShelves> _shelves;
    id <SPTContextMenuOptionsFactory> _contextMenuOptionsFactory;
    id <SPTContextMenuPresenterFactory> _contextMenuPresenterFactory;
    id <SPTPodcastContextMenuProvider> _contextMenuProvider;
    id <SPTFreeTierTrackPreviewComponentController> _trackPreviewController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTFreeTierTrackPreviewComponentController> trackPreviewController; // @synthesize trackPreviewController=_trackPreviewController;
@property(readonly, nonatomic) id <SPTPodcastContextMenuProvider> contextMenuProvider; // @synthesize contextMenuProvider=_contextMenuProvider;
@property(readonly, nonatomic) id <SPTContextMenuPresenterFactory> contextMenuPresenterFactory; // @synthesize contextMenuPresenterFactory=_contextMenuPresenterFactory;
@property(readonly, nonatomic) id <SPTContextMenuOptionsFactory> contextMenuOptionsFactory; // @synthesize contextMenuOptionsFactory=_contextMenuOptionsFactory;
@property(readonly, nonatomic) id <SPTShelves> shelves; // @synthesize shelves=_shelves;
@property(readonly, nonatomic) id <SPTHubsRendererFactory> hubsRendererFactory; // @synthesize hubsRendererFactory=_hubsRendererFactory;
@property(readonly, nonatomic) id <SPTHugsFactory> hugsFactory; // @synthesize hugsFactory=_hugsFactory;
@property(readonly, nonatomic) id <SPTImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) id <SPTSearchRecentsDataSourceProviding> recentsDataSourceProvider; // @synthesize recentsDataSourceProvider=_recentsDataSourceProvider;
@property(readonly, nonatomic) id <SPTSearchPlayerProvider> playerProvider; // @synthesize playerProvider=_playerProvider;
@property(readonly, nonatomic) id <SPTAgeVerificationProvider> ageVerificationProvider; // @synthesize ageVerificationProvider=_ageVerificationProvider;
@property(readonly, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(readonly, nonatomic) id <SPTOnDemandSet> onDemandSet; // @synthesize onDemandSet=_onDemandSet;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(readonly, nonatomic) id <SPTUBIPageInstanceIdentifierProvider> pageInstanceIdProvider; // @synthesize pageInstanceIdProvider=_pageInstanceIdProvider;
@property(readonly, nonatomic) id <SPTUBIUserBehaviourInstrumentation> ubi; // @synthesize ubi=_ubi;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
- (id)initWithTheme:(id)arg1 ubi:(id)arg2 pageInstanceIdProvider:(id)arg3 logCenter:(id)arg4 onDemandSet:(id)arg5 explicitContentAccessManager:(id)arg6 ageVerificationProvider:(id)arg7 playerProvider:(id)arg8 recentsDataSourceProvider:(id)arg9 linkDispatcher:(id)arg10 imageLoaderFactory:(id)arg11 hugsFactory:(id)arg12 hubsRendererFactory:(id)arg13 shelves:(id)arg14 contextMenuOptionsFactory:(id)arg15 contextMenuPresenterFactory:(id)arg16 contextMenuProvider:(id)arg17 trackPreviewController:(id)arg18;

@end


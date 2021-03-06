//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGMediaPreloaderPhotoProgressDelegate-Protocol.h>

@class IGImagePreparer, IGMediaPreloader, IGStoryPlayerPreloader, IGUserSession, NSDictionary, NSString;
@protocol IGStoryMediaPreloadDelegate;

@interface IGStoryMediaPreloadController : NSObject <IGMediaPreloaderPhotoProgressDelegate>
{
    IGUserSession *_userSession;
    IGStoryPlayerPreloader *_storyPlayerPreloader;
    id <IGStoryMediaPreloadDelegate> _preloaderDelegate;
    IGImagePreparer *_imagePreparer;
    IGMediaPreloader *_preloader;
    NSDictionary *_decodedImageEntries;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *decodedImageEntries; // @synthesize decodedImageEntries=_decodedImageEntries;
@property(readonly, nonatomic) IGMediaPreloader *preloader; // @synthesize preloader=_preloader;
@property(readonly, nonatomic) IGImagePreparer *imagePreparer; // @synthesize imagePreparer=_imagePreparer;
- (void)_receivedMemoryWarning:(id)arg1;
- (void)mediaPreloader:(id)arg1 didFailPhotoForItem:(id)arg2 url:(id)arg3;
- (void)mediaPreloader:(id)arg1 didLoadPhotoForItem:(id)arg2 url:(id)arg3 loadSource:(unsigned long long)arg4;
- (id)_postLiveBroadcastsToPreloadInSectionController:(id)arg1;
- (void)_preloadProfilePicturesForStoryItems:(id)arg1 module:(id)arg2;
- (void)handleSectionControllerTransitionForFocusedIndex:(unsigned long long)arg1 allSectionControllers:(id)arg2;
- (void)preloadHighPriorityMediaForStoryItem:(id)arg1 module:(id)arg2;
- (void)_preloadCurrentAndForwardStoryItems:(id)arg1 focusedStoryCurrentItem:(id)arg2 focusedStoryCurrentItemIndex:(unsigned long long)arg3 postLivesToPreload:(id)arg4 previousItem:(id)arg5 nextStoryCurrentItem:(id)arg6 videoConfig:(id)arg7 playerPreloadItem:(id)arg8 viewerSessionId:(id)arg9 module:(id)arg10;
- (void)preloadNeighboringMediasForFocusedIndexWithViewModels:(unsigned long long)arg1 sponsoredSupportConfiguration:(id)arg2 loggingContext:(id)arg3 allViewModels:(id)arg4 module:(id)arg5;
- (void)preloadNeighboringMediasForFocusedIndex:(unsigned long long)arg1 allSectionControllers:(id)arg2 module:(id)arg3;
- (void)dealloc;
- (id)initWithSession:(id)arg1 playerPreloadPool:(id)arg2 preloaderDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


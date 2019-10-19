//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensDataFetcherListener-Protocol.h"

@class NSString;

@interface SCLensDataFetcherListenerAnnouncer : NSObject <SCLensDataFetcherListener>
{
    struct mutex _mutex;
    struct shared_ptr<std::__1::vector<__weak id<SCLensDataFetcherListener>, std::__1::allocator<__weak id<SCLensDataFetcherListener>>>> _listeners;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)lensDataFetcher:(id)arg1 didFinishLoadingFilterOverlayImageForLens:(id)arg2 imagePath:(id)arg3 error:(id)arg4;
- (void)lensDataFetcher:(id)arg1 willStartLoadingFilterOverlayImagePathForLens:(id)arg2;
- (void)lensDataFetcher:(id)arg1 didFinishLoadingContentForAsset:(id)arg2 content:(id)arg3 error:(id)arg4;
- (void)lensDataFetcher:(id)arg1 willStartLoadingAsset:(id)arg2;
- (void)lensDataFetcher:(id)arg1 didFinishLoadingImageForLens:(id)arg2 image:(id)arg3 error:(id)arg4;
- (void)lensDataFetcher:(id)arg1 willStartLoadingImageForLens:(id)arg2;
- (void)lensDataFetcher:(id)arg1 didFinishLoadingContentForLens:(id)arg2 contentPath:(id)arg3 error:(id)arg4;
- (void)lensDataFetcher:(id)arg1 willStartLoadingContentForLens:(id)arg2;
- (void)removeListener:(id)arg1;
- (_Bool)addListener:(id)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


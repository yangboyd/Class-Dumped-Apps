//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import <InstagramAppCoreFramework/IGListDisplayDelegate-Protocol.h>

@class IGDirectAlbumViewModel, IGSeparatorSupplementaryViewSource, NSString, PHCachingImageManager, PHImageRequestOptions;
@protocol IGDirectAlbumSectionControllerSelectDelegate;

@interface IGDirectAlbumSectionController : IGListSectionController <IGListDisplayDelegate>
{
    Class _albumCellClass;
    _Bool _isRedesignEnabled;
    id <IGDirectAlbumSectionControllerSelectDelegate> _selectDelegate;
    IGDirectAlbumViewModel *_viewModel;
    PHCachingImageManager *_imageManager;
    PHImageRequestOptions *_imageRequestOptions;
    IGSeparatorSupplementaryViewSource *_separatorViewSource;
}

@property(readonly, nonatomic) _Bool isRedesignEnabled; // @synthesize isRedesignEnabled=_isRedesignEnabled;
@property(retain, nonatomic) IGSeparatorSupplementaryViewSource *separatorViewSource; // @synthesize separatorViewSource=_separatorViewSource;
@property(readonly, nonatomic) PHImageRequestOptions *imageRequestOptions; // @synthesize imageRequestOptions=_imageRequestOptions;
@property(readonly, nonatomic) PHCachingImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property(readonly, nonatomic) IGDirectAlbumViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <IGDirectAlbumSectionControllerSelectDelegate> selectDelegate; // @synthesize selectDelegate=_selectDelegate;
- (void).cxx_destruct;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithImageManger:(id)arg1 imageRequestOptions:(id)arg2 albumCellClass:(Class)arg3 redesignEnabled:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


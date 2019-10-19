//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YTResponder.h"

@class GIMMe, NSString, YTISectionListHeaderSupportedRenderers, YTInnerTubeCollectionViewController;

@interface YTSectionListContentHeaderController : NSObject <YTResponder>
{
    YTISectionListHeaderSupportedRenderers *_headerRenderer;
    YTInnerTubeCollectionViewController *_contentCollectionViewController;
    id <YTSectionControllerProtocol> _headerSectionController;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (_Bool)contentHasExpandingDropdownSectionController;
- (void)insertHeaderSectionControllerIfNeeded;
- (void)handleReloadContinuation:(id)arg1;
- (void)handleContentCollectionViewControllerLoadMoreFromDataSource;
- (void)handleContentCollectionViewControllerRefreshFromDataSource;
- (id)initWithParentResponder:(id)arg1 headerRenderer:(id)arg2 contentCollectionViewController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


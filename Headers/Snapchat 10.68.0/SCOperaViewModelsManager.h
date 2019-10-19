//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTraceEnabled-Protocol.h"

@class FBKVOController, NSArray, NSDictionary, NSMutableDictionary, NSString, SCOperaViewModel;
@protocol SCOperaViewModelsManagerDelegate, SCOperaViewModelsManipulator;

@interface SCOperaViewModelsManager : NSObject <SCTraceEnabled>
{
    id <SCOperaViewModelsManipulator> _modelManipulator;
    FBKVOController *_kvoController;
    NSMutableDictionary *_pageIDToViewModelToPreload;
    NSMutableDictionary *_pageIDToViewModelsWithinPreloadDistance;
    _Bool _isUpdatingLoadedViewModels;
    NSObject<SCOperaViewModelsManagerDelegate> *_delegate;
    SCOperaViewModel *_currentViewModel;
    NSDictionary *_loadedPageIDToModelMap;
    NSArray *_loadedHorizontalViewModels;
    NSArray *_loadedVerticalViewModels;
    NSArray *_loadedZedinalViewModels;
    NSArray *_preloadedViewModels;
    NSArray *_viewModelsToPreload;
}

@property(copy, nonatomic) NSArray *viewModelsToPreload; // @synthesize viewModelsToPreload=_viewModelsToPreload;
@property(readonly, copy, nonatomic) NSArray *preloadedViewModels; // @synthesize preloadedViewModels=_preloadedViewModels;
@property(readonly, copy, nonatomic) NSArray *loadedZedinalViewModels; // @synthesize loadedZedinalViewModels=_loadedZedinalViewModels;
@property(readonly, copy, nonatomic) NSArray *loadedVerticalViewModels; // @synthesize loadedVerticalViewModels=_loadedVerticalViewModels;
@property(readonly, copy, nonatomic) NSArray *loadedHorizontalViewModels; // @synthesize loadedHorizontalViewModels=_loadedHorizontalViewModels;
@property(readonly, copy, nonatomic) NSDictionary *loadedPageIDToModelMap; // @synthesize loadedPageIDToModelMap=_loadedPageIDToModelMap;
@property(retain, nonatomic) SCOperaViewModel *currentViewModel; // @synthesize currentViewModel=_currentViewModel;
@property(nonatomic) __weak NSObject<SCOperaViewModelsManagerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_addViewModelsWithInitialModel:(id)arg1 pageIDToViewModelToPreload:(id)arg2 pageIDToViewModelsWithinPreloadDistance:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)_addViewModelsWithInitialModel:(id)arg1 maxModelsToAdd:(int)arg2 nextModelGenerator:(CDUnknownBlockType)arg3 callback:(CDUnknownBlockType)arg4;
- (void)_updateLoadedViewModelsBasedOnCurrentViewModel;
- (void)didLandOnViewModel:(id)arg1;
- (void)didLandOnViewModelWithPageID:(id)arg1;
- (void)viewModelConnectionDidChange:(id)arg1;
- (_Bool)_isInVerticalColumnWithCurrentViewModel:(id)arg1;
- (_Bool)_isInHorizontalRowWithCurrentViewModel:(id)arg1;
- (_Bool)viewModelHasConsistentConnections:(id)arg1 checkHorizontalConnections:(_Bool)arg2 checkVerticalConnections:(_Bool)arg3;
- (void)_observeConnectionOfViewModel:(id)arg1;
- (void)_viewModels:(id)arg1 withinDistance:(long long)arg2 ofViewModel:(id)arg3;
- (void)dealloc;
- (id)initWithStartingViewModel:(id)arg1 modelManipulator:(id)arg2 viewModelsToPreload:(id)arg3 kvoController:(id)arg4;
- (id)initWithStartingViewModel:(id)arg1 modelManipulator:(id)arg2 viewModelsToPreload:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


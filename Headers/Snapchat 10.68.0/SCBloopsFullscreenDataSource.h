//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SCOperaViewModel;

@interface SCBloopsFullscreenDataSource : NSObject
{
    NSArray *_bloopsModels;
    NSArray *_operaViewModels;
    unsigned long long _currentItemIndex;
    unsigned long long _scrollDirection;
    SCOperaViewModel *_rootOperaViewModel;
}

@property(readonly, nonatomic) SCOperaViewModel *rootOperaViewModel; // @synthesize rootOperaViewModel=_rootOperaViewModel;
- (void).cxx_destruct;
- (void)_updateItemsWithCurrentIndex:(unsigned long long)arg1;
- (void)_updateItem:(id)arg1 withLoadingState:(long long)arg2;
- (id)_buildViewModelPropertiesForItem:(id)arg1;
- (id)_buildSingleViewModelWithItem:(id)arg1;
- (id)_buildViewModelsWithItems:(id)arg1;
- (unsigned long long)pageIndexFromModel:(id)arg1;
- (void)setFailForBloopModel:(id)arg1;
- (void)updateWithBloopsReenactmentResult:(id)arg1;
- (id)prepareItemsForPrefetching;
- (unsigned long long)startToBrowsePageWithModel:(id)arg1;
- (id)initWithItems:(id)arg1 currentItemIndex:(unsigned long long)arg2;

@end


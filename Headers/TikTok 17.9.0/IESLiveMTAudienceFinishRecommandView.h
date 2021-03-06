//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSString, UICollectionView;
@protocol IESLiveMonitor;

@interface IESLiveMTAudienceFinishRecommandView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    CDUnknownBlockType _onClickRoom;
    NSArray *_recommandList;
    UICollectionView *_collectionView;
    long long _countOfDownloadedImage;
    double _totalImageDownloadTime;
    id <IESLiveMonitor> _monitor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IESLiveMonitor> monitor; // @synthesize monitor=_monitor;
@property(nonatomic) double totalImageDownloadTime; // @synthesize totalImageDownloadTime=_totalImageDownloadTime;
@property(nonatomic) long long countOfDownloadedImage; // @synthesize countOfDownloadedImage=_countOfDownloadedImage;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSArray *recommandList; // @synthesize recommandList=_recommandList;
@property(copy, nonatomic) CDUnknownBlockType onClickRoom; // @synthesize onClickRoom=_onClickRoom;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)uploadImageDownloadLogIfNeeded;
- (void)loadViews;
- (void)updateWithModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


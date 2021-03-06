//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath;
@protocol ACCSwitchModeContainerCollectionView;

@protocol ACCSwitchModeContainerCollectionViewDelegate <NSObject>

@optional
- (_Bool)shouldRecognizeTapGestureWithView:(id <ACCSwitchModeContainerCollectionView>)arg1 touchPoint:(struct CGPoint)arg2;
- (_Bool)shouldRecognizePanGestureWithView:(id <ACCSwitchModeContainerCollectionView>)arg1;
- (_Bool)shouldRecognizeLongPressGestureWithView:(id <ACCSwitchModeContainerCollectionView>)arg1 touchPoint:(struct CGPoint)arg2;
- (void)switchRecordModeCollectionViewPressMove:(struct CGPoint)arg1 WithView:(id <ACCSwitchModeContainerCollectionView>)arg2;
- (void)switchRecordModeCollectionViewCancelledWithView:(id <ACCSwitchModeContainerCollectionView>)arg1;
- (void)switchRecordModeCollectionViewPressEndWithView:(id <ACCSwitchModeContainerCollectionView>)arg1;
- (void)switchRecordModeCollectionViewPressStartWithView:(id <ACCSwitchModeContainerCollectionView>)arg1;
- (void)switchRecordModeCollectionViewTappedWithView:(id <ACCSwitchModeContainerCollectionView>)arg1;
- (void)shouldAdjustSelectedIndexToIndex:(NSIndexPath *)arg1 withView:(id <ACCSwitchModeContainerCollectionView>)arg2;
@end


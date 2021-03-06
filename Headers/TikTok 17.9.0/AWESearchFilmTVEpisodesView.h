//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AWESearchFilmTVEpisodesProtocol-Protocol.h"

@class AWEGeneralFilmTVSourceModel, AWEGeneralSearchModel, NSArray, NSMutableArray, NSString;

@interface AWESearchFilmTVEpisodesView : UIView <AWESearchFilmTVEpisodesProtocol>
{
    _Bool fromChallenge;
    CDUnknownBlockType buttonClickedBlock;
    AWEGeneralSearchModel *_searchModel;
    AWEGeneralFilmTVSourceModel *_sourceModel;
    long long _buttonCount;
    NSMutableArray *_buttonArray;
    NSMutableArray *_vipLabelArray;
    NSArray *_modelArray;
    NSArray *_cellList;
    UIView *_footerView;
    UIView *_challengeStyleFooterView;
    UIView *_dividingLine;
}

+ (double)viewHeight:(id)arg1;
+ (double)viewHeight:(id)arg1 ignoreBottomPadding:(_Bool)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *dividingLine; // @synthesize dividingLine=_dividingLine;
@property(retain, nonatomic) UIView *challengeStyleFooterView; // @synthesize challengeStyleFooterView=_challengeStyleFooterView;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) NSArray *cellList; // @synthesize cellList=_cellList;
@property(retain, nonatomic) NSArray *modelArray; // @synthesize modelArray=_modelArray;
@property(retain, nonatomic) NSMutableArray *vipLabelArray; // @synthesize vipLabelArray=_vipLabelArray;
@property(retain, nonatomic) NSMutableArray *buttonArray; // @synthesize buttonArray=_buttonArray;
@property(nonatomic) long long buttonCount; // @synthesize buttonCount=_buttonCount;
@property(retain, nonatomic) AWEGeneralFilmTVSourceModel *sourceModel; // @synthesize sourceModel=_sourceModel;
@property(retain, nonatomic) AWEGeneralSearchModel *searchModel; // @synthesize searchModel=_searchModel;
@property(nonatomic) _Bool fromChallenge; // @synthesize fromChallenge;
@property(copy, nonatomic) CDUnknownBlockType buttonClickedBlock; // @synthesize buttonClickedBlock;
- (double)viewHeight:(id)arg1 ignoreBottomPadding:(_Bool)arg2;
- (void)updatePaymentStatus:(id)arg1 withLabel:(id)arg2;
- (void)buttonTapped:(id)arg1;
- (void)cellSelected:(id)arg1;
- (id)createViewModels:(id)arg1;
- (void)updateSourceModel:(id)arg1;
- (void)updateEpisodesModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


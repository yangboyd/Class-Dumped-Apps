//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "NFUIPresentationTrackableViewProtocol-Protocol.h"

@class LolomoListItemViewModel, NFUIRenderTimer, NSString;
@protocol LolomoViewDelegate><LolomoActionDelegate;

@interface LolomoAbstractEntityItemCell : UICollectionViewCell <NFUIPresentationTrackableViewProtocol>
{
    _Bool _isForReuse;
    _Bool _shouldReportPaint;
    id <LolomoViewDelegate><LolomoActionDelegate> _lolomoViewDelegate;
    LolomoListItemViewModel *_viewModel;
    NFUIRenderTimer *_renderTimer;
}

@property(nonatomic) __weak NFUIRenderTimer *renderTimer; // @synthesize renderTimer=_renderTimer;
@property(nonatomic) __weak LolomoListItemViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <LolomoViewDelegate><LolomoActionDelegate> lolomoViewDelegate; // @synthesize lolomoViewDelegate=_lolomoViewDelegate;
@property(nonatomic) _Bool shouldReportPaint; // @synthesize shouldReportPaint=_shouldReportPaint;
@property(readonly, nonatomic) _Bool isForReuse; // @synthesize isForReuse=_isForReuse;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)configureWithViewModel:(id)arg1;
- (id)trackingInfo;
- (void)willInitializeWithViewModel:(id)arg1;
- (void)willShowWithLolomoCollectionAnimated;
- (void)viewInitialized:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


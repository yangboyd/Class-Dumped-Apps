//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGGradientView, NSString, UIColor, UIImageView, UILabel;

@interface IGGalleryGridCellOverlayView : UIView
{
    UIView *_selectedOverlay;
    UIView *_disabledOverlay;
    UIImageView *_inICloudView;
    UIImageView *_slomoView;
    UIImageView *_favoritedHeartView;
    IGGradientView *_bottomGradientView;
    UILabel *_durationLabel;
    UIImageView *_uncheckedView;
    UILabel *_assetNumberLabel;
    _Bool _showSelectedOverlay;
    _Bool _showDisabledOverlay;
    _Bool _showInICloudView;
    _Bool _showSlomoView;
    _Bool _showFavoritedHeartView;
    _Bool _showUncheckedView;
    _Bool _selected;
    UIColor *_selectedOverlayColor;
    NSString *_durationText;
    NSString *_assetNumberText;
}

@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSString *assetNumberText; // @synthesize assetNumberText=_assetNumberText;
@property(nonatomic) _Bool showUncheckedView; // @synthesize showUncheckedView=_showUncheckedView;
@property(retain, nonatomic) NSString *durationText; // @synthesize durationText=_durationText;
@property(nonatomic) _Bool showFavoritedHeartView; // @synthesize showFavoritedHeartView=_showFavoritedHeartView;
@property(nonatomic) _Bool showSlomoView; // @synthesize showSlomoView=_showSlomoView;
@property(nonatomic) _Bool showInICloudView; // @synthesize showInICloudView=_showInICloudView;
@property(nonatomic) _Bool showDisabledOverlay; // @synthesize showDisabledOverlay=_showDisabledOverlay;
@property(retain, nonatomic) UIColor *selectedOverlayColor; // @synthesize selectedOverlayColor=_selectedOverlayColor;
@property(nonatomic) _Bool showSelectedOverlay; // @synthesize showSelectedOverlay=_showSelectedOverlay;
- (void).cxx_destruct;
- (void)loadAllSubviews;
- (void)_showBottomGradientView:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEBillboardLabel, AWECollectionButton, AWEGeneralFilmTVSourceModel, AWEGeneralFilmTelevisionInfoModel, AWEGeneralSearchModel, AWESearchFilmTVInfoTextView, CAGradientLayer, NSString, UIButton, UIImageView, UILabel, YYLabel;

@interface AWESearchFilmTVInfoView : UIView
{
    UIButton *_buyTicketButton;
    AWECollectionButton *_collectButton;
    UIButton *_watchVideoButton;
    UIButton *_sourceSelectButton;
    AWEGeneralSearchModel *_searchModel;
    NSString *_keyword;
    AWEGeneralFilmTelevisionInfoModel *_filmTVInfoModel;
    AWEGeneralFilmTVSourceModel *_filmTVSourceModel;
    UILabel *_titleLabel;
    AWEBillboardLabel *_nameLabel;
    UIImageView *_arrowImageView;
    UILabel *_sourceLabel;
    UIImageView *_posterImageView;
    AWESearchFilmTVInfoTextView *_infoTextView;
    YYLabel *_tagLabel;
    CAGradientLayer *_tagBackgroundLayer;
}

+ (double)filmTVInfoViewHeight;
@property(retain, nonatomic) CAGradientLayer *tagBackgroundLayer; // @synthesize tagBackgroundLayer=_tagBackgroundLayer;
@property(retain, nonatomic) YYLabel *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(retain, nonatomic) AWESearchFilmTVInfoTextView *infoTextView; // @synthesize infoTextView=_infoTextView;
@property(retain, nonatomic) UIImageView *posterImageView; // @synthesize posterImageView=_posterImageView;
@property(retain, nonatomic) UILabel *sourceLabel; // @synthesize sourceLabel=_sourceLabel;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) AWEBillboardLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) AWEGeneralFilmTVSourceModel *filmTVSourceModel; // @synthesize filmTVSourceModel=_filmTVSourceModel;
@property(retain, nonatomic) AWEGeneralFilmTelevisionInfoModel *filmTVInfoModel; // @synthesize filmTVInfoModel=_filmTVInfoModel;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(retain, nonatomic) AWEGeneralSearchModel *searchModel; // @synthesize searchModel=_searchModel;
@property(retain, nonatomic) UIButton *sourceSelectButton; // @synthesize sourceSelectButton=_sourceSelectButton;
@property(retain, nonatomic) UIButton *watchVideoButton; // @synthesize watchVideoButton=_watchVideoButton;
@property(retain, nonatomic) AWECollectionButton *collectButton; // @synthesize collectButton=_collectButton;
@property(retain, nonatomic) UIButton *buyTicketButton; // @synthesize buyTicketButton=_buyTicketButton;
- (void).cxx_destruct;
- (id)createMovieDetailLabel;
- (void)configStatusLabel:(id)arg1;
- (void)configTitle;
- (void)configMovieStatus:(id)arg1;
- (void)updatelayout;
- (void)configInfoView;
- (void)updateSourceView:(id)arg1;
- (void)configWithModel:(id)arg1 keyword:(id)arg2;
- (void)configUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end


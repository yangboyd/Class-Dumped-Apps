//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface AWEInviteFriendQRCodeContentView : UIView
{
    _Bool _isAuthorLabelGradient;
    _Bool _isDescLabelGradient;
    _Bool _forSaveImage;
    UIImageView *_backgroundImageView;
    UILabel *_authorLabel;
    UILabel *_detailLabel;
    UIImageView *_QRCodeImageView;
    UIView *_bottomContainer;
    UIImageView *_saveImageView;
    UILabel *_saveImageLabel;
    UIImageView *_arrow;
    UIImageView *_openDouyinImageView;
    UILabel *_openDouyinLabel;
    UIView *_divider1;
    UIView *_divider2;
    UIView *_topContainer;
}

@property(nonatomic) _Bool forSaveImage; // @synthesize forSaveImage=_forSaveImage;
@property(retain, nonatomic) UIView *topContainer; // @synthesize topContainer=_topContainer;
@property(retain, nonatomic) UIView *divider2; // @synthesize divider2=_divider2;
@property(retain, nonatomic) UIView *divider1; // @synthesize divider1=_divider1;
@property(retain, nonatomic) UILabel *openDouyinLabel; // @synthesize openDouyinLabel=_openDouyinLabel;
@property(retain, nonatomic) UIImageView *openDouyinImageView; // @synthesize openDouyinImageView=_openDouyinImageView;
@property(retain, nonatomic) UIImageView *arrow; // @synthesize arrow=_arrow;
@property(retain, nonatomic) UILabel *saveImageLabel; // @synthesize saveImageLabel=_saveImageLabel;
@property(retain, nonatomic) UIImageView *saveImageView; // @synthesize saveImageView=_saveImageView;
@property(retain, nonatomic) UIView *bottomContainer; // @synthesize bottomContainer=_bottomContainer;
@property(nonatomic) _Bool isDescLabelGradient; // @synthesize isDescLabelGradient=_isDescLabelGradient;
@property(nonatomic) _Bool isAuthorLabelGradient; // @synthesize isAuthorLabelGradient=_isAuthorLabelGradient;
@property(retain, nonatomic) UIImageView *QRCodeImageView; // @synthesize QRCodeImageView=_QRCodeImageView;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *authorLabel; // @synthesize authorLabel=_authorLabel;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void).cxx_destruct;
- (struct CGSize)contentViewSize;
- (id)imageToSaveToAlbum;
- (void)updateSubviewsConstraints;
- (void)setUpSubviews;
- (id)init;
- (id)initForSaveImage:(_Bool)arg1;

@end


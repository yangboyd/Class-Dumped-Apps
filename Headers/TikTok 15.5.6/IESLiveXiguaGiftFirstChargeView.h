//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UIButton, UILabel;
@protocol HTSLiveDetailRouter, IESLiveGiftModule, IESLiveWebImageService;

@interface IESLiveXiguaGiftFirstChargeView : UIView
{
    NSArray *_descSeq;
    NSMutableArray *_images;
    UILabel *_contentLabel;
    UIButton *_chargeButton;
    id <IESLiveWebImageService> _webImageService;
    id <IESLiveGiftModule> _giftModule;
    id <HTSLiveDetailRouter> _router;
}

@property(retain, nonatomic) id <HTSLiveDetailRouter> router; // @synthesize router=_router;
@property(retain, nonatomic) id <IESLiveGiftModule> giftModule; // @synthesize giftModule=_giftModule;
@property(retain, nonatomic) id <IESLiveWebImageService> webImageService; // @synthesize webImageService=_webImageService;
@property(retain, nonatomic) UIButton *chargeButton; // @synthesize chargeButton=_chargeButton;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) NSMutableArray *images; // @synthesize images=_images;
@property(retain, nonatomic) NSArray *descSeq; // @synthesize descSeq=_descSeq;
- (void).cxx_destruct;
- (void)tapChargeButton;
- (void)loadDescSeq;
- (void)downloadImagesWithCompletion:(CDUnknownBlockType)arg1;
- (void)setupUI;
- (void)loadWithDescSeq:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end


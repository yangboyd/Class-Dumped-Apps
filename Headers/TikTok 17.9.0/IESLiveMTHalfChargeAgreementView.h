//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;
@protocol HTSKVStore, IESLiveMTInternalRouter, IESLiveSettings;

@interface IESLiveMTHalfChargeAgreementView : UIView
{
    _Bool _selected;
    _Bool _isCheckOn;
    UILabel *_agreementLabel;
    id <IESLiveMTInternalRouter> _internalRouter;
    id <HTSKVStore> _kvStore;
    id <IESLiveSettings> _settings;
    long long _style;
}

- (void).cxx_destruct;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) id <HTSKVStore> kvStore; // @synthesize kvStore=_kvStore;
@property(retain, nonatomic) id <IESLiveMTInternalRouter> internalRouter; // @synthesize internalRouter=_internalRouter;
@property(nonatomic) _Bool isCheckOn; // @synthesize isCheckOn=_isCheckOn;
@property(retain, nonatomic) UILabel *agreementLabel; // @synthesize agreementLabel=_agreementLabel;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
- (void)tapAgreement;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1;

@end


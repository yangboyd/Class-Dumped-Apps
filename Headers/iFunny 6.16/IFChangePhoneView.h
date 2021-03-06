//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IFSettingsItemView, UIScrollView, UIStackView;

@interface IFChangePhoneView : UIView
{
    CDUnknownBlockType _onChangePhone;
    CDUnknownBlockType _onClearPhone;
    UIScrollView *_scrollView;
    UIStackView *_stackView;
    IFSettingsItemView *_changePhoneView;
    IFSettingsItemView *_clearPhoneView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IFSettingsItemView *clearPhoneView; // @synthesize clearPhoneView=_clearPhoneView;
@property(retain, nonatomic) IFSettingsItemView *changePhoneView; // @synthesize changePhoneView=_changePhoneView;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(copy, nonatomic) CDUnknownBlockType onClearPhone; // @synthesize onClearPhone=_onClearPhone;
@property(copy, nonatomic) CDUnknownBlockType onChangePhone; // @synthesize onChangePhone=_onChangePhone;
- (void)onSettingsItemViewTap:(id)arg1;
- (id)createSettingsItemViewWithTitle:(id)arg1 itemState:(unsigned long long)arg2 showArrow:(_Bool)arg3 showSwitch:(_Bool)arg4;
- (void)setUpView;
- (id)init;

@end


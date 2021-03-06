//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, STDSUICustomization, STPThreeDSFooterCustomization, STPThreeDSLabelCustomization, STPThreeDSNavigationBarCustomization, STPThreeDSSelectionCustomization, STPThreeDSTextFieldCustomization, UIColor;

@interface STPThreeDSUICustomization : NSObject
{
    STPThreeDSNavigationBarCustomization *_navigationBarCustomization;
    STPThreeDSLabelCustomization *_labelCustomization;
    STPThreeDSTextFieldCustomization *_textFieldCustomization;
    STPThreeDSFooterCustomization *_footerCustomization;
    STPThreeDSSelectionCustomization *_selectionCustomization;
    NSMutableDictionary *_buttonCustomizationDictionary;
    STDSUICustomization *_uiCustomization;
}

+ (id)defaultSettings;
- (void).cxx_destruct;
@property(retain, nonatomic) STDSUICustomization *uiCustomization; // @synthesize uiCustomization=_uiCustomization;
@property(retain, nonatomic) NSMutableDictionary *buttonCustomizationDictionary; // @synthesize buttonCustomizationDictionary=_buttonCustomizationDictionary;
@property(retain, nonatomic) STPThreeDSSelectionCustomization *selectionCustomization; // @synthesize selectionCustomization=_selectionCustomization;
@property(retain, nonatomic) STPThreeDSFooterCustomization *footerCustomization; // @synthesize footerCustomization=_footerCustomization;
@property(retain, nonatomic) STPThreeDSTextFieldCustomization *textFieldCustomization; // @synthesize textFieldCustomization=_textFieldCustomization;
@property(retain, nonatomic) STPThreeDSLabelCustomization *labelCustomization; // @synthesize labelCustomization=_labelCustomization;
@property(retain, nonatomic) STPThreeDSNavigationBarCustomization *navigationBarCustomization; // @synthesize navigationBarCustomization=_navigationBarCustomization;
@property(nonatomic) long long blurStyle;
@property(nonatomic) long long activityIndicatorViewStyle;
@property(retain, nonatomic) UIColor *backgroundColor;
- (id)buttonCustomizationForButtonType:(long long)arg1;
- (void)setButtonCustomization:(id)arg1 forType:(long long)arg2;
- (id)init;

@end


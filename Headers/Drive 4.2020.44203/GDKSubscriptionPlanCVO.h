//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GOOBaseContentViewObject.h>

@class NSString, SKProduct;
@protocol GDKStorageColorScheming, GDKSubscriptionPlanCVDelegate;

@interface GDKSubscriptionPlanCVO : GOOBaseContentViewObject
{
    _Bool _enabled;
    _Bool _googleOneStorageEnabled;
    long long _planSizeInBytes;
    unsigned long long _planLengthInMonths;
    NSString *_displayPrice;
    SKProduct *_product;
    id <GDKSubscriptionPlanCVDelegate> _delegate;
    double _buttonWidth;
    id <GDKStorageColorScheming> _colorScheme;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <GDKStorageColorScheming> colorScheme; // @synthesize colorScheme=_colorScheme;
@property(readonly, nonatomic) _Bool googleOneStorageEnabled; // @synthesize googleOneStorageEnabled=_googleOneStorageEnabled;
@property(readonly, nonatomic) double buttonWidth; // @synthesize buttonWidth=_buttonWidth;
@property(readonly, nonatomic) __weak id <GDKSubscriptionPlanCVDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) SKProduct *product; // @synthesize product=_product;
@property(readonly, nonatomic) NSString *displayPrice; // @synthesize displayPrice=_displayPrice;
@property(readonly, nonatomic) unsigned long long planLengthInMonths; // @synthesize planLengthInMonths=_planLengthInMonths;
@property(readonly, nonatomic) long long planSizeInBytes; // @synthesize planSizeInBytes=_planSizeInBytes;
- (Class)contentViewClass;
- (id)initWithPlanSize:(long long)arg1 displayPrice:(id)arg2 planLengthInMonths:(unsigned long long)arg3 product:(id)arg4 googleOneStorageEnabled:(_Bool)arg5 buttonWidth:(double)arg6 colorScheme:(id)arg7 delegate:(id)arg8;

@end


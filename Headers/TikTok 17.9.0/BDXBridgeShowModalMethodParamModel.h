//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BDXBridgeModel.h"

@class NSString, UIColor;

@interface BDXBridgeShowModalMethodParamModel : BDXBridgeModel
{
    _Bool _showCancel;
    _Bool _tapMaskToDismiss;
    NSString *_title;
    NSString *_content;
    NSString *_cancelText;
    UIColor *_cancelColor;
    NSString *_confirmText;
    UIColor *_confirmColor;
}

+ (id)confirmColorJSONTransformer;
+ (id)cancelColorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) _Bool tapMaskToDismiss; // @synthesize tapMaskToDismiss=_tapMaskToDismiss;
@property(retain, nonatomic) UIColor *confirmColor; // @synthesize confirmColor=_confirmColor;
@property(copy, nonatomic) NSString *confirmText; // @synthesize confirmText=_confirmText;
@property(retain, nonatomic) UIColor *cancelColor; // @synthesize cancelColor=_cancelColor;
@property(copy, nonatomic) NSString *cancelText; // @synthesize cancelText=_cancelText;
@property(nonatomic) _Bool showCancel; // @synthesize showCancel=_showCancel;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end


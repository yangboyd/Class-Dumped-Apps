//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SKTSelectedContactsDisplayColors-Protocol.h"

@class NSString, QTMColorGroup, SKTSelectedContactsDisplayColorOverrides, UIColor;

@interface SKTSelectedContactsDisplayColorsDark : NSObject <SKTSelectedContactsDisplayColors>
{
    SKTSelectedContactsDisplayColorOverrides *_colorOverrides;
    QTMColorGroup *_themeColorGroup;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QTMColorGroup *themeColorGroup; // @synthesize themeColorGroup=_themeColorGroup;
@property(retain, nonatomic) SKTSelectedContactsDisplayColorOverrides *colorOverrides; // @synthesize colorOverrides=_colorOverrides;
@property(retain, nonatomic) UIColor *sendKitIconColorLightGray;
@property(readonly, nonatomic) UIColor *activityIndicatorBackgroundColor;
@property(readonly, nonatomic) UIColor *defaultBackgroundColor;
@property(retain, nonatomic) UIColor *detailsTextColor;
@property(retain, nonatomic) UIColor *detailsBackgroundColor;
@property(retain, nonatomic) UIColor *chipUnselectedTextColor;
@property(retain, nonatomic) UIColor *chipSelectedTextColor;
@property(retain, nonatomic) UIColor *chipUnselectedBorderColor;
@property(retain, nonatomic) UIColor *chipUnselectedBackgroundColor;
@property(retain, nonatomic) UIColor *chipSelectedBackgroundColor;
@property(retain, nonatomic) UIColor *placeholderColor;
@property(readonly, nonatomic) UIColor *iconRegularColor;
@property(retain, nonatomic) UIColor *sendKitIconColorMediumGray;
@property(retain, nonatomic) UIColor *hintColor;
@property(retain, nonatomic) UIColor *textColor;
@property(retain, nonatomic) UIColor *backgroundColor;
- (id)initWithColorOverrides:(id)arg1 colorGroup:(id)arg2;
- (id)initWithColorGroup:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


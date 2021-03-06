//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SKTContactListColors-Protocol.h"

@class NSString, QTMColorGroup, UIColor;
@protocol SKTContactListColorOverrides;

@interface SKTContactListColorsLight : NSObject <SKTContactListColors>
{
    id <SKTContactListColorOverrides> _colorOverrides;
    QTMColorGroup *_themeColorGroup;
}

@property(retain, nonatomic) QTMColorGroup *themeColorGroup; // @synthesize themeColorGroup=_themeColorGroup;
@property(retain, nonatomic) id <SKTContactListColorOverrides> colorOverrides; // @synthesize colorOverrides=_colorOverrides;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIColor *iconRegularColor;
@property(retain, nonatomic) UIColor *sendKitIconColorLightGray;
@property(retain, nonatomic) UIColor *elevatedBackgroundColor;
@property(retain, nonatomic) UIColor *avatarBorderColor;
@property(retain, nonatomic) UIColor *sectionHeaderTextColor;
@property(retain, nonatomic) UIColor *inAppIconBackgroundColor;
@property(retain, nonatomic) UIColor *expanderColor;
@property(retain, nonatomic) UIColor *dividerColor;
@property(retain, nonatomic) UIColor *selectedIndicationColor;
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


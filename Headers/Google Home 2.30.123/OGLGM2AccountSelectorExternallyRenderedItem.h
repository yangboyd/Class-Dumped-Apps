//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OGLGM2AccountSelectorItem-Protocol.h"

@class NSString;

@interface OGLGM2AccountSelectorExternallyRenderedItem : NSObject <OGLGM2AccountSelectorItem>
{
    _Bool _cannotBeSelected;
    _Bool _isAccessibilityElement;
    _Bool _opaqueBackgroundColor;
    _Bool _withinManageAccounts;
    _Bool _withinInlineAccountMenu;
    NSString *_accessibilityIdentifier;
    NSString *_accessibilityLabel;
    NSString *_accessibilityHint;
    unsigned long long _accessibilityTraits;
    long long _brandFontFace;
    long long _accountMenuAppearance;
}

- (void).cxx_destruct;
@property(nonatomic) long long accountMenuAppearance; // @synthesize accountMenuAppearance=_accountMenuAppearance;
@property(nonatomic, getter=isWithinInlineAccountMenu) _Bool withinInlineAccountMenu; // @synthesize withinInlineAccountMenu=_withinInlineAccountMenu;
@property(nonatomic, getter=isWithinManageAccounts) _Bool withinManageAccounts; // @synthesize withinManageAccounts=_withinManageAccounts;
@property(nonatomic) long long brandFontFace; // @synthesize brandFontFace=_brandFontFace;
@property(nonatomic) _Bool opaqueBackgroundColor; // @synthesize opaqueBackgroundColor=_opaqueBackgroundColor;
@property(nonatomic) _Bool isAccessibilityElement; // @synthesize isAccessibilityElement=_isAccessibilityElement;
@property(nonatomic) unsigned long long accessibilityTraits; // @synthesize accessibilityTraits=_accessibilityTraits;
@property(copy, nonatomic) NSString *accessibilityHint; // @synthesize accessibilityHint=_accessibilityHint;
@property(copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(copy, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(nonatomic) _Bool cannotBeSelected; // @synthesize cannotBeSelected=_cannotBeSelected;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


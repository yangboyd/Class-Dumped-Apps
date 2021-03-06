//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBPayBaseCellViewModel-Protocol.h>

@class NSString, UIImage;

@interface FBPayNoStateCellViewModel : NSObject <FBPayBaseCellViewModel>
{
    _Bool _hasSelectAction;
    NSString *_reuseIdentifier;
    long long _cellType;
    CDUnknownBlockType _selectAction;
    CDUnknownBlockType _ctaAction;
    NSString *_accessibilityLabel;
    NSString *_accessibilityValue;
    NSString *_accessibilityHint;
    unsigned long long _accessibilityTrait;
    UIImage *_icon;
    NSString *_title;
    NSString *_subtitle;
    NSString *_ctaText;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *ctaText; // @synthesize ctaText=_ctaText;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) unsigned long long accessibilityTrait; // @synthesize accessibilityTrait=_accessibilityTrait;
@property(readonly, nonatomic) NSString *accessibilityHint; // @synthesize accessibilityHint=_accessibilityHint;
@property(readonly, nonatomic) NSString *accessibilityValue; // @synthesize accessibilityValue=_accessibilityValue;
@property(readonly, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(readonly, nonatomic) CDUnknownBlockType ctaAction; // @synthesize ctaAction=_ctaAction;
@property(copy, nonatomic) CDUnknownBlockType selectAction; // @synthesize selectAction=_selectAction;
@property(readonly, nonatomic) _Bool hasSelectAction; // @synthesize hasSelectAction=_hasSelectAction;
@property(readonly, nonatomic) long long cellType; // @synthesize cellType=_cellType;
@property(readonly, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
- (id)initWithIcon:(id)arg1 title:(id)arg2 subtitle:(id)arg3 ctaText:(id)arg4 reuseIdentifier:(id)arg5 ctaAction:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


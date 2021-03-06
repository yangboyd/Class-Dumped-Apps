//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGListDiffable-Protocol.h>

@class IGTableLayoutSpec, NSString, UIImage;

@interface IGSideTrayRowItemModel : NSObject <IGListDiffable>
{
    NSString *_title;
    NSString *_detailText;
    UIImage *_image;
    long long _badgeCount;
    long long _badgeStyle;
    IGTableLayoutSpec *_layoutSpec;
    long long _type;
    NSString *_tapAction;
    CDUnknownBlockType _tapActionBlock;
    NSString *_accessibilityIdentifier;
}

@property(readonly, copy, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(readonly, copy, nonatomic) CDUnknownBlockType tapActionBlock; // @synthesize tapActionBlock=_tapActionBlock;
@property(readonly, copy, nonatomic) NSString *tapAction; // @synthesize tapAction=_tapAction;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) IGTableLayoutSpec *layoutSpec; // @synthesize layoutSpec=_layoutSpec;
@property(readonly, nonatomic) long long badgeStyle; // @synthesize badgeStyle=_badgeStyle;
@property(nonatomic) long long badgeCount; // @synthesize badgeCount=_badgeCount;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 image:(id)arg3 layoutSpec:(id)arg4 type:(long long)arg5 badgeStyle:(long long)arg6 tapAction:(id)arg7 actionBlock:(CDUnknownBlockType)arg8 accessibilityIdentifier:(id)arg9;

@end


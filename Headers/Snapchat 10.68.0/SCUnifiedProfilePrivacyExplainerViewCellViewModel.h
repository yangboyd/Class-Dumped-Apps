//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSAttributedString, NSString, SCActionModel, SCUnifiedProfileListCellActionButtonViewModel;

@interface SCUnifiedProfilePrivacyExplainerViewCellViewModel : NSObject <NSCopying>
{
    NSAttributedString *_title;
    NSAttributedString *_subtitle;
    NSString *_leftIconImageAsset;
    SCUnifiedProfileListCellActionButtonViewModel *_rightIconViewModel;
    SCActionModel *_rightIconTapActionModel;
    NSString *_rightIconAccessibilityIdentifier;
}

@property(readonly, copy, nonatomic) NSString *rightIconAccessibilityIdentifier; // @synthesize rightIconAccessibilityIdentifier=_rightIconAccessibilityIdentifier;
@property(readonly, copy, nonatomic) SCActionModel *rightIconTapActionModel; // @synthesize rightIconTapActionModel=_rightIconTapActionModel;
@property(readonly, copy, nonatomic) SCUnifiedProfileListCellActionButtonViewModel *rightIconViewModel; // @synthesize rightIconViewModel=_rightIconViewModel;
@property(readonly, copy, nonatomic) NSString *leftIconImageAsset; // @synthesize leftIconImageAsset=_leftIconImageAsset;
@property(readonly, copy, nonatomic) NSAttributedString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSAttributedString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 leftIconImageAsset:(id)arg3 rightIconViewModel:(id)arg4 rightIconTapActionModel:(id)arg5 rightIconAccessibilityIdentifier:(id)arg6;

@end


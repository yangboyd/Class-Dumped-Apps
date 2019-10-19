//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSAttributedString, NSString, SCActionModel, SCDiscoverFeedSectionHeaderSwipeTeachingViewModel, UIColor;

@interface SCDiscoverFeedSectionHeaderViewModel : NSObject <NSCopying>
{
    NSString *_primaryTitle;
    UIColor *_primaryTitleColor;
    NSAttributedString *_attributeSecondaryButtonText;
    double _leftMargin;
    double _rightMargin;
    SCActionModel *_primaryButtonActionModel;
    SCActionModel *_secondaryButtonActionModel;
    SCActionModel *_debugActionModel;
    SCDiscoverFeedSectionHeaderSwipeTeachingViewModel *_swipeTeachingViewModel;
}

@property(readonly, copy, nonatomic) SCDiscoverFeedSectionHeaderSwipeTeachingViewModel *swipeTeachingViewModel; // @synthesize swipeTeachingViewModel=_swipeTeachingViewModel;
@property(readonly, copy, nonatomic) SCActionModel *debugActionModel; // @synthesize debugActionModel=_debugActionModel;
@property(readonly, copy, nonatomic) SCActionModel *secondaryButtonActionModel; // @synthesize secondaryButtonActionModel=_secondaryButtonActionModel;
@property(readonly, copy, nonatomic) SCActionModel *primaryButtonActionModel; // @synthesize primaryButtonActionModel=_primaryButtonActionModel;
@property(readonly, nonatomic) double rightMargin; // @synthesize rightMargin=_rightMargin;
@property(readonly, nonatomic) double leftMargin; // @synthesize leftMargin=_leftMargin;
@property(readonly, copy, nonatomic) NSAttributedString *attributeSecondaryButtonText; // @synthesize attributeSecondaryButtonText=_attributeSecondaryButtonText;
@property(readonly, copy, nonatomic) UIColor *primaryTitleColor; // @synthesize primaryTitleColor=_primaryTitleColor;
@property(readonly, copy, nonatomic) NSString *primaryTitle; // @synthesize primaryTitle=_primaryTitle;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPrimaryTitle:(id)arg1 primaryTitleColor:(id)arg2 attributeSecondaryButtonText:(id)arg3 leftMargin:(double)arg4 rightMargin:(double)arg5 primaryButtonActionModel:(id)arg6 secondaryButtonActionModel:(id)arg7 debugActionModel:(id)arg8 swipeTeachingViewModel:(id)arg9;

@end


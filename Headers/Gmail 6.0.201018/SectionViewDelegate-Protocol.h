//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SectionView, UIButton;

@protocol SectionViewDelegate <NSObject>
- (void)sectionView:(SectionView *)arg1 didTapSweepButton:(UIButton *)arg2;

@optional
- (NSString *)accessibilityTitleForSectionView:(SectionView *)arg1;
- (void)didChangeExtraViewInSectionView:(SectionView *)arg1;
@end


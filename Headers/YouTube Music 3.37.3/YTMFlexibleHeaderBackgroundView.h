//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface YTMFlexibleHeaderBackgroundView : UIView
{
    double _expansionCoefficient;
    unsigned long long _navBarRightButtonsCount;
}

@property(nonatomic) unsigned long long navBarRightButtonsCount; // @synthesize navBarRightButtonsCount=_navBarRightButtonsCount;
@property(nonatomic) double expansionCoefficient; // @synthesize expansionCoefficient=_expansionCoefficient;
- (void)setOverscroll:(double)arg1;
@property(readonly, nonatomic) _Bool shouldHideNavigationBarTitle;
@property(readonly, nonatomic) double maximumHeight;
@property(readonly, nonatomic) double minimumHeight;
- (void)setFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol HUBColorScheme;

@interface HUBOnboardingPageCounterView : UIView
{
    unsigned long long _selectedIndex;
    unsigned long long _count;
    id <HUBColorScheme> _colorScheme;
}

- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (id)pageCounterCircleViewWithSelected:(_Bool)arg1;
- (void)createSubviews;
- (id)initWithColorScheme:(id)arg1 count:(unsigned long long)arg2 selectedIndex:(unsigned long long)arg3;

@end

